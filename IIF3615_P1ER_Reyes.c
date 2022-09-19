#include <stdio.h>

void main() {
    int n; // Largo del vector
    int l[n]; // Lista representada por el vector L de largo N.
    
    int sl1[n]; // Sublista 1 del mismo tama�o de la lista 'l' (n)
    
    int mitad; // Mitad de la lista
    int x; // Cantidad de numeros que se desea mostrar en caso de N ser par
    
    int i; // Variable auxiliar para ciclos
    int aux1; // Variable auxiliar para calcular la mitad de la lista
    
    int antes;
    int despues;

	do {
		printf("Ingrese el largo (N) de la lista: ");
    	scanf("%i", &n);
	} while (n <= 0); // Rechazamos los valores menores o igual a 0 ya que nuestra lista debe tener un tama�o de al menos 1.
    
    // Llenado con valores de la lista
    for (i = 0; i < n; i++) {
    	printf("Ingrese un valor para la lista: ", i);
    	scanf("%i", &l[i]);
    }
    
    // Calcular la mitad de la lista
    mitad = (n / 2) - 1;
    
    if (n % 2 == 0) {
    	// Obtener sublista l1
    	do {
    		printf("Ingrese un valor para X: ");
    		scanf("%i", &x);
		} while (x < 0); // Rechazamos valores menores a 0 para llenar la sublista con al menos 1 valor.
    	
    	// Indices desde la mitad de la lista hasta el valor X
		antes = mitad - x + 1; // El siguiente calculo obtendr� el �ndice desde donde se debe iniciar el ciclo for, en caso que X = 2, entonces el indice de partida ser� 2.
		despues = mitad + x;
		
		// Guardar X valores anteriores, desde la mitad de la lista.
		for (i = antes; i < mitad + 1; i++) // El ciclo inicia desde el �ndice 2 hasta el �ndice 3
			sl1[i - x] = l[i - 1];
			//printf("\nSL1[%i]: %i  ; V.O L[%i]: %i", (i - x), sl1[i - x], (i - 1), l[i - 1]);
		
			
		// Guardar X valores siguientes, desde la mitad de la lista.
		for (i = mitad + 1; i < despues + 1; i++) // El ciclo inicia desde el �ndice 4 hasta el �ndice 5
			sl1[i - x] = l[i];
			//printf("\nSL1[%i]: %i  ; V.O L[%i]: %i", (i - x), sl1[i - x], (i - 1), l[i]);
		
		
		/* Entrega de la sublista
			Si bien nuestra sublista sl1 es del mismo tama�o de la lista 'l' (n), solo mostraremos
			los indices en los cuales si se ha guardado un valor.
		*/
		printf("\nLa sublista SL1 que contiene %i valores anteriores y siguientes al punto medio (indice %i) queda de la siguiente forma: ", x, mitad);
		for (i = 0; i < x + x; i++)
			printf("\nSL1[%i]: %i", i, sl1[i]);
			
	} else {
		mitad = (n / 2);
		
		for (i = 0; i < mitad; i++) { // Recorremos el vector hasta la mitad
			aux1 = l[i]; // Nuestra variable auxiliar ayudar� a que no se pierda el valor en el ciclo
			l[i] = l[n - 1 - i]; // Se le reasigna el valor ubicado en el �ltimo �ndice en el primer ciclo, en el segundo ciclo el penultimo valor...
			l[n - 1 - i] = aux1; // Se le reasigna el valor guardado en aux1 en el �ndice �ltimo en el primer ciclo, en el segundo ciclo en el penultimo �ndice...
		}
		
		// Entregar lista re-ordenada
		printf("\nLa lista L luego del intercambio de valores queda de la siguiente forma: ");
		for (i = 0; i < n; i++) {
			printf("\nL[%i]: %i", i, l[i]);
		}
	}

}

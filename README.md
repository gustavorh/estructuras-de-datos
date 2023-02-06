## Introducción
Este código en C realiza el cálculo de una sublista (`sl1`) que se obtiene a partir de una lista dada (`l`) y que incluye una cantidad determinada de valores tanto antes como después de la mitad de la lista.

## Funciones
- `main`: función principal que controla el flujo del programa.

## Variables
- `n`: Largo del vector que representa la lista `l`.
- `l`: Lista representada por el vector de largo `n`.
- `sl1`: Sublista 1 del mismo tamaño de la lista `l` (`n`).
- `mitad`: Mitad de la lista.
- `x`: Cantidad de números que se desea mostrar en caso de que `n` sea par.
- `i`: Variable auxiliar para ciclos.
- `aux1`: Variable auxiliar para calcular la mitad de la lista.
- `antes`: Valor que indica el índice desde donde se deben extraer los valores anteriores a la mitad de la lista.
- `despues`: Valor que indica el índice hasta donde se deben extraer los valores después de la mitad de la lista.

## Flujo del código
1. Se solicita al usuario que ingrese el largo (`n`) de la lista y se rechazan los valores menores o iguales a 0.
2. Se llena la lista con valores ingresados por el usuario.
3. Se calcula la mitad de la lista y se almacena en la variable `mitad`.
4. En caso de que `n` sea par, se solicita al usuario que ingrese un valor para `x` y se rechazan los valores menores a 0.
5. Se calculan los índices desde donde se deben extraer los valores tanto antes como después de la mitad de la lista.
6. Se guardan `x` valores anteriores y `x` valores después de la mitad de la lista en la sublista `sl1`.
7. Se muestra la sublista `sl1` con los valores guardados.

## Consideraciones
- La lista `l` debe tener un tamaño de al menos 1.
- En caso de que `n` sea par, la cantidad de números que se desean mostrar en la sublista debe ser al menos 1.


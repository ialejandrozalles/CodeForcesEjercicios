https://codeforces.com/gym/105891/problem/A
# A. Color

> **límite de tiempo por prueba:** 1 segundo  
> **límite de memoria por prueba:** 512 megabytes

Xiao Ming compró una cinta con _n_ segmentos. El segmento _i_-ésimo inicialmente tiene color _c<sub>i</sub>_. A Xiao Ming le gustan las cintas de color uniforme, por lo que necesita pintar cada segmento de la cinta con un único color.

Para una operación de pintado _(l, r, c)_, el intervalo [l, r] de la cinta puede pintarse con el color _c_ a un costo de:

```
w_c + (r - l + 1)
```

donde _w<sub>c</sub>_ es el precio del color _c_.

Ahora, para cada color _c_ = 1, 2, ..., _n_, determina el costo mínimo para que Xiao Ming pinte la cinta entera de color _c_.

## Entrada

La primera línea contiene _n_.

La segunda línea contiene _n_ enteros positivos, que representan _c<sub>1</sub>_, ..., _c<sub>n</sub>_.

La tercera línea contiene _n_ enteros positivos, que representan _w<sub>1</sub>_, ..., _w<sub>n</sub>_.

1 ≤ _n_ ≤ 2·10⁵, 1 ≤ _c<sub>i</sub>_, _w<sub>i</sub>_ ≤ _n_.

## Salida

Imprime en una sola línea _n_ números, que representan las respuestas para los colores 1, 2, ..., _n_.

## Ejemplos

```plaintext
input
4
1 2 2 1
1 10 2 1

output
3 14 6 5
```

```plaintext
input
5
1 3 2 3 5
5 5 5 5 5

output
9 10 10 9 9
```
# A. Pulsaciones de Enter

> **límite de tiempo por prueba:** 1 segundo
> **límite de memoria por prueba:** 256 megabytes

Slava casi había terminado de escribir el enunciado del último problema para la Ronda de Clasificatoria de ICPC Kirguistán: ¡solo faltaba un poco y el problema estaría listo!

Además, Slava logró escribir todo el enunciado sin espacios, tabulaciones ni saltos de línea (él mismo no entiende cómo lo consiguió).

Eufórico, Slava se fue a prepararse un delicioso té.

Fue en ese momento cuando Anatoly se acercó sigilosamente al portátil de Slava y empezó a pulsar la tecla Enter en lugares al azar.

Cuando Slava regresó, todo estaba perdido: en lugar de un enunciado coherente, solo vio fragmentos separados por saltos de línea.

Ayuda a Slava a evaluar el daño: calcula cuántas veces Anatoly logró pulsar la tecla Enter.

Por ejemplo, Slava escribió el enunciado
```
abracadabra
```
Pero luego Anatoly vino y pulsó la tecla Enter 4 veces, obteniendo los siguientes 5 fragmentos:
```
ab
rac
ada
b
ra
```

## Entrada

La primera línea contiene un entero _n_ (1 ≤ _n_ ≤ 100) — el número de partes en que se ha fragmentado el enunciado original.

Cada una de las siguientes _n_ líneas contiene una cadena _s<sub>i</sub>_ (1 ≤ |_s<sub>i</sub>_| ≤ 10) — el _i_-ésimo fragmento del enunciado original.

Cada fragmento consta solo de letras minúsculas latinas.

Se garantiza que los fragmentos se dan en el mismo orden en que aparecían en el enunciado original.

## Salida

Imprime un solo entero: el número mínimo de veces que Anatoly tuvo que pulsar la tecla Enter para transformar el enunciado original en los _n_ fragmentos dados.

## Ejemplo

```plaintext
input
5
ab
rac
ada
b
ra

output
4
```
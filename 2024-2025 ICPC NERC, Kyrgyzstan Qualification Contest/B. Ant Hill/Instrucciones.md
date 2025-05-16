# B. Hormiguero

> **límite de tiempo por prueba:** 2 segundos  
> **límite de memoria por prueba:** 256 megabytes

Has encontrado un hormiguero muy interesante. Estás tan intrigado que has decidido averiguar cuántas hormigas había dentro en el momento inicial (cuando lo descubriste).

Para ello, observaste durante el día y registraste un arreglo _a<sub>i</sub>_ — cuántas hormigas entraron o salieron en el _i_-ésimo instante de tiempo:

- |_*a<sub>i</sub>*_| representa el número de hormigas;  
- El signo del número indica la dirección (menos — salieron, más — entraron).

Usando tus observaciones, determina el número mínimo de hormigas que podrían haber estado dentro del hormiguero antes de que empezaran las observaciones.

Ten en cuenta que en ningún momento podría haber un número negativo de hormigas dentro del hormiguero.

## Entrada

La primera línea contiene un entero _n_ (1 ≤ _n_ ≤ 10⁵) — el número de observaciones realizadas.

La segunda línea contiene _n_ enteros _a₁, a₂, …, aₙ_ (−10⁶ ≤ _a<sub>i</sub>_ ≤ 10⁶ para _i_ = 1, 2, …, _n_) — el resultado de la _i_-ésima observación.

## Salida

En una sola línea, imprime un entero: el número mínimo posible de hormigas dentro del hormiguero antes de que comenzaran las observaciones.

## Ejemplo

```plaintext
input
3
20 -50 30

output
30
```

**Nota**

Durante las observaciones del ejemplo:

- Al principio, había 30 hormigas dentro.
- Entraron 20 — en total había 50.
- Salieron 50 — no quedó ninguna hormiga.
- Entraron 30 — quedaron 30 hormigas dentro.
## PUSH_SWAP

Push Swap é um algoritmo de ordenação implementado em C, projetado para eficientemente ordenar uma pilha de inteiros usando um conjunto específico de operações.

O objetivo do algoritmo é minimizar o número de operações necessárias para ordenar a pilha, alcançando um processo de ordenação otimizado.

### Implementação

O algoritmo Push Swap pode ser implementado utilizando diversas estruturas de dados, como pilhas (LIFO - Last In First Out) ou listas encadeadas. Para este projeto, recomenda-se o uso de uma estrutura de lista duplamente encadeada para uma manipulação eficiente da pilha.

- Criação de uma estrutura de lista duplamente encadeada para representar os nós da pilha, onde cada nó contém um valor inteiro e ponteiros para os nós anteriores e seguintes.
- Implementação de funções para inicialização da pilha, operações de pilha (push, pop, swap, rotate e reverse rotate) e para a ordenação da pilha.

### Algoritmos de Ordenação

O algoritmo Push Swap utiliza diferentes técnicas de ordenação dependendo do número de elementos na pilha:

- Para pilhas pequenas (tipicamente 3 elementos ou menos), utiliza-se um algoritmo baseado em permutações, que verifica todas as combinações possíveis para determinar o número mínimo de operações necessárias.
- Para pilhas maiores, são implementados algoritmos de ordenação mais eficientes como Quicksort ou Mergesort. Estes algoritmos dividem a pilha em subconjuntos menores, ordenam esses subconjuntos de forma recursiva e depois combinam para obter a ordenação final.

### Uso

Para compilar o programa Push Swap, execute o seguinte comando:

```bash
make
```

Para usar o programa Push Swap, forneça uma série de inteiros como argumentos:

```bash
./push_swap <inteiros>
```

Por exemplo:

```bash
./push_swap 5 2 7 1 4
```

O programa exibirá uma lista de operações para ordenar a pilha de entrada. Cada operação é representada por um código de duas ou três letras. O objetivo é minimizar o número total de operações para obter uma ordenação eficiente da pilha.

### Recursos

Para iniciar este projeto, você pode consultar os seguintes recursos:

- [Lista duplamente encadeada em C: GeeksforGeeks](https://www.geeksforgeeks.org/doubly-linked-list/)
- [Algoritmos de ordenação: GeeksforGeeks - Sorting](https://www.geeksforgeeks.org/sorting-algorithms/)
- [Algoritmo Quicksort: Wikipédia](https://en.wikipedia.org/wiki/Quicksort)
- [Algoritmo Mergesort: Wikipédia](https://en.wikipedia.org/wiki/Merge_sort)

Sinta-se à vontade para explorar mais recursos e implementar otimizações adicionais para aumentar a eficiência do seu algoritmo Push Swap.

### Autor

Criado por Lee Sin Liang

### Reconhecimentos

Este projeto foi concluído como parte do currículo da 42 School.

---

Essas alterações visam tornar o README mais claro e informativo, destacando a implementação, os algoritmos utilizados e os recursos recomendados para aprender mais sobre o projeto.

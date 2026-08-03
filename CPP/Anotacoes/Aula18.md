# **Curso de C++ #18 - Array / Vetor**

Nesta aula do canal **CFBCursos**, o professor Bruno introduz o conceito de **Arrays (ou Vetores)** em C++, explicando como declarar, inicializar, atribuir valores e ler os dados armazenados em coleções unidimensionais [[00:06](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=6)].

---

## **Conceitos e Tópicos Abordados**

* **O que é um Array / Vetor** [[00:20](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=20)]:
* Um vetor é uma estrutura contínua de memória que armazena uma coleção de variáveis do **mesmo tipo** sob um único nome [[00:20](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=20)].
* Evita a necessidade de declarar várias variáveis individuais (ex.: criar um vetor de tamanho 5 em vez de declarar 5 variáveis inteiras distintas) [[01:10](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=70)].

* **Declaração e Índices (Base Zero)** [[03:16](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=196)]:
* **Sintaxe básica:** `tipo nome[tamanho];` (ex.: `int vetor[5];`) [[03:39](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=219)].
* Em C++, a indexação de arrays é **baseada em zero** (*zero-based*): a primeira posição possui o índice `0` e a última posição possui o índice `tamanho - 1` [[05:36](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=336)].
* Exemplo: Em um vetor com tamanho 5, os índices válidos variam de `0` a `4` [[07:26](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=446)].

* **Acesso Fora dos Limites (*Lixo de Memória*)** [[07:33](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=453)]:
* Tentar acessar uma posição além dos limites declarados (ex.: acessar `vetor[5]` em um vetor de 5 elementos) faz o programa ler dados de posições de memória não reservadas, retornando "lixo de memória" [[10:25](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=625)].
* Isso pode causar erros de execução graves e comportamentos imprevisíveis [[10:53](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=653)].

* **Percorrendo Vetores com o Laço `for**` [[11:42](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=702)]:
* A estrutura de repetição `for` é a mais adequada para iterar sobre vetores, usando a própria variável de controle do laço como índice de acesso (`vetor[i]`) [[13:56](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=836)].

* **Controle Dinâmico de Tamanho com `sizeof**` [[15:01](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=901)]:
* Ao usar o operador `sizeof`, é possível calcular o número exato de elementos dividindo o tamanho total do vetor em bytes pelo tamanho em bytes do tipo de dado: `sizeof(vetor) / 4` (considerando inteiros de 4 bytes) [[16:36](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=996)].
* Isso permite alterar o tamanho do vetor na declaração sem precisar modificar manualmente o limite do laço `for` [[17:30](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=1050)].

* **Inicialização Direta na Declaração** [[19:15](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=1155)]:
* É possível atribuir valores diretamente durante a criação do vetor usando chaves: `int vetor[5] = {10, 20, 30, 40, 50};` [[19:24](http://www.youtube.com/watch?v=JLDuxLRjBK4&t=1164)].

---

## **Link do Vídeo**

* [Curso de C++ #18 - Array / Vetor](http://www.youtube.com/watch?v=JLDuxLRjBK4)

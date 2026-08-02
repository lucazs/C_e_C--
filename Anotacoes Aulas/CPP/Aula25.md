# Curso de C++ #25 - Funções recursivas (recursividade) (CFBCursos)

---

## **Resumo do Vídeo**

Nesta aula, o professor Bruno aborda o conceito de **recursividade** em C++, que ocorre quando uma função chama a si mesma [[00:06](http://www.youtube.com/watch?v=KuipEEelnpU&t=6)]. É explicado como funciona esse processo na memória e a importância de estabelecer uma **condição de parada** para evitar que a função entre em um laço de chamadas infinitas [[00:16](http://www.youtube.com/watch?v=KuipEEelnpU&t=16)].

---

## **Conceitos e Tópicos Abordados**

* **O que é Recursividade?** [[00:36](http://www.youtube.com/watch?v=KuipEEelnpU&t=36)]:
* Trata-se da capacidade de uma função invocar a si própria repetidas vezes dentro de seu próprio corpo [[00:10](http://www.youtube.com/watch?v=KuipEEelnpU&t=10)].
* Subsititui laços de repetição (como `for` ou `while`) em determinados cenários de processamento [[05:40](http://www.youtube.com/watch?v=KuipEEelnpU&t=340)].

* **Condição de Parada (Caso Base)** [[00:16](http://www.youtube.com/watch?v=KuipEEelnpU&t=16)]:
* Toda função recursiva **precisa** de uma verificação lógica que interrompa as novas chamadas; caso contrário, ocorrerá estouro de memória (*stack overflow*) [[00:24](http://www.youtube.com/watch?v=KuipEEelnpU&t=24)].

* **Comportamento na Memória (Registro de Ativação)** [[10:39](http://www.youtube.com/watch?v=KuipEEelnpU&t=639)]:
* Cada nova chamada da função gera um **novo registro de ativação** na pilha de memória (*call stack*) [[11:06](http://www.youtube.com/watch?v=KuipEEelnpU&t=666)].
* Cada registro possui suas próprias cópias de variáveis locais e parâmetros [[11:06](http://www.youtube.com/watch?v=KuipEEelnpU&t=666)].

* **Exemplo Prático Demonstrado** [[02:18](http://www.youtube.com/watch?v=KuipEEelnpU&t=138)]:

1. Inicialmente, o professor cria um contador comum utilizando o laço `for` [[03:15](http://www.youtube.com/watch?v=KuipEEelnpU&t=195)].
2. Em seguida, refatora a função `contador` para utilizar **recursividade** [[05:14](http://www.youtube.com/watch?v=KuipEEelnpU&t=314)]:

* Utiliza argumento com valor padrão no protótipo: `void contador(int num, int conte = 0);` [[06:29](http://www.youtube.com/watch?v=KuipEEelnpU&t=389)].
* Imprime o valor atual de `conte` [[06:03](http://www.youtube.com/watch?v=KuipEEelnpU&t=363)].
* Testa se `num > conte` (condição de parada) [[07:16](http://www.youtube.com/watch?v=KuipEEelnpU&t=436)].
* Se verdadeiro, chama a si mesma passando `contador(num, ++conte);` com um pré-incremento [[09:04](http://www.youtube.com/watch?v=KuipEEelnpU&t=544)].

---

## **Desafio Proposto** [[13:01](http://www.youtube.com/watch?v=KuipEEelnpU&t=781)]

O professor propõe a criação de duas funções recursivas clássicas como exercício [[13:11](http://www.youtube.com/watch?v=KuipEEelnpU&t=791)]:

1. **Fatorial** [[13:42](http://www.youtube.com/watch?v=KuipEEelnpU&t=822)]:

* Exemplo: $4! = 4 \times 3 \times 2 \times 1 = 24$ [[13:42](http://www.youtube.com/watch?v=KuipEEelnpU&t=822)].

1. **Sequência de Fibonacci** [[14:10](http://www.youtube.com/watch?v=KuipEEelnpU&t=850)]:

* Sequência onde cada termo é a soma dos dois anteriores: $0, 1, 1, 2, 3, 5, 8, 13, \dots$ [[14:25](http://www.youtube.com/watch?v=KuipEEelnpU&t=865)].

---

**Link do vídeo:** [Curso de C++ #25 - Funções recursivas (recursividade)](http://www.youtube.com/watch?v=KuipEEelnpU)

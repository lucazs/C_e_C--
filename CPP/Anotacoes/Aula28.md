# Curso de C++ #28 - Pilha / Stack - Parte 1 (CFBCursos)

---

## **Resumo do Vídeo**

Nesta aula, o professor Bruno apresenta a estrutura de dados **Pilha (*Stack*)** em C++ [[00:07](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=7)]. É explicado o funcionamento do conceito **LIFO** (*Last In, First Out* — "O último a entrar é o primeiro a sair"), além de demonstrar como incluir a biblioteca própria do C++ e utilizar os seus métodos fundamentais de manipulação [[03:03](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=183)].

---

## Conceitos e Tópicos Abordados

* **O Conceito de Pilha (Estrutura LIFO)** [[00:43](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=43)]:
* Uma pilha funciona de maneira análoga a um tubo com um lado fechado ou a um monte de cartas [[01:08](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=68)].
* **O primeiro elemento a entrar é o último a sair**, e **o último elemento a entrar é o primeiro a ser removido/trabalhado** [[03:03](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=183)].

* **Inclusão da Biblioteca** [[04:18](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=258)]:
* Para utilizar pilhas no C++, é necessário incluir o cabeçalho `#include <stack>` no início do programa [[04:18](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=258)].

* **Declaração da Pilha** [[06:37](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=397)]:
* A sintaxe de declaração utiliza o tipo entre chevrons `<>`:

```cpp
std::stack<std::string> cartas;

```

* O tamanho da pilha é **dinâmico** e ajusta-se automaticamente conforme os elementos são adicionados ou removidos [[07:48](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=468)].

* **Principais Métodos da Estrutura `std::stack**` [[17:18](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=1038)]:
* **`.push(elemento)`** [[08:13](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=493)]: Adiciona um novo elemento no topo da pilha.
* **`.pop()`** [[12:27](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=747)]: Remove o elemento localizado no topo da pilha (não possui retorno).
* **`.top()`** [[13:54](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=834)]: Retorna o valor do elemento localizado no topo da pilha sem removê-lo.
* **`.size()`** [[11:24](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=684)]: Retorna a quantidade total de elementos presentes na pilha.

* **Exemplo Prático Demonstrado** [[07:04](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=424)]:

1. Criação de uma pilha de *strings* chamada `cartas` [[07:04](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=424)].
2. Inserção sequencial de 4 cartas com `.push()`: Rei de Copas, Rei de Espadas, Rei de Ouros e Rei de Paus [[09:05](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=545)].
3. Verificação do tamanho inicial da pilha (`.size() = 4`) e leitura do elemento do topo (`.top() = "Rei de Paus"`) [[11:50](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=710), [14:50](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=890)].
4. Execução de comandos `.pop()` para remover elementos do topo e visualização do novo elemento do topo sendo atualizado dinamicamente [[16:06](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=966)].

---

### **Próximo Tópico do Curso** [[17:35](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=1055)]

* O professor avisa que na parte 2 da aula de Pilhas serão apresentados métodos adicionais (como `.empty()`) e comandos para esvaziar/percorrer todos os elementos de uma pilha utilizando laços de repetição [[17:59](http://www.youtube.com/watch?v=mGLtyCOJe4A&t=1079)].

---

**Link do vídeo:** [Curso de C++ #28 - Pilha / Stack - Parte 1](http://www.youtube.com/watch?v=mGLtyCOJe4A)

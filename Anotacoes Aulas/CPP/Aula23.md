# **Curso de C++ #23 - Sobrecarga de funções (CFBCursos)**

## **Resumo do Vídeo**

Nesta aula, o professor Bruno apresenta o conceito de **sobrecarga de funções** (*function overloading*) em C++. A sobrecarga permite criar duas ou mais funções com o **mesmo nome** dentro do mesmo programa, desde que a lista de parâmetros/argumentos de entrada seja diferente para cada uma delas.

---

## **Conceitos e Tópicos Abordados**

* **O que é Sobrecarga de Funções?**:
* É a capacidade de definir múltiplas funções com o mesmo identificador (nome).
* O compilador diferencia qual função deve ser executada analisando a **quantidade**, os **tipos** ou a **ordem dos argumentos** passados na chamada da função.

* **Regra Fundamental**:
* As assinaturas (lista de parâmetros de entrada) devem ser **diferentes**.
* Ter apenas tipos de retorno diferentes **não** é suficiente para realizar a sobrecarga.

* **Exemplo Prático Demonstrado**:

1. **Função 1 (sem parâmetros)**:

* Sintaxe: `void soma();`
* A função inicializa variáveis locais internas (`n1 = 10`, `n2 = 20`) e imprime o resultado da soma (`30`).

1. **Função 2 (com 2 parâmetros inteiros)**:

* Sintaxe: `void soma(int n1, int n2);`
* A função recebe os valores dinamicamente na chamada (ex: `soma(20, 30)`), calcula o resultado (`50`) e exibe na tela.

* **Prototipagem e Chamada**:
* Ambos os protótipos (`void soma();` e `void soma(int n1, int n2);`) devem ser apresentados antes da função `main()`.
* Na `main()`, ao invocar `soma()`, o compilador executa a versão sem parâmetros; ao invocar `soma(20, 30)`, executa a versão sobrecarregada com dois parâmetros.

---

**Link do vídeo:** [Curso de C++ #23 - Sobrecarga de funções](http://www.youtube.com/watch?v=tPsc2WckHc4)

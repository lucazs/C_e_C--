# "Curso de C++ #22 - Funções - Parte 1"** do canal CFBCursos

---

## **Resumo do Vídeo**

Nesta aula, o professor Bruno introduz o conceito e o funcionamento de **funções em C++** [[00:18](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=18)]. São apresentadas as formas de criar, prototipar e invocar funções, abordando desde funções simples sem retorno até funções que recebem múltiplos parâmetros, retornam valores com a instrução `return` ou processam vetores (arrays) completos [[00:26](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=26)].

---

## **Conceitos e Tópicos Abordados**

* **A Função `main**` [[01:43](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=103)]:
* Toda aplicação em C++ já possui pelo menos uma função principal, a `int main()`, que retorna um inteiro `0` ao sistema operacional para indicar que o programa foi executado sem erros [[02:01](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=121)].

* **Prototipagem de Funções** [[07:47](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=467)]:
* Quando as funções são declaradas após o bloco da função `main()`, é necessário realizar a **prototipagem** (apresentação da assinatura da função no início do código) [[08:20](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=500)].
* Sem o protótipo no topo do arquivo, o compilador exibirá um erro de escopo ao tentar invocar a função [[07:37](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=457)].

* **Função Sem Retorno (`void`) e Sem Parâmetros** [[03:54](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=234)]:
* Utiliza o tipo de retorno `void` para indicar que a função apenas executa um bloco de instruções e não devolve nenhum valor ao chamador [[04:10](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=250)].
* É executada quantas vezes for invocada ou inserida dentro de laços de repetição como o `for` [[10:49](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=649)].

* **Função Com Parâmetros (Argumentos)** [[11:44](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=704)]:
* Permite a passagem de dados para dentro da função através de variáveis declaradas entre parênteses [[12:02](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=722)].
* Exemplo: Uma função `soma(int n1, int n2)` recebe dois números inteiros e exibe o resultado da adição no console [[13:50](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=830)].

* **Função Com Retorno (`return`)** [[16:22](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=982)]:
* Quando o tipo de retorno é diferente de `void` (como `int`, `float`, etc.), a instrução `return` deve ser utilizada para devolver o resultado do processamento [[17:39](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=1059)].
* O valor retornado pode ser armazenado em uma variável ou utilizado diretamente em expressões de saída (`std::cout`) [[20:12](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=1212)].

* **Passagem de Arrays (Vetores) como Parâmetros** [[21:09](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=1269)]:
* Demostra como enviar um vetor (ex: `string transp[4]`) para ser lido e iterado dentro de uma função auxiliar [[22:55](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=1375)].

* **Desafio Proposto** [[25:01](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=1501)]:
* O professor propõe o exercício de refatorar o **Jogo da Forca** (desenvolvido na aula #20), modularizando e organizando o código com o uso de funções [[25:26](http://www.youtube.com/watch?v=uB3Gm0QrgRw&t=1526)].

---

**Link do vídeo:** [Curso de C++ #22 - Funções - Parte 1](http://www.youtube.com/watch?v=uB3Gm0QrgRw)

# "Curso de C++ #19 - Array bidimensional / Matriz do canal CFBCursos

---

## **Resumo do Vídeo**

Nesta aula, o professor Bruno apresenta o conceito de **arrays multidimensionais (matrizes)** em C++, focando nos arrays bidimensionais [[00:24](http://www.youtube.com/watch?v=_KRI19Acxww&t=24)]. É explicada a associação de matrizes a tabelas com linhas e colunas, além de demonstrar como declarar, preencher (manualmente, via laço ou via teclado) e exibir seus elementos na tela [[01:47](http://www.youtube.com/watch?v=_KRI19Acxww&t=107)].

---

## **Conceitos e Tópicos Abordados**

* **Conceito de Matriz (Array Bidimensional)** [[00:15](http://www.youtube.com/watch?v=_KRI19Acxww&t=15)]:
* Uma matriz nada mais é do que um **"vetor de vetores"** ou **"array de arrays"** [[01:06](http://www.youtube.com/watch?v=_KRI19Acxww&t=66)].
* A forma mais simples de visualizá-la é através da estrutura de uma **tabela**, onde a primeira dimensão representa as **linhas** e a segunda dimensão representa as **colunas** [[01:47](http://www.youtube.com/watch?v=_KRI19Acxww&t=107)].

* **Declaração de uma Matriz** [[01:15](http://www.youtube.com/watch?v=_KRI19Acxww&t=75)]:
* Exemplo de sintaxe: `int matriz[3][4];` [[01:22](http://www.youtube.com/watch?v=_KRI19Acxww&t=82)].
* O primeiro valor (`3`) indica o número de linhas, e o segundo valor (`4`) indica o número de colunas [[01:56](http://www.youtube.com/watch?v=_KRI19Acxww&t=116)].

* **Índices e Atribuição Manual de Valores** [[04:40](http://www.youtube.com/watch?v=_KRI19Acxww&t=280)]:
* Os índices de linhas e colunas sempre iniciam em `0` [[03:40](http://www.youtube.com/watch?v=_KRI19Acxww&t=220)].
* Para atribuir um valor a uma posição específica, utilizam-se dois colchetes: `matriz[linha][coluna] = valor;` [[04:51](http://www.youtube.com/watch?v=_KRI19Acxww&t=291)].
* Exemplo: `matriz[0][0] = 5;` armazena o valor `5` na primeira linha e primeira coluna [[04:51](http://www.youtube.com/watch?v=_KRI19Acxww&t=291)].

* **Percorrendo e Exibindo a Matriz com Laços `for` Aninhados** [[13:43](http://www.youtube.com/watch?v=_KRI19Acxww&t=823)]:
* Para iterar sobre todas as posições da matriz, utiliza-se um laço `for` dentro de outro `for` (laços aninhados) [[14:18](http://www.youtube.com/watch?v=_KRI19Acxww&t=858)].
* O `for` externo percorre as **linhas**, enquanto o `for` interno percorre as **colunas** [[14:47](http://www.youtube.com/watch?v=_KRI19Acxww&t=887)].
* Para exibir o resultado formatado como tabela no console, adiciona-se uma quebra de linha `\n` ao final de cada iteração do laço de colunas [[18:06](http://www.youtube.com/watch?v=_KRI19Acxww&t=1086)].

* **Preenchimento Dinâmico de Dados** [[18:51](http://www.youtube.com/watch?v=_KRI19Acxww&t=1131)]:
* **Com Laços `for**`: É possível atribuir valores calculados diretamente dentro dos laços encadeados [[19:34](http://www.youtube.com/watch?v=_KRI19Acxww&t=1174)].
* **Via Entrada do Usuário (`cin`)**: Utiliza-se a mesma estrutura de `for` aninhado, substituindo a atribuição direta pelo comando `cin >> matriz[l][c];` para capturar os dados do teclado [[20:59](http://www.youtube.com/watch?v=_KRI19Acxww&t=1259)].

* **Desafio Proposto** [[23:29](http://www.youtube.com/watch?v=_KRI19Acxww&t=1409)]:
* O professor propõe a criação de um **jogo da forca** utilizando arrays/matrizes de caracteres e os conceitos aprendidos até o momento no curso [[24:23](http://www.youtube.com/watch?v=_KRI19Acxww&t=1463)].

---

**Link do vídeo:** [Curso de C++ #19 - Array bidimensional / Matriz](http://www.youtube.com/watch?v=_KRI19Acxww)

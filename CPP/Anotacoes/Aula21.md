# "Curso de C++ #21 - Argumentos para a função main, argc e argv"** do canal CFBCursos

---

## **Resumo do Vídeo**

Nesta aula, o professor Bruno explica como enviar parâmetros/argumentos para um programa em C++ através da linha de comando no momento da sua execução [[00:16](http://www.youtube.com/watch?v=QilaiaDY94w&t=16)]. Para receber esses dados externamente, a função principal `main` é configurada com dois parâmetros padrões: `argc` e `argv` [[00:23](http://www.youtube.com/watch?v=QilaiaDY94w&t=23)].

---

## **Conceitos e Tópicos Abordados**

* **Parâmetros da Função `main` (`argc` e `argv`)** [[03:26](http://www.youtube.com/watch?v=QilaiaDY94w&t=206)]:
* **`int argc` (Argument Count)** [[03:34](http://www.youtube.com/watch?v=QilaiaDY94w&t=214)]: Armazena a quantidade total de argumentos passados para o programa ao executá-lo.
* **`char *argv[]` (Argument Vector)** [[04:09](http://www.youtube.com/watch?v=QilaiaDY94w&t=249)]: É um vetor (array) de ponteiros para caracteres que armazena as *strings* correspondentes a cada argumento digitado na linha de comando.

* **Comportamento Padrão e Índice Zero (`argv[0]`)** [[05:22](http://www.youtube.com/watch?v=QilaiaDY94w&t=322)]:
* O primeiro elemento do vetor (`argv[0]`) armazena **sempre o nome do programa** ou o caminho completo do executável [[05:40](http://www.youtube.com/watch?v=QilaiaDY94w&t=340)].
* Por essa razão, se nenhum argumento adicional for informado, o valor de `argc` será `1` [[11:28](http://www.youtube.com/watch?v=QilaiaDY94w&t=688)].

* **Execução via Linha de Comando (Terminal / Prompt)** [[06:36](http://www.youtube.com/watch?v=QilaiaDY94w&t=396)]:
* No terminal (CMD no Windows), chama-se o executável seguido dos argumentos separados por espaço (ex: `Aula21.exe canal YouTube`) [[08:46](http://www.youtube.com/watch?v=QilaiaDY94w&t=526)].
* O índice `argv[1]` acessa o primeiro argumento enviado, `argv[2]` o segundo, e assim por diante [[07:57](http://www.youtube.com/watch?v=QilaiaDY94w&t=477)].

* **Comparação de Strings com `strcmp**` [[12:15](http://www.youtube.com/watch?v=QilaiaDY94w&t=735)]:
* Como os parâmetros chegam como vetores de caracteres (*strings*), utiliza-se a função `strcmp` (da biblioteca `<cstring>` / `string.h`) para comparar o argumento recebido com um texto esperado [[12:15](http://www.youtube.com/watch?v=QilaiaDY94w&t=735)].
* A função `strcmp` retorna `0` quando as duas *strings* são idênticas [[12:25](http://www.youtube.com/watch?v=QilaiaDY94w&t=745)]. Por isso, nega-se a expressão (`!strcmp(...)`) para que o bloco `if` seja executado quando houver correspondência [[15:47](http://www.youtube.com/watch?v=QilaiaDY94w&t=947)].

* **Exemplo Prático Demonstrado** [[14:22](http://www.youtube.com/watch?v=QilaiaDY94w&t=862)]:
* O programa testa o valor recebido em `argv[1]`:
* Se for `"sol"`, exibe `"vou ao clube"` [[13:24](http://www.youtube.com/watch?v=QilaiaDY94w&t=804)].
* Se for `"nublado"`, exibe `"vou ao cinema"` [[13:52](http://www.youtube.com/watch?v=QilaiaDY94w&t=832)].
* Se for qualquer outro valor, exibe `"vou ficar em casa"` [[14:08](http://www.youtube.com/watch?v=QilaiaDY94w&t=848)].

* **Passagem de Parâmetros via Atalho no Windows** [[19:15](http://www.youtube.com/watch?v=QilaiaDY94w&t=1155)]:
* É demonstrado como adicionar argumentos diretamente no campo **Destino** nas propriedades de um atalho do executável no Windows (ex.: `C:\...\programa.exe sol`), permitindo passar parâmetros automaticamente ao dar duplo clique no arquivo [[19:24](http://www.youtube.com/watch?v=QilaiaDY94w&t=1164)].

---

**Link do vídeo:** [Curso de C++ #21 - Argumentos para a função main, argc e argv](http://www.youtube.com/watch?v=QilaiaDY94w)

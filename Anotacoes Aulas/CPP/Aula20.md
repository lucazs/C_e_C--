# "Curso de C++ #20 - Jogo da Forca" do canal CFBCursos

---

## **Resumo do Vídeo**

Nesta aula, o professor Bruno resolve o desafio proposto na aula anterior: o desenvolvimento de um **Jogo da Forca em C++** [[00:07](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=7)]. O projeto é construído exclusivamente com os conceitos básicos aprendidos até o momento no curso (como vetores/arrays, laços de repetição e estruturas condicionais), sem utilizar funções externas ou recursos avançados [[01:03](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=63)].

---

## **Estrutura e Conceitos Abordados**

* **Declaração e Inicialização de Variáveis** [[03:41](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=221)]:
* `char palavra[30]`: Vetor de caracteres para armazenar a palavra secreta digitada [[04:08](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=248)].
* `char letra[1]`: Armazena a letra palpitada pelo jogador em cada rodada [[04:30](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=270)].
* `char secreta[30]`: Vetor auxiliar que exibe o progresso visual da palavra desvendada [[04:57](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=297)].
* `int tam`, `i`, `chances`, `acertos`: Variáveis inteiras de controle de índice, tamanho da palavra, número de vidas (iniciado em 6) e contagem de acertos [[05:40](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=340)].
* `bool acerto`: Variável booleana que indica se o palpite da rodada atual foi correto [[07:06](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=426)].

* **Captura da Palavra Secreta e Limpeza de Tela** [[09:15](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=555)]:
* O primeiro jogador digita a palavra secreta [[09:31](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=571)].
* O comando `system("cls")` (da biblioteca `<cstdlib>` / `stdlib.h`) é utilizado para limpar a tela e impedir que o segundo jogador veja a palavra [[10:28](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=628)].

* **Cálculo do Tamanho da Palavra** [[12:15](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=735)]:
* É utilizado um laço `while` para percorrer o array `palavra` até encontrar o caractere nulo `\0` (gerado ao pressionar Enter), determinando o tamanho exato da palavra informada [[12:53](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=773)].

* **Inicialização da Palavra Oculta** [[15:37](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=937)]:
* Com um laço `for`, o vetor `secreta` é preenchido com traços (`-`), representando visualmente as letras ocultas para o jogador [[16:44](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1004)].

* **Laço Principal do Jogo (`while`)** [[17:32](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1052)]:
* O jogo roda dentro de um laço principal com a condição `while (chances > 0 && acertos < tam)` [[19:03](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1143)].
* A cada iteração:

1. É exibido o número de chances restantes e a palavra oculta [[20:07](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1207)].
2. O jogador digita uma letra [[23:01](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1381)].
3. Um laço `for` percorre o vetor da palavra para conferir se a letra existe [[24:24](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1464)].
4. Caso exista, o caractere correspondente é revelado no vetor `secreta` e a contagem de `acertos` é incrementada [[25:25](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1525)].
5. Se a letra não for encontrada, o número de `chances` é decrementado em 1 [[26:53](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1613)].
6. A tela é limpada novamente para a próxima rodada [[27:20](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1640)].

* **Verificação de Vitória ou Derrota** [[27:38](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1658)]:
* Ao sair do laço `while`, o programa testa se `acertos == tam`:
* Se verdadeiro: exibe a mensagem de vitória ("Você venceu!") [[28:00](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1680)].
* Caso contrário: exibe a mensagem de derrota ("Que pena, você perdeu!") [[28:17](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1697)].

* **Demonstração Prática** [[28:49](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1729)]:
* O professor executa o jogo testando um cenário de vitória (desvendando a palavra "curso") [[29:14](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1754)] e um cenário de derrota (esgotando as 6 chances) [[30:46](http://www.youtube.com/watch?v=dkbwb_8dBU0&t=1846)].

---

**Link do vídeo:** [Curso de C++ #20 - Jogo da Forca](http://www.youtube.com/watch?v=dkbwb_8dBU0)

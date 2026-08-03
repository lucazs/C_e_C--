# Curso de C++ #12 - Operador ternário

Nesta aula do canal **CFBCursos**, o professor Bruno apresenta o **operador ternário** (também conhecido como *if ternário* ou *condicional ternário*) em C++, explicando como utilizá-lo como uma alternativa simplificada e mais rápida à estrutura condicional `if-else` tradicional [[00:59](http://www.youtube.com/watch?v=mPA3pErt3TM&t=59)].

---

## Conceitos e Tópicos Abordados

* **O que é o Operador Ternário** [[01:08](http://www.youtube.com/watch?v=mPA3pErt3TM&t=68)]:
* É uma forma simplificada de escrever uma instrução condicional `if` [[01:08](http://www.youtube.com/watch?v=mPA3pErt3TM&t=68)].
* **Sintaxe básica:** `expressão ? valor_se_verdadeiro : valor_se_falso;` [[05:08](http://www.youtube.com/watch?v=mPA3pErt3TM&t=308)].
* **Vantagem:** Apresenta maior velocidade e eficiência de execução em relação ao `if` padrão, sendo recomendado para otimizar o desempenho em casos de decisões simples e recorrentes [[01:24](http://www.youtube.com/watch?v=mPA3pErt3TM&t=84)].

* **Atribuição Direta com Operador Ternário** [[09:49](http://www.youtube.com/watch?v=mPA3pErt3TM&t=589)]:
* Exemplo de aplicação em um sistema escolar de cálculo de aprovação [[04:28](http://www.youtube.com/watch?v=mPA3pErt3TM&t=268)].
* A expressão `(nota >= 60) ? res = "Aprovado" : res = "Reprovado";` avalia a nota digitada e atribui diretamente o texto à variável de resposta `res` [[10:03](http://www.youtube.com/watch?v=mPA3pErt3TM&t=603)].

* **Retorno de Valor com Operador Ternário** [[14:24](http://www.youtube.com/watch?v=mPA3pErt3TM&t=864)]:
* O operador ternário também pode retornar um valor diretamente para ser armazenado em uma variável [[14:42](http://www.youtube.com/watch?v=mPA3pErt3TM&t=882)].
* Exemplo: `res = (nota >= 60) ? "Aprovado" : "Reprovado";` [[15:23](http://www.youtube.com/watch?v=mPA3pErt3TM&t=923)].
* O tipo de dado retornado precisa ser compatível com o tipo da variável receptora (ex.: valores do tipo `string` para variáveis `string` ou numéricos para variáveis inteiras) [[15:08](http://www.youtube.com/watch?v=mPA3pErt3TM&t=908)].

* **Alteração Direta de Variáveis (Incremento/Decremento)** [[18:40](http://www.youtube.com/watch?v=mPA3pErt3TM&t=1120)]:
* O operador pode ser usado para executar ações diretas com base no resultado de um teste condicional [[18:40](http://www.youtube.com/watch?v=mPA3pErt3TM&t=1120)].
* Exemplo demonstrado: `(N1 >= 10) ? x++ : x--;` incrementa ou decrementa a variável `x` dependendo do valor inserido [[19:43](http://www.youtube.com/watch?v=mPA3pErt3TM&t=1183)].

---

## **Link do Vídeo**

* [Curso de C++ #12 - Operador ternário](http://www.youtube.com/watch?v=mPA3pErt3TM)

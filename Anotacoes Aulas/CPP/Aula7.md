# 📹 Curso de C++ #07 - Incremento e Decremento de Variáveis, Operadores pós e pré-fixados

Nesta aula, o professor Bruno ensina como aumentar (incrementar) ou diminuir (decrementar) o valor de variáveis em C++, abordando a sintaxe tradicional, as formas simplificadas/contraídas e a importante diferença entre operadores **pós-fixados** e **pré-fixados** [[00:15](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=15), [01:00](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=60)].

---

## 📌 Conceitos Principais e Detalhes da Aula

### 1. Formas de Incremento e Decremento

Existem diferentes formas de alterar o valor de uma variável em C++ [[02:56](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=176), [13:54](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=834)]:

* **Forma Tradicional / Completa:**
* `n1 = n1 + 1;` (Adiciona 1 ao valor atual de `n1`) [[03:28](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=208)].
* `n1 = n1 - 1;` (Subtrai 1 do valor atual de `n1`) [[06:40](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=400)].

* **Forma Contraída / Simplificada (Atribuição Aritmética):**
* `n1 += 5;` (Equivale a `n1 = n1 + 5`) [[06:58](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=418), [07:49](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=469)].
* `n1 -= 5;` (Equivale a `n1 = n1 - 5`) [[08:13](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=493)].
* `n1 *= 2;` (Equivale a `n1 = n1 * 2` - Multiplica por 2) [[12:32](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=752)].
* `n1 /= 2;` (Equivale a `n1 = n1 / 2` - Divide por 2) [[13:26](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=806)].

* **Operadores Unitários (`++` e `--`):**
* `n1++;` (Soma exatamente 1 unidade) [[09:06](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=546)].
* `n1--;` (Subtrai exatamente 1 unidade) [[10:37](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=637)].

---

### 2. Operadores Pós-Fixados vs. Pré-Fixados

A posição do operador (`++` ou `--`) em relação à variável altera a ordem de execução da operação quando usada dentro de uma instrução/expressão [[16:29](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=989), [19:05](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=1145)]:

* **Pós-Fixado (`n1++` ou `n1--`):**
* O operador fica à **direita** da variável [[16:15](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=975)].
* **Regra:** **Primeiro usa** o valor atual da variável na instrução (ex: no `cout`), e **somente depois incrementa/decrementa** o valor na memória [[19:34](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=1174)].
* *Exemplo:* Se `n1 = 10`, a instrução `cout << n1++;` imprime `10`. Na linha seguinte, `n1` passará a valer `11` [[19:24](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=1164), [22:08](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=1328)].

* **Pré-Fixado (`++n1` ou `--n1`):**
* O operador fica à **esquerda** da variável [[16:29](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=989)].
* **Regra:** **Primeiro incrementa/decrementa** o valor na memória, e **depois usa** o novo valor na instrução [[19:54](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=1194)].
* *Exemplo:* Se `n1 = 10`, a instrução `cout << ++n1;` incrementa para `11` e imprime `11` imediatamente [[20:05](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=1205), [20:16](http://www.youtube.com/watch?v=we_Bh7yL3kg&t=1216)].

---

🔗 **Link do Vídeo:** [Curso de C++ #07 - Incremento e Decremento de Variáveis, Operadores pós e pré-fixados](http://www.youtube.com/watch?v=we_Bh7yL3kg)

# **Curso de C++ #27 - Enum (CFBCursos)**

---

## **Resumo do Vídeo**

Nesta aula, o professor Bruno apresenta a estrutura **`enum` (Enumeradores)** em C++ [[00:07](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=7)]. O `enum` permite criar um novo tipo de dado composto por um conjunto de constantes inteiras identificadas por nomes (rótulos) amigáveis, facilitando a organização do código e a legibilidade ao lidar com estados ou categorias numéricas no programa [[00:14](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=14)].

---

## **Conceitos e Tópicos Abordados**

* **O que é um `enum`?** [[00:14](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=14)]:
* É um tipo de dado definido pelo usuário que mapeia identificadores textuais para valores inteiros [[04:20](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=260)].
* Por padrão, a atribuição numérica começa em `0` para o primeiro elemento e é incrementada automaticamente de 1 em 1 para os elementos seguintes [[05:58](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=358)].

* **Declaração de Variáveis do Tipo `enum**` [[06:46](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=406)]:
* Ao declarar um `enum armas { fuzil, revolver, rifle, escopeta };`, define-se o tipo `armas` [[05:23](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=323)].
* É possível declarar variáveis desse novo tipo: `armas armaSel;` e atribuir um dos identificadores válidos do `enum`, como `armaSel = rifle;` [[06:46](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=406)].

* **Valores Padrão e Atribuição Personalizada** [[09:00](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=540)]:
* Por padrão: `fuzil = 0`, `revolver = 1`, `rifle = 2`, `escopeta = 3` [[06:05](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=365)].
* Se um valor for atribuído explicitamente a um elemento (ex.: `fuzil = 100`), os elementos subsequentes não atribuídos assumirão valores sequenciais a partir do anterior (`revolver = 101`, `rifle = 102`, etc.) [[09:13](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=553)].
* É possível definir valores específicos para todos os itens (ex.: `fuzil = 100`, `revolver = 6`, `rifle = 12`, `escopeta = 8`) [[10:20](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=620)].

* **Exemplo Prático Demonstrado** [[04:52](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=292)]:

1. Criação do enumerador para gerenciar a capacidade máxima de munição por tipo de arma [[05:09](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=309)].
2. Atribuição de valores personalizados de capacidade para cada arma [[09:09](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=549)].
3. Seleção de uma arma na variável `armaSel` e exibição do valor inteiro correspondente no console via `std::cout` [[10:43](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=643)].

---

### **Próximo Tópico do Curso** [[12:06](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=726)]

* O professor anuncia que a próxima aula abordará a estrutura de dados **Pilha (Stack)** [[12:06](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q&t=726)].

---

**Link do vídeo:** [Curso de C++ #27 - Enum](http://www.youtube.com/watch?v=w1_-Pn6Sx2Q)

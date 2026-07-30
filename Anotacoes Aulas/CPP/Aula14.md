# **Curso de C++ #14 - Comando de laço While**

Nesta aula do canal **CFBCursos**, o professor Bruno introduz a primeira estrutura de repetição do curso: o laço **`while`** (enquanto) em C++, demonstrando como executar blocos de código repetidamente enquanto uma determinada condição for verdadeira [[00:24](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D24)].

---

## **Conceitos e Tópicos Abordados**

* **O que é o laço `while` e quando utilizar** [[00:30](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D30)]:
* Trata-se de uma estrutura de *loop* que executa instruções repetidamente enquanto a expressão lógica condicional retornar verdadeiro [[00:30](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D30)].
* É idealmente utilizado quando **não se sabe exatamente o número de repetições** ou quando a condição de parada depende de fatores externos/variáveis [[01:01](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D61)].

* **Sintaxe e Cuidados essenciais** [[03:34](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D214)]:
* **Sintaxe básica:** `while (condição) { /* bloco de comandos */ }` [[03:34](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D214)].
* **Inicialização:** A variável testada no `while` deve ser corretamente inicializada antes de entrar na estrutura de repetição [[07:08](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D428)].
* **Condição de Parada (*Loop* Infinito):** É indispensável atualizar a variável de controle dentro do corpo do *loop* (por incremento `++`, decremento `--` ou leitura do teclado) para evitar um *loop* infinito [[05:08](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D308)].

* **Modos de Controle do *Loop*** [[08:12](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D492)]:
* **Por incremento/decremento:** Exemplo de contagem progressiva (`n++`) [[08:12](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D492)] ou regressiva (`conte--`) [[15:42](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D942)].
* **Por entrada do usuário:** Leitura do valor da variável condicional dentro do *loop* via `cin`, parando o *loop* assim que o usuário insere um valor que invalida a condição [[11:10](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D670)].
* **Pós-incremento na própria expressão:** Incremento diretamente na condição do `while(conte++ < 20)` [[17:22](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D1042)].

* **Interrupção com `break**` [[19:15](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D1155)]:
* Demonstração do uso da instrução `break` associada a uma verificação condicional (`if`) dentro do `while` para forçar a saída do *loop* antes que a condição principal seja atingida [[20:42](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D1242)].

* **Valores Boleanos Diretos (`1` e `0`)** [[22:12](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D1332)]:
* `while (1)` cria um *loop* infinito que só pode ser interrompido por comandos como `break` [[22:12](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D1332)].
* `while (0)` avalia para falso logo na entrada e ignora totalmente a execução do bloco do *loop* [[22:39](https://www.google.com/search?q=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx8yF9nf5KrA%26t%3D1359)].

---

## **Link do Vídeo**

* [Curso de C++ #14 - Comando de laço While](http://www.youtube.com/watch?v=x8yF9nf5KrA)

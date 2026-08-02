# **Curso de C++ #24 - Omissão de argumentos e argumentos padrão (CFBCursos)**

---

## **Resumo do Vídeo**

Nesta aula, o professor Bruno aborda a **omissão de argumentos** e o uso de **valores padrão (*default arguments*)** em funções do C++ [[00:10](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=10)]. O recurso permite que o programador defina valores pré-configurados para os parâmetros de uma função, tornando a passagem desses dados opcional durante a chamada da função no programa principal [[00:36](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=36)].

---

## **Conceitos e Tópicos Abordados**

* **Conceito de Argumento Padrão (*Default Argument*)** [[00:20](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=20)]:
* Permite criar funções com parâmetros que possuem um valor *default* atribuído previamente [[05:44](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=344)].
* Caso o programador omita o argumento na chamada da função, o valor padrão atribuído será automaticamente utilizado [[06:08](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=368)].

* **Sintaxe e Configuração no Protótipo** [[05:33](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=333)]:
* A atribuição do valor padrão deve ser realizada na **declaração do protótipo da função** [[05:33](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=333)].
* Exemplo de protótipo: `void imp(std::string txt = "bruno");` [[06:32](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=392)].

* **Comportamento da Chamada da Função** [[07:23](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=443)]:
* **Sem argumento (`imp();`)**: O C++ assume o valor padrão definido no protótipo (no exemplo, `"bruno"`) [[06:42](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=402)].
* **Com argumento (`imp("youtube");`)**: O valor passado dinamicamente sobresscreve o valor padrão [[07:23](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=443)].

* **Exemplo Prático Demonstrado** [[02:43](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=163)]:

1. É criada uma função `void imp(string txt)` que imprime o texto recebido na tela entre quebras de linha (`\n`) [[03:34](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=214)].
2. Inicialmente, chamar `imp();` sem argumentos resulta em um erro de compilação por ausência de parâmetro obrigatório [[05:08](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=308)].
3. Ao prototipar com `void imp(string txt = "");` ou `void imp(string txt = "bruno");`, a omissão passa a funcionar perfeitamente sem gerar erros [[06:14](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=374)].

* **Próximo Tópico do Curso** [[08:28](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=508)]:
* O professor anuncia que a aula seguinte abordará o conceito de **Recursividade** (funções que chamam a si mesmas) [[08:37](http://www.youtube.com/watch?v=cIZLMjlgmbU&t=517)].

---

**Link do vídeo:** [Curso de C++ #24 - Omissão de argumentos e argumentos padrão](http://www.youtube.com/watch?v=cIZLMjlgmbU)

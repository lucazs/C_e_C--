# 📹 Curso de C++ #05 - Declarações Múltiplas de Variáveis, Constantes #define

Dando continuidade ao aprendizado de variáveis, esta aula ensina formas de otimizar a escrita de código através de declarações múltiplas e o uso da diretiva `#define`.

## 📌 Conceitos Principais e Detalhes da Aula:

* **Declarações Múltiplas de Variáveis:**
* Permite declarar diversas variáveis do mesmo tipo em uma única linha separadas por vírgulas, economizando linhas de código (ex: `int vidas, tiros, life;`).
* As variáveis também podem ser declaradas e inicializadas simultaneamente na mesma linha (ex: `int vidas = 3, tiros = 500, life = 100;`).

* **Constantes e a Diretiva `#define`:**
* Diferente das variáveis, as constantes armazenam valores fixos que não sofrem alterações durante a execução do programa.
* A diretiva `#define` é definida no escopo global e faz uma substituição/permutação do nome definido pelo seu valor no momento da compilação.
* **Exemplo de valor constante:** `#define pi 3.1415`.
* **Associação de Comandos:** É possível associar comandos inteiros a uma diretiva `#define` (ex: `#define canal std::cout << "CFBCursos\n";`), permitindo executar uma instrução chamando apenas o identificador da constante.

🔗 **Link do Vídeo:** [Curso de C++ #05 - Declarações múltiplas de variáveis, Constantes #Define](http://www.youtube.com/watch?v=o44fNZn4zNw)

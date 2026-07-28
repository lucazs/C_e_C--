# 📹 Curso de C++ #08 - Invertendo valores de variáveis

Nesta aula, o professor Bruno explica como realizar a **inversão do sinal/valor de variáveis** numéricas em C++, demonstrando a utilidade desse conceito em algoritmos e jogos (como controle de direção de um personagem), além de diferenciar a **inversão temporária** da **inversão definitiva na memória** [[00:25](http://www.youtube.com/watch?v=H3fQYCGiwNE&t=25), [00:42](http://www.youtube.com/watch?v=H3fQYCGiwNE&t=42)].

---

## 📌 Conceitos Principais e Detalhes da Aula

### 1. Aplicação Prática da Inversão

* Inverter o sinal de uma variável é fundamental em mecânicas como **jogos 2D**, onde o deslocamento em um eixo (ex: eixo $X$) muda de sentido (positivo para a direita, negativo para a esquerda) [[00:50](http://www.youtube.com/watch?v=H3fQYCGiwNE&t=50)].

### 2. Método Tradicional (Multiplicação por `-1`)

* **Sintaxe:** `num = num * -1;` [[03:47](http://www.youtube.com/watch?v=H3fQYCGiwNE&t=227)].
* **Funcionamento:** Multiplica o valor atual por `-1` e armazena o resultado de volta na própria variável [[04:01](http://www.youtube.com/watch?v=H3fQYCGiwNE&t=241)].
* **Resultado na Memória:** Altera o valor armazenado na memória de forma **definitiva** (ex: `10` passa a ser `-10`) [[04:11](http://www.youtube.com/watch?v=H3fQYCGiwNE&t=251)].

### 3. Inversão Momentânea / Temporária

* **Sintaxe:** `std::cout << -num;` [[05:25](http://www.youtube.com/watch?v=H3fQYCGiwNE&t=325)].
* **Funcionamento:** O operador unário de menos (`-`) na frente da variável inverte o valor impresso ou usado naquela expressão específica [[05:41](http://www.youtube.com/watch?v=H3fQYCGiwNE&t=341)].
* **Resultado na Memória:** **Não altera** o conteúdo da variável guardado na RAM [[06:13](http://www.youtube.com/watch?v=H3fQYCGiwNE&t=373)]. Nas linhas seguintes, a variável continuará mantendo seu valor original [[06:25](http://www.youtube.com/watch?v=H3fQYCGiwNE&t=385)].

### 4. Método Atribuição Direta Negativa (Simplificado)

* **Sintaxe:** `num = -num;` [[10:34](http://www.youtube.com/watch?v=H3fQYCGiwNE&t=634)].
* **Funcionamento:** Atribui à variável `num` o seu próprio valor invertido utilizando o operador unário `-` [[10:43](http://www.youtube.com/watch?v=H3fQYCGiwNE&t=643)].
* **Resultado na Memória:** Altera o valor na memória de forma **permanente** [[10:56](http://www.youtube.com/watch?v=H3fQYCGiwNE&t=656)].
* **Inversões Sucessivas:** Executar `num = -num;` duas vezes seguidas fará o valor inverter para negativo e depois retornar ao sinal positivo original (ex: `10` $\rightarrow$ `-10` $\rightarrow$ `10`) [[11:48](http://www.youtube.com/watch?v=H3fQYCGiwNE&t=708)].

---

🔗 **Link do Vídeo:** [Curso de C++ #08 - Invertendo valores de variáveis](http://www.youtube.com/watch?v=H3fQYCGiwNE)

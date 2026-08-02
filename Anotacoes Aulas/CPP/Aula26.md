# Curso de C++ #26 - Resolução dos exercícios da aula 25 (CFBCursos)

---

## **Resumo do Vídeo**

Neste vídeo, o professor Bruno apresenta a resolução dos dois exercícios de **recursividade** propostos na aula anterior: o cálculo do **fatorial** e a exibição da **sequência de Fibonacci** [[00:17](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=17)]. Ambas as soluções utilizam funções recursivas para substituir os laços de repetição convencionais (`for` ou `while`) [[00:24](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=24)].

---

## **Conceitos e Soluções Demonstradas**

### **1. Resolução do Fatorial com Recursividade** [[02:03](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=123)]

* **Conceito Matemático** [[02:27](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=147)]:
* Exemplo: $8! = 8 \times 7 \times 6 \times 5 \times 4 \times 3 \times 2 \times 1 = 40.320$ [[02:40](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=160)].

* **Caso Base (Condição de Parada)** [[05:44](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=344)]:
* Quando $n = 0$, a função retorna $1$ (`return 1;`), encerrando as chamadas recursivas e impedindo a multiplicação por zero [[05:51](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=351)].

* **Passo Recursivo** [[04:12](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=252)]:
* A função retorna $n \times \text{fatorial}(n - 1)$ [[04:18](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=258)].

* **Implementação da Função** [[02:54](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=174)]:

```cpp
int fatorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorial(n - 1);
}

```

---

### **2. Resolução do Fibonacci com Recursividade** [[08:00](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=480)]

* **Conceito Matemático** [[08:52](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=532)]:
* Cada elemento é a soma dos dois termos anteriores: $1, 1, 2, 3, 5, 8, 13, 21, \dots$ [[09:03](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=543)].

* **Caso Base (Condição de Parada)** [[10:30](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=630)]:
* Para $n = 1$ ou $n = 2$, a função retorna $1$ (`return 1;`) [[11:13](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=673)].

* **Passo Recursivo** [[11:39](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=699)]:
* A função retorna a soma dos dois termos anteriores: $\text{fibo}(n - 1) + \text{fibo}(n - 2)$ [[11:48](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=708)].

* **Exibição da Sequência** [[09:52](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=592)]:
* Para imprimir múltiplos valores da sequência, utiliza-se um laço `for` na `main()` que chama a função `fibo(i)` para cada posição [[10:14](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=614)].

* **Implementação da Função** [[10:06](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=606)]:

```cpp
int fibo(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

```

---

### **Próximo Tópico do Curso** [[12:57](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=777)]

* O professor avisa que na próxima aula (aula #27) será abordado o conceito de **Enum (Enumeradores)** em C++ [[12:57](http://www.youtube.com/watch?v=ERbeu0pVgsc&t=777)].

---

**Link do vídeo:** [Curso de C++ #26 - Resolução dos exercícios da aula 25](http://www.youtube.com/watch?v=ERbeu0pVgsc)

# Resumo do Vídeo: *Curso de C++ #10 - Comando de decisão IF ELSE e comando Goto - Parte 2* (CFBCursos)

Nesta aula, o professor Bruno aprofunda o estudo do comando condicional **`if...else`**, apresentando estruturas encadeadas (`else if`) para trabalhar com múltiplas faixas de notas (Aprovado, Recuperação e Reprovado), além de introduzir o comando **`goto`** juntamente com *labels* (rótulos) para controlar o fluxo de repetição do programa [[01:24](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=84), [05:04](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=304)].

---

## 📌 Key Takeaways / Conceitos Apresentados

* **Decisões Encadeadas (`else if`):**
* Utilizadas para avaliar mais de duas condições possíveis em sequência [[11:32](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=692), [13:41](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=821)].
* **Exemplo do Sistema de Notas Escolar:**
* **Aprovado:** Média/soma maior ou igual a `60` (`res >= 60`) [[12:03](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=723)].
* **Recuperação:** Média/soma entre `40` e `59` (`res >= 40`) [[12:39](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=759), [13:55](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=835)].
* **Reprovado:** Média/soma menor que `40` (capturado pelo bloco `else` final) [[13:15](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=795), [14:20](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=860)].

* **O Comando `goto` e Uso de *Labels* (Rótulos):**
* Um *label* (rótulo) é declarado com dois pontos no final (ex: `inicio:`) [[18:21](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=1101)].
* O comando `goto inicio;` desvia incondicionalmente a execução do programa de volta para o *label* correspondente [[17:31](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=1051), [21:04](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=1264)].
* **Uso Prático na Aula:** Permite perguntar ao usuário se ele deseja digitar novas notas (`'s'` ou `'n'`) e reiniciar o programa sem a necessidade de fechá-lo [[18:51](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=1131), [21:41](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=1301)].
* **Uso Consciente:** O professor ressalta que o uso do `goto` é ensinado de forma pontual para criar repetições básicas antes do aprendizado formal dos laços de repetição (`for`, `while`, `do-while`), evitando que seu uso excessivo torne o código confuso ou uma "gambiarra" [[05:10](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=310), [06:00](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=360)].

* **Limpeza do Console com `system("cls")`:**
* Incluído por meio da biblioteca `<cstdlib>` (ou `<stdlib.h>`) [[23:23](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=1403)].
* A instrução `system("cls")` limpa a tela do terminal a cada nova execução disparada pelo `goto` [[22:54](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=1374), [23:56](http://www.youtube.com/watch?v=AiqG9UZoOLI&t=1436)].

---

🔗 **Vídeo no YouTube:** [Curso de C++ #10 - Comando de decisão IF ELSE e comando Goto - Parte 2](http://www.youtube.com/watch?v=AiqG9UZoOLI)

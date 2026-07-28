# Comandos no PowerShell para criação de arquivo

## Criar arquivos no Diretorio atual

```bash
    NewItem -Name "Nome do arquivo + extensão" -NewType File

    New-Item -Path ".\meu_arquivo.txt" -ItemType File
    
    $null > Aula08.cpp
```

## Problemas encontrados na criação dos arquivos com PowerShell

### Criação do arquivo

> $null > HelloWorld.c

### Codigo

```cpp
    #include <stdio.h>

    int main() 
    {
        printf("Hello World");
        return 0;
    }
```

### Problemas

```bash
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:1: error: stray '\377' in program
    1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
      | ^~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:2: error: stray '\376' in program
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |     ^~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:3: error: stray '#' in program
        1 | ��# i n c l u d e   < s t d i o . h > 
          |   ^
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:4: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |          ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:6: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                   ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:5: error: unknown type name 'i'
        1 | ��# i n c l u d e   < s t d i o . h > 
          |     ^
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:8: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                            ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:9: error: expected '=', ',', ';', 'asm' or '__attribute__' before 'c'
        1 | ��# i n c l u d e   < s t d i o . h > 
          |         ^
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:10: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                                     ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:9: error: unknown type name 'c'
        1 | ��# i n c l u d e   < s t d i o . h > 
          |         ^
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:12: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                                              ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:14: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                                                       ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:16: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                                                                ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:18: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                                                                         ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:22: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                                                                                           ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:24: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                                                                                                    ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:26: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                                                                                                             ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:28: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                                                                                                                      ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:30: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                                                                                                                               ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:32: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                                                                                                                                        ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:34: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                                                                                                                                                 ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:36: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                                                                                                                                                          ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:1:38: warning: null character(s) ignored
        1 | <ff><fe>#<U+0000>i<U+0000>n<U+0000>c<U+0000>l<U+0000>u<U+0000>d<U+0000>e<U+0000> <U+0000><<U+0000>s<U+0000>t<U+0000>d<U+0000>i<U+0000>o<U+0000>.<U+0000>h<U+0000>><U+0000>
          |                                                                                                                                                                   ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:2:1: warning: null character(s) ignored
        2 | <U+0000>
          | ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:3:1: warning: null character(s) ignored
        3 | <U+0000>
          | ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:4:1: warning: null character(s) ignored
        4 | <U+0000>
          | ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:5:1: warning: null character(s) ignored
        5 | <U+0000>i<U+0000>n<U+0000>t<U+0000> <U+0000>m<U+0000>a<U+0000>i<U+0000>n<U+0000>(<U+0000>)<U+0000>
          | ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:5:3: warning: null character(s) ignored
        5 | <U+0000>i<U+0000>n<U+0000>t<U+0000> <U+0000>m<U+0000>a<U+0000>i<U+0000>n<U+0000>(<U+0000>)<U+0000>
          |          ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:5:5: warning: null character(s) ignored
        5 | <U+0000>i<U+0000>n<U+0000>t<U+0000> <U+0000>m<U+0000>a<U+0000>i<U+0000>n<U+0000>(<U+0000>)<U+0000>
          |                   ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:5:7: warning: null character(s) ignored
        5 | <U+0000>i<U+0000>n<U+0000>t<U+0000> <U+0000>m<U+0000>a<U+0000>i<U+0000>n<U+0000>(<U+0000>)<U+0000>
          |                            ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:5:11: warning: null character(s) ignored
        5 | <U+0000>i<U+0000>n<U+0000>t<U+0000> <U+0000>m<U+0000>a<U+0000>i<U+0000>n<U+0000>(<U+0000>)<U+0000>
          |                                              ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:5:13: warning: null character(s) ignored
        5 | <U+0000>i<U+0000>n<U+0000>t<U+0000> <U+0000>m<U+0000>a<U+0000>i<U+0000>n<U+0000>(<U+0000>)<U+0000>
          |                                                       ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:5:15: warning: null character(s) ignored
        5 | <U+0000>i<U+0000>n<U+0000>t<U+0000> <U+0000>m<U+0000>a<U+0000>i<U+0000>n<U+0000>(<U+0000>)<U+0000>
          |                                                                ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:5:17: warning: null character(s) ignored
        5 | <U+0000>i<U+0000>n<U+0000>t<U+0000> <U+0000>m<U+0000>a<U+0000>i<U+0000>n<U+0000>(<U+0000>)<U+0000>
          |                                                                         ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:5:19: warning: null character(s) ignored
        5 | <U+0000>i<U+0000>n<U+0000>t<U+0000> <U+0000>m<U+0000>a<U+0000>i<U+0000>n<U+0000>(<U+0000>)<U+0000>
          |                                                                                  ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:5:21: warning: null character(s) ignored
        5 | <U+0000>i<U+0000>n<U+0000>t<U+0000> <U+0000>m<U+0000>a<U+0000>i<U+0000>n<U+0000>(<U+0000>)<U+0000>
          |                                                                                           ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:6:1: warning: null character(s) ignored
        6 | <U+0000>
          | ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:7:1: warning: null character(s) ignored
        7 | <U+0000>{<U+0000>
          | ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:7:3: warning: null character(s) ignored
        7 | <U+0000>{<U+0000>
          |          ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:8:1: warning: null character(s) ignored
        8 | <U+0000>
          | ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:9:1: warning: null character(s) ignored
        9 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>p<U+0000>r<U+0000>i<U+0000>n<U+0000>t<U+0000>f<U+0000>(<U+0000>"<U+0000>H<U+0000>e<U+0000>l<U+0000>l<U+0000>o<U+0000> <U+0000>W<U+0000>o<U+0000>r<U+0000>l<U+0000>d<U+0000>;<U+0000>"<U+0000>)<U+0000>;<U+0000>
          | ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:9:11: warning: null character(s) ignored
        9 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>p<U+0000>r<U+0000>i<U+0000>n<U+0000>t<U+0000>f<U+0000>(<U+0000>"<U+0000>H<U+0000>e<U+0000>l<U+0000>l<U+0000>o<U+0000> <U+0000>W<U+0000>o<U+0000>r<U+0000>l<U+0000>d<U+0000>;<U+0000>"<U+0000>)<U+0000>;<U+0000>
          |                                              ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:9:13: warning: null character(s) ignored
        9 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>p<U+0000>r<U+0000>i<U+0000>n<U+0000>t<U+0000>f<U+0000>(<U+0000>"<U+0000>H<U+0000>e<U+0000>l<U+0000>l<U+0000>o<U+0000> <U+0000>W<U+0000>o<U+0000>r<U+0000>l<U+0000>d<U+0000>;<U+0000>"<U+0000>)<U+0000>;<U+0000>
          |                                                       ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:9:15: warning: null character(s) ignored
        9 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>p<U+0000>r<U+0000>i<U+0000>n<U+0000>t<U+0000>f<U+0000>(<U+0000>"<U+0000>H<U+0000>e<U+0000>l<U+0000>l<U+0000>o<U+0000> <U+0000>W<U+0000>o<U+0000>r<U+0000>l<U+0000>d<U+0000>;<U+0000>"<U+0000>)<U+0000>;<U+0000>
          |                                                                ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:9:17: warning: null character(s) ignored
        9 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>p<U+0000>r<U+0000>i<U+0000>n<U+0000>t<U+0000>f<U+0000>(<U+0000>"<U+0000>H<U+0000>e<U+0000>l<U+0000>l<U+0000>o<U+0000> <U+0000>W<U+0000>o<U+0000>r<U+0000>l<U+0000>d<U+0000>;<U+0000>"<U+0000>)<U+0000>;<U+0000>
          |                                                                         ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:9:19: warning: null character(s) ignored
        9 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>p<U+0000>r<U+0000>i<U+0000>n<U+0000>t<U+0000>f<U+0000>(<U+0000>"<U+0000>H<U+0000>e<U+0000>l<U+0000>l<U+0000>o<U+0000> <U+0000>W<U+0000>o<U+0000>r<U+0000>l<U+0000>d<U+0000>;<U+0000>"<U+0000>)<U+0000>;<U+0000>
          |                                                                                  ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:9:21: warning: null character(s) ignored
        9 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>p<U+0000>r<U+0000>i<U+0000>n<U+0000>t<U+0000>f<U+0000>(<U+0000>"<U+0000>H<U+0000>e<U+0000>l<U+0000>l<U+0000>o<U+0000> <U+0000>W<U+0000>o<U+0000>r<U+0000>l<U+0000>d<U+0000>;<U+0000>"<U+0000>)<U+0000>;<U+0000>
          |                                                                                           ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:9:23: warning: null character(s) ignored
        9 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>p<U+0000>r<U+0000>i<U+0000>n<U+0000>t<U+0000>f<U+0000>(<U+0000>"<U+0000>H<U+0000>e<U+0000>l<U+0000>l<U+0000>o<U+0000> <U+0000>W<U+0000>o<U+0000>r<U+0000>l<U+0000>d<U+0000>;<U+0000>"<U+0000>)<U+0000>;<U+0000>
          |                                                                                                    ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:9:24: warning: null character(s) preserved in literal
        9 |          p r i n t f ( " H e l l o   W o r l d ; " ) ; 
          |                        ^
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:9:51: warning: null character(s) ignored
        9 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>p<U+0000>r<U+0000>i<U+0000>n<U+0000>t<U+0000>f<U+0000>(<U+0000>"<U+0000>H<U+0000>e<U+0000>l<U+0000>l<U+0000>o<U+0000> <U+0000>W<U+0000>o<U+0000>r<U+0000>l<U+0000>d<U+0000>;<U+0000>"<U+0000>)<U+0000>;<U+0000>
          |                                                                                                                                                                                                                                  ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:9:53: warning: null character(s) ignored
        9 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>p<U+0000>r<U+0000>i<U+0000>n<U+0000>t<U+0000>f<U+0000>(<U+0000>"<U+0000>H<U+0000>e<U+0000>l<U+0000>l<U+0000>o<U+0000> <U+0000>W<U+0000>o<U+0000>r<U+0000>l<U+0000>d<U+0000>;<U+0000>"<U+0000>)<U+0000>;<U+0000>
          |                                                                                                                                                                                                                                           ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:9:55: warning: null character(s) ignored
        9 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>p<U+0000>r<U+0000>i<U+0000>n<U+0000>t<U+0000>f<U+0000>(<U+0000>"<U+0000>H<U+0000>e<U+0000>l<U+0000>l<U+0000>o<U+0000> <U+0000>W<U+0000>o<U+0000>r<U+0000>l<U+0000>d<U+0000>;<U+0000>"<U+0000>)<U+0000>;<U+0000>
          |                                                                                                                                                                                                                                                    ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:10:1: warning: null character(s) ignored
       10 | <U+0000>
          | ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:11:1: warning: null character(s) ignored
       11 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>r<U+0000>e<U+0000>t<U+0000>u<U+0000>r<U+0000>n<U+0000> <U+0000>0<U+0000>;<U+0000>
          | ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:11:11: warning: null character(s) ignored
       11 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>r<U+0000>e<U+0000>t<U+0000>u<U+0000>r<U+0000>n<U+0000> <U+0000>0<U+0000>;<U+0000>
          |                                              ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:11:13: warning: null character(s) ignored
       11 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>r<U+0000>e<U+0000>t<U+0000>u<U+0000>r<U+0000>n<U+0000> <U+0000>0<U+0000>;<U+0000>
          |                                                       ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:11:15: warning: null character(s) ignored
       11 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>r<U+0000>e<U+0000>t<U+0000>u<U+0000>r<U+0000>n<U+0000> <U+0000>0<U+0000>;<U+0000>
          |                                                                ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:11:17: warning: null character(s) ignored
       11 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>r<U+0000>e<U+0000>t<U+0000>u<U+0000>r<U+0000>n<U+0000> <U+0000>0<U+0000>;<U+0000>
          |                                                                         ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:11:19: warning: null character(s) ignored
       11 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>r<U+0000>e<U+0000>t<U+0000>u<U+0000>r<U+0000>n<U+0000> <U+0000>0<U+0000>;<U+0000>
          |                                                                                  ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:11:21: warning: null character(s) ignored
       11 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>r<U+0000>e<U+0000>t<U+0000>u<U+0000>r<U+0000>n<U+0000> <U+0000>0<U+0000>;<U+0000>
          |                                                                                           ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:11:25: warning: null character(s) ignored
       11 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>r<U+0000>e<U+0000>t<U+0000>u<U+0000>r<U+0000>n<U+0000> <U+0000>0<U+0000>;<U+0000>
          |                                                                                                             ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:11:27: warning: null character(s) ignored
       11 | <U+0000> <U+0000> <U+0000> <U+0000> <U+0000>r<U+0000>e<U+0000>t<U+0000>u<U+0000>r<U+0000>n<U+0000> <U+0000>0<U+0000>;<U+0000>
          |                                                                                                                      ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:12:1: warning: null character(s) ignored
       12 | <U+0000>
          | ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:13:1: warning: null character(s) ignored
       13 | <U+0000>}<U+0000>
          | ^~~~~~~~
    c:\Users\User\OneDrive\Repositorios\C_e_C++\C\HelloWorld.c:13:3: warning: null character(s) ignored
       13 | <U+0000>}<U+0000>
          |          ^~~~~~~~
```

### Detalhamento do problema

O problema não é no texto do seu código C, mas sim na **codificação do arquivo** (*encoding*).

O seu arquivo `HelloWorld.c` foi salvo usando a codificação **UTF-16** (com BOM `<ff><fe>` e caracteres nulos `<U+0000>` intercalados). O compilador C (GCC/Clang) espera um arquivo de texto simples em formato **UTF-8** ou **ASCII**.

---

#### 💡 Como resolver facilmente

Escolha uma das soluções abaixo, de acordo com o editor de texto que você está usando:

##### Opção 1: No Visual Studio Code (VS Code)

1. Abra o arquivo `HelloWorld.c` no VS Code.
2. Na barra inferior direita do editor, você verá a indicação de codificação (provavelmente **UTF-16 LE**).
3. Clique sobre essa indicação de codificação.
4. Escolha a opção **"Salvar com codificação..."** (*Save with Encoding*).
5. Selecione **UTF-8**.
6. Salve o arquivo (`Ctrl + S`) e tente compilar novamente.

---

##### Opção 2: Recriar o arquivo (A mais rápida)

1. Abra o seu editor de texto.
2. Copie apenas o código limpo:

```c
    #include <stdio.h>

    int main() {
        printf("Hello World\n");
        return 0;
    }
```

1. Delete o arquivo `HelloWorld.c` antigo.
2. Crie um arquivo totalmente novo chamado `HelloWorld.c` e cole o código acima.
3. Salve e execute a compilação.

---

#### 🔍 Por que isso aconteceu?

Provavelmente esse arquivo foi criado ou editado via terminal PowerShell usando um comando como `$null > HelloWorld.c`, que por padrão no Windows costuma salvar arquivos texto no formato **UTF-16 LE**, inserindo os marcadores de ordem de bytes (BOM) e bytes nulos que o GCC não consegue interpretar como texto de código-fonte C.

### Solução

Quando você usa o operador de redirecionamento (`>`) no **PowerShell** (especialmente na versão 5.1, que vem padrão no Windows), ele não salva o arquivo em formato de texto simples (**UTF-8**). Por padrão, o PowerShell salva arquivos usando a codificação **UTF-16 LE com BOM**.

É por isso que o compilador GCC encontrou aqueles caracteres estranhos como `<ff><fe>` e `<U+0000>` (bytes nulos intercalados entre cada letra).

---

#### 🛠️ Como criar arquivos limpos no terminal (UTF-8)

Para evitar esse problema no futuro ao criar arquivos via terminal no Windows, você tem as seguintes opções:

##### Opção 1: Usar o Prompt de Comando antigo (`cmd`)

No `cmd` clássico do Windows, a criação com `type nul` gera um arquivo zerado e limpo:

```cmd
type nul > HelloWorld.c

```

##### Opção 2: Usar o comando correto no PowerShell (`Set-Content`)

Se quiser continuar usando o PowerShell, defina explicitamente a codificação `utf8`:

```powershell
New-Item -Path . -Name "HelloWorld.c" -ItemType "File" -Force

```

Ou para já criar o arquivo diretamente com o texto em UTF-8:

```powershell
@'
#include <stdio.h>

int main() {
    printf("Hello World\n");
    return 0;
}
'@ | Set-Content -Path HelloWorld.c -Encoding utf8

```

---

#### 💡 Resumo do que aconteceu

* `$null > HelloWorld.c` no PowerShell 5.1 do Windows cria um arquivo em **UTF-16 LE**.
* O compilador `gcc` espera **UTF-8** ou **ASCII**.
* Para o compilador, cada caractere parecia ter um caractere nulo (`\0`) ao lado, gerando a enxurrada de avisos de `null character(s) ignored`.

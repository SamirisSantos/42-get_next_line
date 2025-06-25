# 📖 get_next_line
![C Language](https://img.shields.io/badge/language-C-blue.svg)
![Status](https://img.shields.io/badge/status-finished-brightgreen)
![42 100/100](https://img.shields.io/badge/42-100%2F100-gree?style=flat-square)
![License](https://img.shields.io/badge/license-MIT-lightgrey)
-
**O que é get_next_line?**
 - get_next_line é uma função em C que permite ler um ficheiro linha por linha, a cada chamada. Ou seja, cada vez que invocas get_next_line(fd), ela devolve a próxima linha do ficheiro indicado pelo descritor fd.

**Como funciona?**
- **Leitura com buffer:** A função usa **read()** para **ler blocos de dados do ficheiro**, com o tamanho definido por BUFFER_SIZE. Este valor é passado ao compilar o programo
- **Armazenamento interno:** A linha pode ser maior que o BUFFER_SIZE, **os dados lidos são guardados na variável rest**, que guarda o que foi lido mas ainda não retornado.
- **Quebra por linha:** Assim que encontrar um \n (fim de linha), a função devolve tudo até aí, incluindo o \n, e guarda o restante para a próxima chamada.
- **Fim do ficheiro:** Quando chega ao final do ficheiro ou ocorre um erro, a função retorna NULL.

---

## 🎯 Objetivo

A função get_next_line deve permitir, por chamadas repetidas (exemplo: num ciclo), ler um ficheiro texto através do seu descritor (file descriptor), retornando uma linha de cada vez.

- A função deve devolver a linha lida.
- Se não houver mais linhas para ler ou ocorrer um erro, deve devolver NULL.
- A linha retornada deve incluir o caractere de nova linha \n, exceto no caso do final do ficheiro não terminar com \n.
- Deve funcionar corretamente tanto ao ler de ficheiros quanto da entrada padrão (stdin).

---

## 🛠️ Prototipo

```c
char *get_next_line(int fd);
```

## 📋 Requisitos técnicos

- O ficheiro header get_next_line.h deve conter, no mínimo, o protótipo da função get_next_line().
- Todas as funções auxiliares devem estar no ficheiro get_next_line_utils.c.
- A função deve ser eficiente e corretamente gerir a memória, evitando leaks.
- A leitura deve ser feita com base num buffer cujo tamanho é definido por BUFFER_SIZE.

## ⚙️ Compilação
Para compilar, deves definir o tamanho do buffer como uma macro de pré-processador. Exemplo com buffer 42:
```c
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c -o get_next_line
```

## 🧪 Main teste

```c
#include "get_next_line.h"

int main()
{
    int fd = open("samiris.txt", O_RDONLY);
    char *linha;

    if (fd < 0)
    {
        perror("Erro a abrir o ficheiro");
        return (1);
    }

    while ((linha = get_next_line(fd)) != NULL)
    {
        printf("%s", linha);
        free(linha);
    }
    close(fd);
    return (0);
}
```
## 🧪 Teste
- [Tripouille](https://github.com/Tripouille/gnlTester)
## 🔗 Recursos úteis
- read() - manual [Linux](https://man7.org/linux/man-pages/man2/read.2.html)
- open() - manual [Linux](https://man7.org/linux/man-pages/man2/open.2.html)
- Ferramentas para detectar leaks: **valgrind**

---
👩‍💻 Autora
Samiris Santos — [LinkedIn](https://www.linkedin.com/in/samiris-santos/)

#include <fcntl.h>  // Para open()
#include <unistd.h> // Para read() e close()
#include <stdio.h>  // Para printf()
#include <stdlib.h> // Para malloc()

#define BUFFER_SIZE 128 // Tamanho do buffer

char *read_fd(const char *caminho_arquivo) {
    int fd = open(caminho_arquivo, O_RDONLY); // Abrir arquivo para leitura
    if (fd == -1) {
        perror("Erro ao abrir o arquivo");
        return NULL;
    }

    char *buffer = malloc(BUFFER_SIZE); // Aloca memória para armazenar os dados
    if (!buffer) {
        perror("Erro ao alocar memória");
        close(fd);
        return NULL;
    }

    ssize_t bytes_lidos = read(fd, buffer, BUFFER_SIZE - 1); // Lê até BUFFER_SIZE-1 bytes
    if (bytes_lidos == -1) {
        perror("Erro ao ler o arquivo");
        free(buffer);
        close(fd);
        return NULL;
    }

    buffer[bytes_lidos] = '\0'; // Adiciona o terminador de string

    close(fd); // Fecha o arquivo após a leitura
    return buffer; // Retorna o conteúdo lido
}

int main() {
    const char *caminho_arquivo = "teste.txt";
    char *conteudo = read_fd(caminho_arquivo);
    
    if (conteudo) {
        printf("Conteúdo do arquivo: \n%s\n", conteudo);
        free(conteudo); // Libera a memória após o uso
    }
    
    return 0;
}
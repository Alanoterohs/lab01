#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int array_from_file(int array[],unsigned int max_size, const char *filepath) {
    FILE *fileOpen = NULL;
    unsigned int length;

    fileOpen = fopen(filepath, "r");

    if (fileOpen == NULL) {
    printf("El archivo no existe");
    exit(EXIT_FAILURE);
    }

    fscanf(fileOpen, "%u", &length);
    //Utilizo este if para no dejar en desuso max_size(lo toma los warnings del compilador)
    if(length > max_size) {
      printf("El largo del archivo es mas grande del permitido");
      exit(EXIT_FAILURE);
    }

    for (unsigned int i = 0; i < length; i++) {
      fscanf(fileOpen, "%d", &array[i]);
    }
    fclose(fileOpen);
    return length;
}

void array_dump(int a[], unsigned int length) {
    for (unsigned int i = 0; i < length; i++) {
      printf("%d  ", a[i]);
    }
}

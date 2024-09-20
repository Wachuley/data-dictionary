#include "dictionary.h"

int initializeDataDictionary(const char *dictionaryName) {
    long mainHeader = EMPTY_POINTER;
    int stringsToSave = 0;
    
    printf("Initializing Data Dictionary...\n");

    FILE *dictionary = fopen(DictionaryName, "w+");

    fwrite(&mainHeader, sizeof(mainHeader), 1, dictionary);

    printf("Cuantos nodos quieres hacer?");
    scanf("%d",&stringsToSave);

    for(int counter = 0; counter < stringsToSave; conter++){
        NODE currentNode;

        currentNode.sig = EMPTY_POINTER;

        printf("Enter value for node #%d: ", counter + 1)
        fgets(&(currentNode->value), sizeof(currentNode.value), dictionary);
    }
    
    return EXIT_SUCCES;
}

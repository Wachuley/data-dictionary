#include "dictionary.h"

int initializeDataDictionary(const char *dictionaryName) {
    long mainHeader = EMPTY_POINTER;
    int stringsToSave = 0;
    
    printf("Initializing Data Dictionary...\n");

    FILE *dictionary = fopen(DictionaryName, "w+");

    fwrite(&mainHeader, sizeof(mainHeader), 1, dictionary);

    printf("Cuantos nodos quieres hacer?");
    scanf("%d",&stringsToSave);
    fflush(stdin);

    for(int counter = 0; counter < stringsToSave; conter++){
        NODE currentNode;

        currentNode.next = EMPTY_POINTER;

        printf("Enter value for node #%d: ", counter + 1);
        scanf("%s[^\n]", currentNode.value);

        fwrite(&currentNode, sizeof(currentNode), 1, dictionary);
    }
    
    return EXIT_SUCCES;
}

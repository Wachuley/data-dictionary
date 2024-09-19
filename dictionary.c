#include "dictionary.h"

int initializeDataDictionary(const char *dictionaryName) {
    long mainHeader = EMPTY_POINTER;
    
    printf("Initializing Data Dictionary...\n");

    FILE *dictionary = fopen(DictionaryName, "w+");

    fwrite(&mainHeader, sizeof(mainHeader), 1, dictionary);

    return EXIT_SUCCES;
}

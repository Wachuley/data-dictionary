#include "dictionary.h"

void initializeDataDictionary(const char *dictionaryName) {
    long mainHeader = -1;
    
    printf("Initializing Data Dictionary...\n");

    FILE *dictionary = fopen(DictionaryName, "w+");

    fwrite(&mainHeader, sizeof(mainHeader), 1, dictionary);

    long currentDir = ftell(dictionary);
}

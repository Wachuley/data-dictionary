#include "main.h"

int main(int argc, char** argv) {
    char name[50];
    
    printf("Enter the Data Dictionary Name: ");
    gets(name, sizeof(name), stdin);
    
    initializeDataDictionary(name);

    return 0;
}

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  char value[50];
  //struct Node *sig; <- Apuntador en memorie
  long next;
} NODE;

#define EMPTY_POINTER -1

int initializeDataDictionary(const char *dictionaryName);

#endif

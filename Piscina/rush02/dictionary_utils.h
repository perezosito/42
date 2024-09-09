#ifndef DICTIONARY_UTILS_H
#define DICTIONARY_UTILS_H

#define MAX_KEYS 100

typedef struct {
    char keys[MAX_KEYS][100];
    char values[MAX_KEYS][100];
    int size;
} Dictionary;

int getIndex(const char key[], const Dictionary *dict);
int insert(const char key[], const char value[], Dictionary *dict);
const char* get(const char key[], const Dictionary *dict);

#endif


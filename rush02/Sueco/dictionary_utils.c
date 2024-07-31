#include <string.h>
#include "common_utils.h"
#include "dictionary_utils.h"

int getIndex(const char key[], const Dictionary *dict) {
    int index = 0;
    while (index < dict->size) {
        if (mein_strcmp(dict->keys[index], key) == 0) {
            return index;
        }
        index++;
    }
    return -1;
}

int insert(const char key[], const char value[], Dictionary *dict) {
    int index = getIndex(key, dict);
    if (index == -1) {
        if (dict->size < MAX_KEYS) {
            mein_strcpy(dict->keys[dict->size], key);
            mein_strcpy(dict->values[dict->size], value);
            dict->size++;
        } else {
            return -1;
        }
    } else {
        mein_strcpy(dict->values[index], value);
    }
    return dict->size;
}

const char* get(const char key[], const Dictionary *dict) {
    int index = getIndex(key, dict);
    if (index == -1) {
        return NULL;
    }
    return dict->values[index];
}


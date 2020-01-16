#ifndef functionstag_h
#define functionstag_h
#include "Map.h"
#include "list.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct tag tag;

void addTag (char * category,Map * tagMap);

void deleteTag (char * tags, Map * tagMap);

void enterTag (char * tags);

void taglist(Map* catMap);

void newFileTag (char * tags);

void listCleanup(tag* Tag);


#endif //  functionstag_h

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

struct _DNode {
    struct _DNode *prev;
    struct _DNode *next;
};
typedef struct _DNode DNode;

struct _DList {
    DNode front;
    DNode back;
};
typedef struct _DList DList;
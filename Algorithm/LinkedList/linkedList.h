#ifndef __LINKEDLIST__
#define __LINKEDLIST__

typedef struct linkedList{
    int weight;
    struct linkedList* next;
}linkedList;

void pushLink(linkedList* list, int link);
int popLink(linkedList* list);
linkedList* newList(int initialLink );


#endif//__LINKEDLIST__

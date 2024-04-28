#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


int main(int argv, char* argc)
{
    linkedList* lista=newList(8);
    linkedList* listaPnt=lista;
    printf("%p \n",NULL);
    pushLink(lista, 8);
    pushLink(lista, 8);
    pushLink(lista, 8);
    pushLink(lista, 8);

    printf(" list a =  \n");
    do{
        printf(" %d ",listaPnt->weight);
        listaPnt=listaPnt->next;

    }while(listaPnt);


}

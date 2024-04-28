#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"





void pushLink(linkedList* list, int link)
{
    linkedList* newLink = malloc(sizeof(linkedList));
    newLink->weight=link;
    if(list==NULL)
    {
        list = newLink;
    }
    else{
        while(list->next != NULL)
        {
            list = list->next;
        }    
        list->next = newLink;
    }
}

int popLink(linkedList* list)
{
    int result;
    linkedList* previousLink;
    while(list->next != NULL)
    {
        previousLink = list;
        list = list->next;
    }    
    previousLink->next = NULL;
    result = list->weight;
    free(list); 
    return result;
}

linkedList* newList(int initialLink )
{
 linkedList* createdList = malloc(sizeof(linkedList));
 createdList->weight=initialLink;
 return createdList;
}

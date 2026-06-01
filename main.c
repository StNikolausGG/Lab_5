#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
    struct point* next;
    struct point* prev;
};

struct point* addToHead(struct point **list, int x, int y)
{
    struct point* ptrIx = (struct point*)malloc(sizeof(struct point));
    if (list && *list && ptrIx)
    {
        ptrIx->x = x;
        ptrIx->y = y;
        ptrIx->prev = NULL;
        ptrIx->next = NULL;
        if (*list == NULL)
        {
            *list = ptrIx;
        }
        else
        {
            ptrIx->next = *list;
            *list = ptrIx;
        }
        return ptrIx;
    }
    return NULL;
}

int main()
{
    struct point* head = NULL;
    struct point* elem1 = (struct point*)malloc(sizeof (struct point));
    head = elem1;
    elem1->x = 1;
    elem1->y = 1;
    elem1->prev = NULL;
    elem1->next = NULL;
    struct point* elem2 = (struct point*)malloc(sizeof (struct point));
    elem2->x = 2;
    elem2->y = 2;
    elem2->prev = NULL;
    elem2->next = NULL;
    struct point* elem3 = (struct point*)malloc(sizeof (struct point));
    elem3->x = 3;
    elem3->y = 3;
    elem3->prev = NULL;
    elem3->next = NULL;
    struct point* elem4 = (struct point*)malloc(sizeof (struct point));
    elem4->x = 4;
    elem4->y = 4;
    elem4->prev = NULL;
    elem4->next = NULL;

    elem1->prev = head;
    elem1->next = elem2;
    elem2->prev = elem1;
    elem2->next = elem3;
    elem3->prev = elem2;
    elem3->next = elem4;
    elem4->prev = elem3;

    struct point* newList = addToHead(&head, 5, 5);
    struct point* ptrIx = NULL;
    ptrIx = newList;

    while (ptrIx)
    {
        printf("X: %d, ", ptrIx->x);
        printf("Y: %d\n", ptrIx->y);
        ptrIx = ptrIx->next;
    }

    return 0;
}

#include <stdio.h>

struct point
{
    int x;
    int y;
    struct point* next;
    struct point* prev;
};

int AddToHead(struct point ** list)
{
    if (list && *list)
    {

    }
}

int main()
{
    struct point* head;
    struct point List1;
    struct point List2;
    struct point List3;
    struct point List4;
    struct point* ptr = NULL;
    head->next = &List1;
    List1.x = 1;
    List1.y = 1;
    List1.next = &List2;
    List1.prev = NULL;
    List2.x = 2;
    List2.y = 2;
    List2.next = &List3;
    List2.prev = &List1;
    List3.x = 3;
    List3.y = 3;
    List3.next = &List4;
    List3.prev = &List2;
    List4.x = 4;
    List4.y = 4;
    List4.next = NULL;
    List4.prev = &List3;
    head = &List1;
    ptr = head->next;

    while (ptr)
    {

    }

    return 0;
}

/*
 * File:      a9p2.c
 * Author:    Michael Sanford 100113669
 * Date:      07/11/2013
 * Version:   1.0
 *
 * Purpose:   to create a queue, using a module, and a continuous array queue
 */

#include <stdio.h>
#include <stdlib.h>
#include "queue_of_ints.h"

int main(int argc, char * argv[])
{
    char c;
    int in;
    struct queue_T q;
    while (1)
    {
        printf("\nCommand? ");
        c = getchar();
        if (c == 'e')
        {
            enqueue(q, in);
            while ((c = getchar()) != '\n')
                ;
        }
        else if (c == 'd')
        {
            is_queue_empty(q);
            dequeue(q, in);
        }
        else if (c == 'q')
            break;
        printf("Queue: ");
        for (int i = q.head; i < q.tail + 1; i++)
            printf("%d", i);
        while ((c = getchar()) != '\n')
                ;
    }
    return EXIT_SUCCESS;
}

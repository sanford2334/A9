/*
 * File:      queue_of_ints.c
 * Author:    Michael Sanford 100113669
 * Date:      06/11/2013
 * Version:   1.0
 *
 * Purpose:   module for queue
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
typedef struct queue_T
{
    int *head;
    int *tail;
    queue_T *next;
}queue, *queue;

/*
 *
 */
queue_T new_queue()
{
    queue_T *new_q;
    new_q = realloc(queue, sizeof(queue) + sizeof(queue[0]));
    if (new_q == NULL)
        exit(1);
    queue = new_q;
    return queue;
}

/*
 *
 */
int enqueue(queue_T q, int datum)
{
    queue_T *new;
    scanf("%d", datum);
    new->tail = datum;
    q->next = NULL;
    return q.tail;
}

/*
 *
 */
int first_elem(const queue_T q, int * datum_p)
{
    datum_p = q.head;
    return datum_p;
}

/*
 *
 */
int dequeue(queue_T q, int * datum)
{
    q.head = datum;
    printf("%d was dequeued.\n", datum);
    free(q.head);
    q.head = NULL;
    return q.head;
}

/*
 *
 */
int is_queue_empty(const queue_T q)
{
    if (q.head == q.tail)
        return 1;
    return 0;
}

/*
 *
 */
int destroy_queue(queue_T * q_p)
{
    free(q_p);
    q_p = NULL;
    return q_p;
}

/*
 *
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
    int length;
    struct queue_T *next;
}queue_T;

/*
 *
 */
queue_T new_queue()
{
    int *queue;
    int *new_queue;
    new_queue = realloc(queue, sizeof(queue) + sizeof(queue[0]));
    if (sizeof(new_queue) == NULL)
        exit(1);
    queue = new_queue;
    return queue;
}

/*
 *
 */
int enqueue(queue_T q, int datum)
{
    scanf("%d", datum);
    q.tail = datum;
    return q.tail;
}

/*
 *
 */
int first_elem(const queue_T q, int * datum_p)
{
    q.head = datum_p;
    return q.head;
}

/*
 *
 */
int dequeue(queue_T q, int * datum)
{
    printf("%d was dequeued.\n", datum);
    return q.head++;
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

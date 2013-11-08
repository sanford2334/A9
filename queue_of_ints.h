#ifndef QUEUE_OF_INTS_H
#define QUEUE_OF_INTS_H

struct queue_T;

int enqueue(queue_T, int);

int first_elem(const queue_T, int*);

int dequeue(queue_T, int*);

int is_queue_empty(const queue_T);

int destroy_queue(queue_T*);+

#endif

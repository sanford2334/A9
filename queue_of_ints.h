#ifndef QUEUE_OF_INTS_H
#define QUEUE_OF_INTS_H

typedef struct queue_T queue_T;

int enqueue(queue_T);

int first_elem(const queue_T);

int dequeue(queue_T);

int is_queue_empty(const queue_T);

int destroy_queue(queue_T*);

#endif

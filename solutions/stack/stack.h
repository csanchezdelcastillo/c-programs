#ifndef __STACK_H__
#define __STACK_H_
//if not define (ifndef)

typedef struct TStack(){

    int max;
    int summit;
    int *data;

} Stack;

//extern "C" se pone porque C++ te cambia el nombre de las variables de tal forma que poniendo extern las bloquea
#ifdef __cplusplus

extern "C" {

#endif

    bool push(int element,Stack *stack);
    int pop(Stack *stack);
    int length(Stack *stack);
    Stack *create_stack(size_t max_elements);
    void destroy_stack(Stack *stack);

#ifdef __cplusplus

}

#endif
#endif

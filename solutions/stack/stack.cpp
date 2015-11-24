#include<stdio.h>
#include "stack.h"
//la funcion push introduce un numero "elemento" dentro de la ultima posicion libre de la pila definida por la variable summit.
bool push(int element,Stack *stack){

    if(stack->summit >= stack->max)
	return false;


    stack->data[stack->summit++] = element;
    return true;
}

//la funcion pop saca el ultimo numero introducido en la pila
int pop(Stack *stack){
    if(stack->summit <= 0)
	return 0;
    return stack->data[--stack->summit];
}
//longitud de la pila definida por summit "cumbre"
int length(Stack *stack){

    return stack->summit;
}
//size_t es un apodo de "int"
//crear una nueva pila
Stack *create_stack(size_t max_elements){
//reserva la memoria (diciendole el tamaño k debe reservar )
    Stack *stack = (Stack *) malloc(sizeof(Stack));
    stack->summit= 0;
    stack->max = max_elements;
    stack->data = (int *) malloc(max_elements * sizeof(int));
    return stack;
}

void destroy_stack(Stack *stack){
    free(stack->data);
    free(stack);

}

#include<malloc.h>  
#include<string.h>  
#include<stdio.h>  
int stack[100];
int top = 0;

void stack_push(int x)  
{  
    stack[top++] = x;
}  
  
int stack_pop()
{  
    int e = stack[top--]; 
    return e;  
}  


int stack_capacity()
{
	return 100-top;
}

int stack_size()
{
	return top;
}

int stack_is_empty()
{  
    if(top == 0)  
        return 1;  
    else  
        return 0;  
}  

int stack_is_full()
{
	if(top == 100)
		return 1;
	else
		return 0;
}
  


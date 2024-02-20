
#include <stdio.h>
#define N 5
int stack[N];
void push(int);
void pop();
void peek();
int top=-1;
void push(int x){
    if(top==N-1){
        printf("overflow\n");
    }
    else{
        top++;
        stack[top]=x;
        printf("%d\t",stack[top]);
        
    }
    
}
void pop(){
    if(top==-1){
        printf("underflow\n");
    }
    else{
        printf("Dequeued element is %d\n",stack[top]);
        top--;
    }
}
void peek(){
	if(top==-1){
		printf("stack is empty");
	}
	else{
		printf("%d  ",stack[top]);
	}
}
int main()
{
    push(5);
    push(10);
    pop();
    pop();
    pop();
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    peek();
}



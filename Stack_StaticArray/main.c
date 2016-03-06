//
//  main.c
//  Stack_StaticArray
//
//  Created by chenyufeng on 16/3/6.
//  Copyright © 2016年 chenyufengweb. All rights reserved.
//

/**
 *  使用静态数组来构造栈结构
 */
#include <stdio.h>
#include "StackFunction.h"

#define STACK_SIZE 5

static int stack[STACK_SIZE];
static int top_element = -1;

//压入元素
void push(int value){
    if (!isFull()) {
        stack[++top_element] = value;
    }
}

//弹出元素
void pop(){
    if (!isEmpty()) {
        top_element--;
    }
}

//取顶部元素
int top(){
    if (!isEmpty()) {
        return stack[top_element];
    }

    return -32768;
}

//判断栈是否为空
int isEmpty(){
    return top_element == -1;
}

//判断栈是否已满
int isFull(){
    return top_element == STACK_SIZE - 1;
}

//从顶部开始打印栈元素
void printStack(){

    int i = top_element;
    printf("%s函数执行，打印出静态数组栈里面的值：\n",__FUNCTION__);
    if (i == -1) {
        printf("这是一个空栈\n");
    }else{
        while (i != -1) {
            printf("%d ",stack[i--]);
        }
        printf("\n");
    }
}

int main(int argc, const char * argv[]) {

    push(4);push(6);push(1);push(9);push(2);push(8);
    printStack();
    printf("\n");

    pop();pop();pop();pop();
    printf("经过pop后栈的元素为:\n");
    printStack();
    printf("\n");

    printf("top元素的值:%d\n",top());

    return 0;
}



















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

//创建栈，默认输入非正数时停止.构造成功返回1，否则返回0；
int createStack(){

    int size = 1;
    int elem;

    printf("请输入元素来构造栈\n");
    scanf("%d",&elem);
    while (size <= STACK_SIZE && elem > 0) {
        stack[++top_element] = elem;
        size++;
        scanf("%d",&elem);
    }

    printf("%s函数执行，使用静态数组构造栈成功\n",__FUNCTION__);
    return 1;
}

void push(int value){
    if (!isFull()) {
        //还没有满
        top_element++;
        stack[top_element] = value;
    }
}

void pop(){

    if (!isEmpty()) {
        top_element--;
    }
}

int top(){
    if (!isEmpty()) {
        return stack[top_element];
    }

    return -32768;
}

int isEmpty(){

    return top_element == -1;
}

int isFull(){

    return top_element == STACK_SIZE - 1;
}

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

    createStack();
    printStack();
/*
    push(4);push(6);push(1);push(9);push(2);
    printStack();
    printf("\n");

    pop();pop();
    printf("经过pop后栈的元素为:");
    printStack();
    printf("\n");

  printf("top元素的值:%d\n",top());
*/
    return 0;
}



















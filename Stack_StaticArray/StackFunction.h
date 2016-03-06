

//
//  StackFunction.h
//  Stack_StaticArray
//
//  Created by chenyufeng on 16/3/6.
//  Copyright © 2016年 chenyufengweb. All rights reserved.
//

#include <stdio.h>

void createStack(int size);
void destroyStack(void);
void push(int value);
void pop(void);
int top(void);
int isEmpty(void);
int isFull(void);
void printStack(void);

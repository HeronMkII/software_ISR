/*
    Author: Edwin Ng
	***************************************************************************************
	*	FILE NAME:		software_ISR.c
	*
	*	PURPOSE:
	*	This file contains an example of using keyboard interrupts.
	*
	*	DEVELOPMENT HISTORY:
	*	2017/06/24		Created.
	*   2017/07/22      Simplify code.
	***************************************************************************************
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void ISR1(void)
{
    printf("F1 Key Hit...\n");
    Sleep(1000);
}

void ISR2(void)
{
    printf("F2 Key Hit...\n");
    Sleep(1000);
}

void ISR3(void)
{
    printf("F3 Key Hit...\n");
    Sleep(1000);
}

void main()
{
    while(1){
        printf("Processing...\n");
        if (GetAsyncKeyState(VK_F1))
            ISR1();
        if (GetAsyncKeyState(VK_F2))
            ISR2();
        if (GetAsyncKeyState(VK_F3))
            ISR3();
    }
}

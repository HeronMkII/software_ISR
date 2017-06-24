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
	***************************************************************************************
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int flag1, flag2, flag3;

void ISR1(void)
{
    flag1 = 1;
}

void ISR2(void)
{
    flag2 = 1;
}

void ISR3(void)
{
    flag3 = 1;
}

void main()
{
    while(1){
        printf("Processing...\n");
        if (GetAsyncKeyState(VK_F1))
        {
            ISR1();
        }
        if (GetAsyncKeyState(VK_F2))
        {
            ISR2();
        }
        if (GetAsyncKeyState(VK_F3))
        {
            ISR3();
        }
        if (flag1){
            flag1 = 0;
            printf("F1 Key Hit...\n");
            Sleep(1000);
        }
        if (flag2){
            flag2 = 0;
            printf("F2 Key Hit...\n");
            Sleep(1000);
        }
        if (flag3){
            flag3 = 0;
            printf("F3 Key Hit...\n");
            Sleep(1000);
        }
    }
}

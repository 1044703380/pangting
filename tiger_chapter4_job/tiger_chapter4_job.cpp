// tiger_chapter4_job.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int ch43_caculate_sum(void)
{
	int denominator, flag;
	double item, eps; 

										 
	flag = 1;                            
	denominator = 1;                    
	item = 1.0; 
	eps = 0;
                            

	while (fabs(item) >= 0.000001) {        
		item = flag * 1.0 / denominator; 
		eps = eps + item;                  
		flag = -flag;                    
		denominator = denominator + 3;  
	}
                        
	printf("eps = %.4f\n", eps);


	return 0;
}

int ch46_guess_num()
{
	int count = 0, flag, mynumber, yournumber,n;
	srand(time(0));
	mynumber = rand() % 100 + 1; /* ������������һ��1~100֮��ı����� */
	flag = 0;	/* flag��ֵΪ0��ʾû���У�Ϊ1��ʾ������*/
	while (count < 7) {			/* ����ܲ�7��*/
		printf("Enter your number: ");       /* ��ʾ���������µ����� */
		scanf("%d", &yournumber);
		count++;
		if (yournumber == mynumber) {     /* ����ȣ���ʾ���� */
			printf("Lucky You!\n");
			flag = 1;
			break;                       /* �Ѳ��У���ֹѭ�� */
		}
		else
			if (yournumber>mynumber)
				printf("Too big\n");
			else
				printf("Too small\n");
	}
	if (flag == 0) 	/* ����7�λ�û���У���ʾ��Ϸ����*/
		printf("Game Over!\n");

	return 0;
}

int main()
{
	ch43_caculate_sum();
	//ch46_guess_num();
    return 0;
}


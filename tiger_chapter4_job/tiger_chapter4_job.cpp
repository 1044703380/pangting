// tiger_chapter4_job.cpp : 定义控制台应用程序的入口点。
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
	mynumber = rand() % 100 + 1; /* 计算机随机产生一个1~100之间的被猜数 */
	flag = 0;	/* flag的值为0表示没猜中，为1表示猜中了*/
	while (count < 7) {			/* 最多能猜7次*/
		printf("Enter your number: ");       /* 提示输入你所猜的整数 */
		scanf("%d", &yournumber);
		count++;
		if (yournumber == mynumber) {     /* 若相等，显示猜中 */
			printf("Lucky You!\n");
			flag = 1;
			break;                       /* 已猜中，终止循环 */
		}
		else
			if (yournumber>mynumber)
				printf("Too big\n");
			else
				printf("Too small\n");
	}
	if (flag == 0) 	/* 超过7次还没猜中，提示游戏结束*/
		printf("Game Over!\n");

	return 0;
}

int main()
{
	ch43_caculate_sum();
	//ch46_guess_num();
    return 0;
}


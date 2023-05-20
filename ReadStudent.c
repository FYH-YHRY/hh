//读取学生信息
#include<stdio.h>
#include<conio.h>//getch的头文件
#include<stdlib.h>//system的头文件 
#include<string.h>
#include"ReadStudent.h"
void ReadStudent()
	{ //打开文件
	 
	 Student *p = readFiles();
	printf("学号\t姓名\t平时成绩\t作业成绩\t考试成绩\t总成绩\n");
	 while(p!=NULL) 
		{
			printf("%s   \t%s    \t%.2f      \t%.2f      \t%.2f      \t%.2f      \n",p->Num,p->Name,p->Ascore,p->Hscore,p->Tscore,p->total);				
			p=p->next;
		}
	}

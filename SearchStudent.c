//查找学生信息
#include<stdio.h>
#include<conio.h>//getch的头文件
#include<stdlib.h>//system的头文件 
#include<string.h>
#include"SearchStudent.h"
void SearchStudent()
	{
		Student *p = readFiles();
		char searchname[10];//空的字符数组； 
		printf("\n请输入你要查找的学生名字:");
		scanf("%s",searchname); 
		while(strcmp(p->Name,searchname)!=0)
		{
			if(p->next==NULL)
			{
				printf("没有此学生的信息\n");
				return ;
			}
			p=p->next;	 
		}
		printf(" 学号：\t姓名：\t平时成绩：\t作业成绩：\t考试成绩：\n");
		printf("  %s   \t%s       %.2f          %.2f           %.2f      \n",p->Num,p->Name,p->Ascore,p->Hscore,p->Tscore,p->total);         
	}


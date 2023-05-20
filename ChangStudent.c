#include<stdio.h>
#include<conio.h>//getch的头文件
#include<stdlib.h>//system的头文件 
#include<string.h>
#include "ChangStudent.h"
void ChangStudent()
{
	Student* p=readFiles();
	char changname[10];
	printf("请输入你要更改的名字：");
	scanf("%s",changname);
	while(strcmp(p->Name,changname)!=0)
	{
		if(p->next==NULL)
		{
			printf("没有此学生的信息\n");
			return;
		}
		p=p->next;
	}
	printf("更改的该学生信息为：\n");
	printf("\n%s\t%-15s\t%-10s\t%s\t%s\t%s\n","学号","姓名","平时成绩","作业成绩","考试成绩","总成绩");
	printf("%s\t%-15s\t%-10f\t%f\t%f\t%f\n",p->Num,p->Name,p->Ascore,p->Hscore,p->Tscore,p->total);
	printf("更正为：\n");
	FILE *fp=fopen("E:\\student.txt","r+");
	if(fp==NULL)
	{
		printf("打开文件失败\n");
		return;
	}
	scanf("%s %s %f %f %f %f",p->Num,p->Name,p->Ascore,p->Hscore,p->Tscore,p->total);
	//savestudent(head);
	fclose(fp);
	printf("学生信息更改成功！\n");
}


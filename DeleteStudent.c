#include<stdio.h>
#include<conio.h>//getch的头文件
#include<stdlib.h>//system的头文件 
#include<string.h>
#include"DeleteStudent.h"
void DeleteStudent()
{
	
	Student* m=(Student*)malloc(sizeof(Student));
	m=readFiles();
	char deletename[10];
	printf("请输入你要删除的学生名字：");
	scanf("%s",deletename); 
	while(strcmp(m->Name,deletename)!=0)
	{
		if(m->next==NULL)
		{
			printf("没有此学生的信息\n");
			return;
		}
		m=m->next;
	}
	printf("删除的该学生信息为：\n");
	printf("\n%s\t%-15s\t%-10s\t%s\t%s\t%s\n","学号","姓名","平时成绩","作业成绩","考试成绩","总成绩");
	printf("%s\t%-15s\t%-10f\t%f\t%f\t%f\n",m->Num,m->Name,m->Ascore,m->Hscore,m->Tscore,m->total);
	
	Student* n=(Student*)malloc(sizeof(Student));
	n=readFiles();
	while(head!=NULL&&n->next!=m)
	{
		n=n->next;
	}
	FILE *fp=fopen("E:\\student.txt","r+");
	if(fp==NULL)
	{
		printf("打开文件失败\n");
		return;
	}
	n->next=m->next;
	free(m);         //释放p所指的空间内存 
	//savestudent(head);
	fclose(fp);
	printf("\n该学生信息删除成功！\n");

} 


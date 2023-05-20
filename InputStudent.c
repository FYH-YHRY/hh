#include<stdio.h>
#include<conio.h>//getch的头文件
#include<stdlib.h>//system的头文件 
#include<string.h>
#include"InputStudent.h"
void InputStudent()
	{		
	
		Student* p=head;//当前节点 
		//找到尾节点 
		while(head!=NULL&&p->next!=NULL)
		{
			p=p->next; 
		}
		//定一个新节点
		Student *NewNode=(Student*)malloc(sizeof(Student));
		NewNode->next=NULL;
	
		if(head==NULL)
		{
			head=NewNode;
		}
		else{
			p->next=NewNode; 
		}
		printf("\n请输入学生信息\n ");
		//输入新的学元数据 
		printf("         学号:");
		scanf("%s", NewNode->Num);
		printf("         姓名:");
		scanf("%s", NewNode->Name);
		printf("     平时成绩:");
		scanf("%f", &NewNode->Ascore);
		printf("     作业成绩:");
		scanf("%f", &NewNode->Hscore);
		printf("     考试成绩:");
		scanf("%f", &NewNode->Tscore);
		printf("     总成绩:");
		scanf("%f",&NewNode->total);
		FILE *fp=fopen("E:\\student.txt","a");
		if(fp==NULL)
		{
		printf ("打开文件失败\n");
		return;
		}
		//写入数据
		while(p!=NULL) 
		{
			fprintf(fp,"%s %s %.2f %.2f %.2f %.2f\n",p->Num,p->Name,p->Ascore,p->Hscore,p->Tscore,p->total);
			p=p->next;
		}
		fclose(fp);
		printf("学生信息录取并保存成功!\n");
	}

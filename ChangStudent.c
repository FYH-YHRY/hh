#include<stdio.h>
#include<conio.h>//getch��ͷ�ļ�
#include<stdlib.h>//system��ͷ�ļ� 
#include<string.h>
#include "ChangStudent.h"
void ChangStudent()
{
	Student* p=readFiles();
	char changname[10];
	printf("��������Ҫ���ĵ����֣�");
	scanf("%s",changname);
	while(strcmp(p->Name,changname)!=0)
	{
		if(p->next==NULL)
		{
			printf("û�д�ѧ������Ϣ\n");
			return;
		}
		p=p->next;
	}
	printf("���ĵĸ�ѧ����ϢΪ��\n");
	printf("\n%s\t%-15s\t%-10s\t%s\t%s\t%s\n","ѧ��","����","ƽʱ�ɼ�","��ҵ�ɼ�","���Գɼ�","�ܳɼ�");
	printf("%s\t%-15s\t%-10f\t%f\t%f\t%f\n",p->Num,p->Name,p->Ascore,p->Hscore,p->Tscore,p->total);
	printf("����Ϊ��\n");
	FILE *fp=fopen("E:\\student.txt","r+");
	if(fp==NULL)
	{
		printf("���ļ�ʧ��\n");
		return;
	}
	scanf("%s %s %f %f %f %f",p->Num,p->Name,p->Ascore,p->Hscore,p->Tscore,p->total);
	//savestudent(head);
	fclose(fp);
	printf("ѧ����Ϣ���ĳɹ���\n");
}


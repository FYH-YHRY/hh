#include<stdio.h>
#include<conio.h>//getch��ͷ�ļ�
#include<stdlib.h>//system��ͷ�ļ� 
#include<string.h>
#include"DeleteStudent.h"
void DeleteStudent()
{
	
	Student* m=(Student*)malloc(sizeof(Student));
	m=readFiles();
	char deletename[10];
	printf("��������Ҫɾ����ѧ�����֣�");
	scanf("%s",deletename); 
	while(strcmp(m->Name,deletename)!=0)
	{
		if(m->next==NULL)
		{
			printf("û�д�ѧ������Ϣ\n");
			return;
		}
		m=m->next;
	}
	printf("ɾ���ĸ�ѧ����ϢΪ��\n");
	printf("\n%s\t%-15s\t%-10s\t%s\t%s\t%s\n","ѧ��","����","ƽʱ�ɼ�","��ҵ�ɼ�","���Գɼ�","�ܳɼ�");
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
		printf("���ļ�ʧ��\n");
		return;
	}
	n->next=m->next;
	free(m);         //�ͷ�p��ָ�Ŀռ��ڴ� 
	//savestudent(head);
	fclose(fp);
	printf("\n��ѧ����Ϣɾ���ɹ���\n");

} 


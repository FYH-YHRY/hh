#include<stdio.h>
#include<conio.h>//getch��ͷ�ļ�
#include<stdlib.h>//system��ͷ�ļ� 
#include<string.h>
#include"InputStudent.h"
void InputStudent()
	{		
	
		Student* p=head;//��ǰ�ڵ� 
		//�ҵ�β�ڵ� 
		while(head!=NULL&&p->next!=NULL)
		{
			p=p->next; 
		}
		//��һ���½ڵ�
		Student *NewNode=(Student*)malloc(sizeof(Student));
		NewNode->next=NULL;
	
		if(head==NULL)
		{
			head=NewNode;
		}
		else{
			p->next=NewNode; 
		}
		printf("\n������ѧ����Ϣ\n ");
		//�����µ�ѧԪ���� 
		printf("         ѧ��:");
		scanf("%s", NewNode->Num);
		printf("         ����:");
		scanf("%s", NewNode->Name);
		printf("     ƽʱ�ɼ�:");
		scanf("%f", &NewNode->Ascore);
		printf("     ��ҵ�ɼ�:");
		scanf("%f", &NewNode->Hscore);
		printf("     ���Գɼ�:");
		scanf("%f", &NewNode->Tscore);
		printf("     �ܳɼ�:");
		scanf("%f",&NewNode->total);
		FILE *fp=fopen("E:\\student.txt","a");
		if(fp==NULL)
		{
		printf ("���ļ�ʧ��\n");
		return;
		}
		//д������
		while(p!=NULL) 
		{
			fprintf(fp,"%s %s %.2f %.2f %.2f %.2f\n",p->Num,p->Name,p->Ascore,p->Hscore,p->Tscore,p->total);
			p=p->next;
		}
		fclose(fp);
		printf("ѧ����Ϣ¼ȡ������ɹ�!\n");
	}

//��ȡѧ����Ϣ
#include<stdio.h>
#include<conio.h>//getch��ͷ�ļ�
#include<stdlib.h>//system��ͷ�ļ� 
#include<string.h>
#include"ReadStudent.h"
void ReadStudent()
	{ //���ļ�
	 
	 Student *p = readFiles();
	printf("ѧ��\t����\tƽʱ�ɼ�\t��ҵ�ɼ�\t���Գɼ�\t�ܳɼ�\n");
	 while(p!=NULL) 
		{
			printf("%s   \t%s    \t%.2f      \t%.2f      \t%.2f      \t%.2f      \n",p->Num,p->Name,p->Ascore,p->Hscore,p->Tscore,p->total);				
			p=p->next;
		}
	}

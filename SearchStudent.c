//����ѧ����Ϣ
#include<stdio.h>
#include<conio.h>//getch��ͷ�ļ�
#include<stdlib.h>//system��ͷ�ļ� 
#include<string.h>
#include"SearchStudent.h"
void SearchStudent()
	{
		Student *p = readFiles();
		char searchname[10];//�յ��ַ����飻 
		printf("\n��������Ҫ���ҵ�ѧ������:");
		scanf("%s",searchname); 
		while(strcmp(p->Name,searchname)!=0)
		{
			if(p->next==NULL)
			{
				printf("û�д�ѧ������Ϣ\n");
				return ;
			}
			p=p->next;	 
		}
		printf(" ѧ�ţ�\t������\tƽʱ�ɼ���\t��ҵ�ɼ���\t���Գɼ���\n");
		printf("  %s   \t%s       %.2f          %.2f           %.2f      \n",p->Num,p->Name,p->Ascore,p->Hscore,p->Tscore,p->total);         
	}


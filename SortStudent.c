#include<stdio.h>
#include<conio.h>//getch��ͷ�ļ�
#include<stdlib.h>//system��ͷ�ļ� 
#include<string.h>
#include"SortStudent.h"
void SortStudent()
{
	FILE *fp=fopen("E:\\student.txt","r+");
	if(fp==NULL)
	{
		printf("���ļ�ʧ��\n");
		return;
	}
	for(Student* first = readFiles(); first !=NULL; first = first->next)
	{
		for(Student* second = readFiles(); second !=NULL; second = second->next)
		{
			if(second->next !=NULL)
			{
				if(second->total > second->next->total)
				{
					int temp = second->total;
					second->total = second->next->total;
					second->next->total = temp;
				}
			}
		}
	}
	//savestudent(head);
	fclose(fp);
	printf("ѧ���ɼ�����ɹ���\n");
}

#include<stdio.h>
#include<conio.h>//getch的头文件
#include<stdlib.h>//system的头文件 
#include<string.h>
#include"SortStudent.h"
void SortStudent()
{
	FILE *fp=fopen("E:\\student.txt","r+");
	if(fp==NULL)
	{
		printf("打开文件失败\n");
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
	printf("学生成绩排序成功！\n");
}

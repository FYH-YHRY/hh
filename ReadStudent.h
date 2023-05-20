#ifndef _MAX_H_
#define _MAX_H_
void ReadStudent();
//定义一个学生 
	typedef struct TagStudent
	{ 
	    char Num[10];//学号 
		char Name[20];//姓名 
		float Ascore;//平时成绩 
		float Hscore;//作业成绩 
	    float Tscore;//考试成绩
		float total;//总成绩 
	    struct TagStudent *next;//next指针变量 ，指向结构体变量 
	}Student;

extern Student *head=NULL;
#endif

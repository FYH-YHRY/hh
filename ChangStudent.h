#ifndef _MAX_H_
#define _MAX_H_
void ChangStudent();
//����һ��ѧ�� 
	typedef struct TagStudent
	{ 
	    char Num[10];//ѧ�� 
		char Name[20];//���� 
		float Ascore;//ƽʱ�ɼ� 
		float Hscore;//��ҵ�ɼ� 
	    float Tscore;//���Գɼ�
		float total;//�ܳɼ� 
	    struct TagStudent *next;//nextָ����� ��ָ��ṹ����� 
	}Student;

extern Student *head=NULL;
#endif

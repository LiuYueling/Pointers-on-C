#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **Str_List;

/*�Ӱ�����ȡ�ַ�����*/
void Scanf_String_List(void)
{
	unsigned int i = 0;
	char Str_Scanf_BUFF[254];
	char *Str_List_BUFF[254]; 
	
	printf("������ַ�������(���%u��)\n",254);
	printf("�������ַ����У����%u�ַ������һ����\"#\"����\n", 128);
	
	do{
		// scanf("%s", Str_Scanf_BUFF);
		gets(Str_Scanf_BUFF);//�����ַ���
		*(Str_List_BUFF + i) = 
			(char *)malloc((strlen(Str_Scanf_BUFF) + 1) * sizeof(char));//+1'\0'
		strcpy(*(Str_List_BUFF + i), Str_Scanf_BUFF);//�����ַ���
		++i;
	}while(*Str_Scanf_BUFF != '#');
	
	free(*(Str_List_BUFF + i - 1));
	*(Str_List_BUFF + i - 1) = NULL;
	
	Str_List = (char **)malloc(sizeof(char*) * i);
	memcpy(Str_List, Str_List_BUFF, sizeof(char**)*i);//
	
	printf("******************************�ֽ���******************************\n");
}

/*�ͷ��ڴ�*/
void free_String_List(void)
{
	int i;
	
	for(i=0; *(Str_List + i) != 0; i++)
	{
		free(*(Str_List + i));
		*(Str_List + i) = NULL;
	}
	free(Str_List);
	Str_List = NULL;
}


int main()
{
	int i,flag;
	
	Scanf_String_List();
	
	for(i=0; *(Str_List + i) != 0; i++)
	{
		// printf("%s", *(Str_List + i));
		puts(*(Str_List + i));//���Զ���\n
	}
	printf("******************************�ֽ���******************************\n");
	
	flag = 1;
	for(i=1; *(Str_List + i) != 0; i++)
	{	
		if(strcmp(*(Str_List + i - 1), *(Str_List + i)) == 0)
		{
			if(flag == 1) puts(*(Str_List + i));
			flag = 0;
		}
		else
		{
			flag = 1;
		}
	}
	system("pause");
	free_String_List();
	
	
	return 0;
}


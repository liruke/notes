#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	FILE;
//	return 0;
//}
//int main()
//{
//	//���ļ���Ϊ��д
//	//�����ʧ�ܣ��᷵��NULL
//	//.��ʾ��ǰĿ¼��д�ļ�ʱ
//	//..��ʾ��һ��·��
//	FILE* pf = fopen("./../data.txt", "w");//ֱ��д��ʾ���·������ʾ����ڵ�ǰ����д��·��
//	//�����ʾ�ڱ�·������һ��·������һ��data.txt,���������ļ�����ֻ�������û�оʹ���һ���ļ���
//	// ����ֻ������·����û������ļ��ʹ�������ļ���������ļ��Ͷ�����ļ�
//	//���Խ������������
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	 }
//	//д�ļ�
//
//	//�ر��ļ�
//	fclose(pf);//fclose���յ���һ��FILE*��ָ��
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	
//	//д�ļ�
//	//fputc('a', pf);
//	//fputc('b', pf);
//	/*for (int i = 0;i < 26;i++)
//	{
//		fputc('a' + i, pf);
//	}*/
//	/*for (int i = 0;i < 26;i++)
//	{
//		fputc('a' + i, stdout);
//		printf(" ");
//	}*/
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//дһ�����룬��ɽ�text1.txt�ļ������ݿ���һ������text2.txt�ļ�
//������ļ��Ŀ���


//˼·����text1.txt��ȡ����
//д��text2.txt���ļ���

//int main()
//{
//	FILE* pfread = fopen("text1.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen->text1.txt");
//		return 1;
//	}
//	FILE* pfwrite = fopen("text2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		fclose(pfread);
//		pfread = NULL;
//		perror("fopen->text2.txt");
//		return 1;
//	}
//	//�ļ��Ķ�д������)
//	int ch = 0;
//	while ((ch=fgetc(pfread)) != EOF)
//	{
//		fputc(ch, pfwrite);
//	}
//
//
//	fclose(pfread);
//	fclose(pfwrite);
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ
//	char arr[20] = "xxxxxxxxxxxx";
//	fgets(arr, 10, pf);
//
//	////д�ļ�-дһ��
//	//fputs("abcdef", pf);
//	//fputs("abcdef", pf);
//	//fputs("abcdef", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ
//	char arr[20] = "xxxxxxxxxxxx";
//	fgets(arr, 10, stdin);//�Ӽ����϶�ȡ�ַ�
//	//ֻ��ȡʮ���ַ�
//	fputs(arr, stdout);//��ӡ��������
//
//
//	////д�ļ�-дһ��
//	//fputs("abcdef", pf);
//	//fputs("abcdef", pf);
//	//fputs("abcdef", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	/*����printf��������д��printf("%s %d %d",s.name,s.age,s.score)*/
//	//����fprintf����������fprintf(pf, "%s %d %d", s.name, s.age, s.score);
//	fscanf(pf,"%s %d %f", s.name, &(s.age), &(s.score));
//	fprintf(stdout, "%s %d %f", s.name, s.age, s.score);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
struct Stu
{
	char name[20];
	int age;
	float score;
};
int main()
{
	struct Stu s = { "zhangsan",20,90.5};
	FILE* pf = fopen("test,txt", "");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//д�ļ�
	fprintf(pf, "%s %d %f", s.name, s.age, s.score);

	fclose(pf);
	pf = NULL;
	return 0;
}
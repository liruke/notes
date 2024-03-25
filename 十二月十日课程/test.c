#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	FILE;
//	return 0;
//}
//int main()
//{
//	//打开文件，为了写
//	//如果打开失败，会返回NULL
//	//.表示当前目录，写文件时
//	//..表示上一级路径
//	FILE* pf = fopen("./../data.txt", "w");//直接写表示相对路径，表示相对于当前代码写的路径
//	//上面表示在本路径的上一个路径创建一个data.txt,如果有这个文件，就只读，如果没有就创建一个文件。
//	// 对于只读，在路径中没有这个文件就创建这个文件，有这个文件就读这个文件
//	//可以将其放在桌面上
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	 }
//	//写文件
//
//	//关闭文件
//	fclose(pf);//fclose接收的是一个FILE*的指针
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
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	
//	//写文件
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
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//写一个代码，完成将text1.txt文件的内容拷贝一份生成text2.txt文件
//完成了文件的拷贝


//思路：从text1.txt读取数据
//写到text2.txt的文件中

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
//	//文件的读写（拷贝)
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
//	//读取
//	char arr[20] = "xxxxxxxxxxxx";
//	fgets(arr, 10, pf);
//
//	////写文件-写一行
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
//	//读取
//	char arr[20] = "xxxxxxxxxxxx";
//	fgets(arr, 10, stdin);//从键盘上读取字符
//	//只读取十个字符
//	fputs(arr, stdout);//打印到键盘上
//
//
//	////写文件-写一行
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
//	//写文件
//	/*对于printf是这样书写的printf("%s %d %d",s.name,s.age,s.score)*/
//	//对于fprintf就是这样的fprintf(pf, "%s %d %d", s.name, s.age, s.score);
//	fscanf(pf,"%s %d %f", s.name, &(s.age), &(s.score));
//	fprintf(stdout, "%s %d %f", s.name, s.age, s.score);
//	//关闭文件
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

	//写文件
	fprintf(pf, "%s %d %f", s.name, s.age, s.score);

	fclose(pf);
	pf = NULL;
	return 0;
}
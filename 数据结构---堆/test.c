#include "heap.h"





void HeapSort(int* a, int n)
{
    //����
    //���ѵ�ʱ�临�Ӷ���ON
    for (int i = (n - 1 - 1) / 2;i >= 0;i--)
    {
        AdjustDown(a, n, i);
    }
    int end = n - 1;
    //ʱ�临�Ӷ���N*logN�����ϵ������Ѳ��
    for (int i = end;i >= 0;i--)
    {
        Swap(&a[0], &a[end]);
        AdjustDown(a, end, 0);
    }
}


void CreateNDate()
{
	// ������
	int n = 10000;
	srand(time(0));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen error");
		return;
	}

	for (size_t i = 0; i < n; ++i)
	{
		int x = rand() % 1000000;
		fprintf(fin, "%d\n", x);
	}

	fclose(fin);
}

void PrintTopK(int k);

void PrintTopK(int k)
{
	int k = 0;
	scanf("%d", &k);
	const char* file = "data.txt";
	FILE* fout = fopen(file, "r");
	if (fout == NULL)
	{
		perror("fopen fail");
		return;
	}
	HPDataType* minheap = (HPDataType*)malloc(sizeof(HPDataType) * k);
	if (minheap == NULL)
	{
		perror("malloc fail\n");
		return;
	}
	for (int i = 0;i < k;i++)
	{
		fscanf(file, "%d", &minheap[i]);
	}
	for (int i = (k - 1 - 1) / 2;i >= 0;i++)
	{
		AdjustDown(minheap, k, i);
	}
	int x;
	while (fscanf(file, "%d", &x) != EOF)
	{
		if (x > minheap[0])
		{
			minheap[0] = x;
			AdjustDown(minheap, k, 0);
		}
	}
	for (int i = 0;i < k;i++)
	{
		printf("%d ", minheap[i]);
	}
	fclose(file);
}

//int main()
//{
//    int arr[] = { 50,100,70,65,60,32 };
//    HP hp;
//    HPInit(&hp);
//    for (int i = 0;i < sizeof(arr) / sizeof(int);i++)
//    {
//        HPPush(&hp, arr[i]);
//    }
//    //for (int i = 0;i < sizeof(arr) / sizeof(int);i++)
//    //{
//    //    printf("%d ", hp.a[i]);
//    //}
//    printf("%d \n", HPTop(&hp));
//    HPPop(&hp);
//    printf("%d \n", HPTop(&hp));
//    HPDestroy(&hp);
//    return 0;
//}
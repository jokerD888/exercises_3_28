#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main(void)
//{
//	int n = 0;
//	char c = 0;
//	scanf("%d %c", &n, &c);
//	int row = 1;//������ɳ©������
//	int sum = 1;//�����ַ�����
//	/*if (n == 0)
//		return 0;*/
//	//������
//	while (sum <= n)//ѭ������ʱ���ŵĸ�����������ĸ���
//	{
//		sum += 2 * (2 * (row+1) - 1);
//		if (sum <=n )
//		{
//			row++;
//		}
//	}
//	//printf("%d", row);
//	//��ӡ�ϰ���
//	int i = 0;
//	int j, k;
//	for (i = row; i >0; i--)
//	{
//		//int k = 0;
//		//��ӡ�ո�
//		for (k = i; k < row; k++)
//		{
//			printf(" ");
//		}
//
//		//int j = 0;7
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			//��ӡ����
//			printf("%c",c);
//		}
//		printf("\n");
//	}
//
//	//��ӡ�°���
//	for (i =2; i <= row; i++)
//	{
//		//int k = 0;
//		//��ӡ�ո�2 3
//		for (k=0; k <row-i; k++)
//		{
//			printf(" ");
//		}
//
//		//int j = 0;
//		//��ӡ����
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("%c", c);
//		}
//
//		//����
//		printf("\n");
//	}
//	printf("%d",n-(sum- 2 * (2 * (row + 1) - 1)));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n;
//	char c;
//	 scanf("%d %c", &n, &c);
//	int sum = 1;//ɳ©��Ҫ���ַ�����
//	int i = 1;//����
//	while (sum <= n)
//	{
//		sum += 2 * (2 * (i + 1) - 1);//2n-1��һ��ĸ���������2��������һ����Ҫ��
//		if (sum <= n)
//			i++;
//	}
//	int j, k;
//	for (j = 0; j < i; j++)//��ӡ�ϰ벿��
//	{
//		for (k = 0; k < j; k++)
//			printf(" ");
//		for (k = 0; k < 2 * (i - j) - 1; k++)
//		{
//			printf("%c", c);
//		}//���*
//
//
//		printf("\n");
//	}
//	for (j = 2; j <= i; j++)
//	{
//		for (k = 0; k < i - j; k++)
//			printf(" ");
//		for (k = 0; k < 2 * j - 1; k++)
//		{
//			printf("%c", c);
//		}
//
//
//		printf("\n");
//	}
//	printf("%d", n - (sum - 2 * (2 * (i + 1) - 1)));
//	return 0;
//
//}



//���� A: L1-ISBN����
//#include<stdio.h>
//int main(void)
//{
//	char s[15] = { 0 };
//	int i = 0;
//	scanf("%s", s);
//	int sum = 0;
//	int j = 1;
//	for (i = 0; i < 12; i++)
//	{
//		//0-670-82162-4
//		if (s[i] >= '0' && s[i] <= '9')
//		{
//			sum += ((s[i] - '0') * j);
//			j++;
//		}
//	}
//	sum %= 11;
//	if (sum == 10)
//	{
//		if (s[12] == 'X')
//		{
//			printf("right\n");
//		}
//		else
//		{
//			s[12] = 'X';
//			printf("%s\n", s);
//		}
//	}
//	else if (sum == (s[12] - '0'))
//	{
//		printf("right\n");
//	}
//	else
//	{
//		s[12] = (char)(sum + '0');
//		printf("%s\n", s);
//	}
//	return 0;
//}

//���� B : L2 - ����
//#include<stdio.h>
//double Expend(int n,int Z,int r)
//{
//	if (n == 1)
//		return Z;
//	else
//		return  Expend(n - 1, Z, r) *(1 - r / 100.0);
//}
//int main(void)
//{
//	int i = 0;
//	int N = 0;
//	double sum = 0;
//	double Z = 0;
//	double r = 0;
//	int x = 0;
//	int num = 0;
//	scanf("%d%lf%lf", &N, &Z, &r);
//	int* s = (int*)malloc(N * sizeof(int));
//	for (i = 0; i < N; i++)
//	{
//		*(s + i) = i;
//	}
//	
//	
//	for (i = 0; i < N; i++)
//	{
//		int j = 0;
//		scanf("%d", &j);
//		int k = 0;
//		for (k = 0; k < j; k++)
//		{
//			scanf("%d", &num);
//			s[num] = ;
//		}
//		if (j == 0)
//		{
//			scanf("%d", &x);
//			double ret = Expend(i,Z,r);
//			sum += k * ret;
//			
//		}
//	}
//	printf("%.0f", sum);
//	free(s);
//	s = NULL;
//	return 0;
//}
#include<stdio.h>
int main(void)
{
	int N;
	double Z;
	double r;
	int i = 0;
	int d = 1;
	int j,k;
	scanf("%d%lf%lf", &N, &Z, &r);
	int* s = (int*)calloc(N ,sizeof(int));
	int* as = (int*)calloc(N, sizeof(int));
	
	for (i = 0; i < N; i++)
	{
		int penum;
		scanf("%d", &penum);
		if (penum != 0)
		{
		
			for (j = 0; j < penum; j++)
			{
				scanf("%d", &k);
				//s[i] = k;
				//as[i]++;
				as[k]++;
			}
			as[i]++;
		}
		else
		{
			scanf("%d", &d);
		}
	}

	free(s);
	s = NULL;
	free(as);
	as = NULL;
	return 0;
}


//int penum;
//scanf("%d", &penum);
//for (j = 0; j < penum; j++)
//{
//	scanf("%d", &k);
//	s[i] = penum;
//	as[k]++;
//
//}
//if (penum == 0)
//{
//
//}
#include<stdio.h>

int main()
{
	int book[11],i,j,t,n;  //������Ҫ1001��Ͱ������ʾ0~10֮��ÿһ�������ֵĴ���
	//init 0
	for(i=0;i<=10;i++)
		book[i]=0;

	//scanf("%d",&n); // input number n
	for(i=1;i<=5;i++)  //ѭ������n������������Ͱ���� 
	{
		scanf("%d",&t);
		book[t]++;
	} 
	
	// for(i=1000;i>=0;i--)  //�����ж�a[0]~a[10]
	// 	for(j=1;j<=book[i];j++) // �ɴ�С
	// 		printf("%d ",i);

	for(i=0;i<=10;i++)  //�����ж�a[0]~a[10]
		for(j=1;j<=book[i];j++) // ��С���� ��ӡflag
			printf("%d ",i);

	printf("\n");

	getchar();
	getchar();

	return 0; 
}

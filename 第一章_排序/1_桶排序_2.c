#include<stdio.h>

int main()
{
	int book[1001],i,j,t,n;  //������Ҫ1001��Ͱ������ʾ0~1000֮��ÿһ�������ֵĴ���
	//init 0
	for(i=0;i<=1000;i++)
		book[i]=0;

	scanf("%d",&n); // input number n
	for(i=1;i<=n;i++)  //ѭ������n������������Ͱ���� 
	{
		scanf("%d",&t);
		book[t]++;
	} 
	
	// for(i=1000;i>=0;i--)  //�����ж�a[0]~a[10]
	// 	for(j=1;j<=book[i];j++) // �ɴ�С
	// 		printf("%d ",i);

	for(i=0;i<=1000;i++)  //�����ж�a[0]~a[10]
		for(j=1;j<=book[i];j++) // ��С����
			printf("%d ",i);

	printf("\n");

	getchar();
	getchar();

	return 0; 
}

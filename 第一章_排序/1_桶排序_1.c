#include<stdio.h>

int main()
{
	int book[11],i,j,t,n;  //我们需要1001个桶，来表示0~10之间每一个数出现的次数
	//init 0
	for(i=0;i<=10;i++)
		book[i]=0;

	//scanf("%d",&n); // input number n
	for(i=1;i<=5;i++)  //循环读入n个数，并进行桶排序 
	{
		scanf("%d",&t);
		book[t]++;
	} 
	
	// for(i=1000;i>=0;i--)  //依次判断a[0]~a[10]
	// 	for(j=1;j<=book[i];j++) // 由大到小
	// 		printf("%d ",i);

	for(i=0;i<=10;i++)  //依次判断a[0]~a[10]
		for(j=1;j<=book[i];j++) // 由小到大 打印flag
			printf("%d ",i);

	printf("\n");

	getchar();
	getchar();

	return 0; 
}

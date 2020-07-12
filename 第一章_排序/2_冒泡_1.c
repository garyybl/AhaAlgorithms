#include<stdio.h>


int main()
{
    int a[100], i, j, n, t;

    // input
    scanf("%d",&n); // input number n
	for(i=1;i<=n;i++)  //循环读入n个数 
	{
		scanf("%d",&a[i]);
	} 
	
    //deal
    for (i=1; i<=n-1; i++) {
        for (j=1; j<=n-i; j++) {
            if (a[j] < a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    //output
    for (i=1; i<=n; i++)
        printf("%d ", a[i]);
    printf("\n");

    getchar();
    getchar();

    return 0;
}
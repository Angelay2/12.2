#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字 
//例如：2 + 22 + 222 + 2222 + 22222
int main(){
	int a, n;
	scanf("%d%d", &a, &n);

	int i = 0;
	int tmp = 0, sum = 0;
	for (; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}

	printf("算式前%d项之和为%d\n",n,sum);
	system("pause");
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������ 
//���磺2 + 22 + 222 + 2222 + 22222
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

	printf("��ʽǰ%d��֮��Ϊ%d\n",n,sum);
	system("pause");
	return 0;
}


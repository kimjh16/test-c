#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float a; // 처음 -8.5 입력 
	int b;


	printf("입력:");
	scanf("%f", &a);

	b = a * 256; // 소수점 8비트 이기 때문에 256 곱함

	for (int i = 15; i >= 0; i--) // 16비트 출력 반복
	{
		if (b & (1 << i)) // b의 i비트가 1인지 0인지 확인
		{
			printf("1");
		}
			
		else
		{
			printf("0");

		}

		if (i == 8)
		{
			printf(".");
		}

	}

	return 0;
	
}
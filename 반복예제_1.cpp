#include <stdio.h>

main(){
	int n=1;
	
	while(n <= 10 ){
		printf("#");
		n++;   //++n , n = n+1
	}
	//-------------------
	printf("\n");
	
	int num = 1;
	while(num<=5)
	{
		printf("�ݺ����� : %d\n", num);
		num++;
	}
	printf("�ݺ��������� num : %d\n", num);
	
	//------------------
	int i = 30 ;
	while( i >= 10   ){
		printf("%d " , i);
		i=i-2 ; // i-=2 
	}
	
	//------------------
	printf("\n");
	
	i = 1;
	int sum = 0;
	while( i<=10   ){
		sum=sum+i; // sum+=i;
		i++;
	}
	printf("1���� 10������ ��:%d", sum);
}






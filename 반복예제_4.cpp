#include <stdio.h>
main(){
	
	int i = 11;
	do{
		printf("%d ", i);
		i--;
	}while( i >=5 );
	
	
	printf("\n����11---------\n");
	
	i = 0;
	int n ;
	printf("�����Է�:");
	scanf("%d" , &n) ;
	do{
		printf("I love programming\n");
		i++ ; 		
	}while(i < n);
	
	printf("\n����14---------\n");
	int sum = 0;
	do{
		printf("�����Է�:");
		scanf("%d" , &n);
		sum = sum + n;
	}while( n != 0);
	
	printf("�� : %d" , sum);
	
}








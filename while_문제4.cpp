#include <stdio.h>

main(){
	int n , count = 0, sum = 0;
	
	do{
		printf("�����Է�:");
		scanf("%d" , &n);
		if(n < 1) 
			continue;
		sum = sum + n;	
		count++;
	}while( count < 5   );
	
	printf("�հ�:%d\n" , sum);
}

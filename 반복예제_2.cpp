#include <stdio.h>
main(){
	int i, n, sum=0;
	int start;
	
	printf("첫번째 수:");
	scanf("%d" , &i);
	start = i;
	
	printf("마지막 수:");
	scanf("%d" , &n);
	
	while(i<=n){
		sum = sum + i;
		i++;
	}
	
	printf("%d부터 %d까지의 합은 %d입니다.\n" , start, n, sum); 
}

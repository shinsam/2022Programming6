#include <stdio.h>

main(){
	int i=1 , dan ;
	printf("몇단?");
	scanf("%d" , &dan);
			
	printf("*** %d단 ***\n", dan);
	
	while(i <= 9){
		printf("%d*%d=%d\n",dan,i,i*dan );
		i++;
	}
	i=9;
	while(i>=1 ){
		printf("%d*%d=%d\n",dan,i,i*dan );
		i--;
	}
	
	printf("\n----------------\n");
	int count = 1;
	while(1){
		printf("%d ", count);
		count = count + 2 ; // count+=2
		if( count > 10)
			break;
	}
	
	printf("\n-1~100까지의 홀수의 합-----------\n");
	i=1; 
	int sum = 0;
	while(1){
		sum = sum + i; 	//sum+=i
		i = i + 2	;	//i+=2
		if(i>100)
			break;
	}
	printf("1~100까지 홀수의 합=%d" , sum) ;
	
	
}









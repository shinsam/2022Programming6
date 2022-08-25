#include <stdio.h>

main(){
	int i, su, cnt=0;
	printf("숫자입력:");
	scanf("%d" , &su);
	
	i = 1;
	while( i <=su  ){
		if(su%i==0) //약수발견하면 cnt증가 
			cnt++;
		i++; //다음수로				
	}
	if(cnt == 2 )
		printf("%d는 소수\n" , su)	;
	else
		printf("%d는 소수가 아님\n" , su)	;
}	

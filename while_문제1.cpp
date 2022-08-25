#include <stdio.h>

main(){
	//while문으로 무한 루프를 사용하여 
	//1~10까지의 합을 구하되 
	//5의 배수는 제외하는 프로그램을 출력해보자. 

	int i =0, sum = 0;
	
	while(1){
		i++;
		if(i>10)
			break;
		if(i%5==0)
			continue;//5의 배수는 제외
		sum+=i;
	}
	printf("sum=%d\n" , sum);
}

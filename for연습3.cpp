#include <stdio.h>

func1(){
	printf("\n[����8]=============\n");
	//�����Է¹޾� n! ���
	int i, n, fact = 1; 
	printf("n:");
	scanf("%d" , &n);
	for(i=1 ; i<=n ; i++ ){
		fact = fact * i;
	}
	printf("%d! = %d\n" , n , fact);
}

func2(){
	//��(2��~9��)�� �ϳ� �Է¹޾� �������� ��� 
	int i, dan;
	printf("\n[����9]=============\n");
	printf("���?");
	scanf("%d" , &dan);
	printf("\n*** %d�� ***\n", dan) ;
	for( i=1 ;  i<=9 ; i++ ){
		printf("%d * %d = %d\n" ,dan, i, dan*i);
	}
}

func3(){
	printf("\n[����10]=============\n");
	int n1, n2, i;
	printf("�� �� �Է�:") ;
	scanf("%d %d" , &n1, &n2) ;
	if(n1<n2) { //ex) 5 , 10
		for(i=n1; i<= n2; i++){
			printf("%d ", i);
		}
	}else{	//ex) n1=10, n2= 5
		for( i=n2;i<=n1 ; i++ )
			printf("%d ", i);
	}
}

func4(){
	printf("\n[����11]=============\n");
	int num1, num2, i;
	printf("�� ���� �Է�:");
	scanf("%d %d", &num1, &num2);
	
	for(i=1; i <=100; i++)
		if(i%num1==0 && i%num2==0)
			printf("%d ", i);

}

main(){
	
	int no; //���� ��ȣ 
	while(1){
		printf("�������?:");
		scanf("%d" , &no);
		printf("%d������\n" , no);
		switch(no){
			case 1:	func1();break;
			case 2: func2();break;
			case 3:	func3();break;
			case 4:	func4();break;
			default:
				printf("�߸��Է�\n");
				return 0;
		}
	}
}





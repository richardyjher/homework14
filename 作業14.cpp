#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a,b,c;
	
	printf("��J�T���ΤT���\n");
	printf("a="); scanf("%d",&a);
	printf("b="); scanf("%d",&b);
	printf("c="); scanf("%d",&c);
	
	
    if( (a+b) <= c ){
    	printf("���i�򦨤T���ΡC"); 
	}
	else if( (a+c) <= b && (b>>a>>c || b>>c>>a)){
	    printf("���i�򦨤T���ΡC"); 
	}
	else if( (b+c) <= a ){
	    printf("���i�򦨤T���ΡC"); 
	}	
	else{
		printf("�i�H�򦨤T���ΡC");
	} 
	printf("\n");
	system("pause");
	return 0;
}

#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	
	
	if(a>b){
		if(b>c){
			printf("The greatest element is %d",a);
		}
		else if(a>c){
		printf("The greatest element is %d",a);	
		}
		else if(a<c){
		printf("The greatest element is %d",c);	
		}
		
	}
	else if(a<b){
		if(b>c){
			printf("The greatest element is %d",b);
		}
		else if(a>c){
		printf("The greatest element is %d",b);	
		}
		else if(b<c){
		printf("The greatest element is %d",c);	
		}
		
	}
		
}

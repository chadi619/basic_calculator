#include<stdio.h>
#include<math.h>
main(){
	
	double a,b,r;
	char p;
	printf("give number: ");
	scanf("%lf",&a);
	printf("give operator: ");
	scanf(" %c",&p);
	printf("give number: ");
	scanf("%lf",&b);
	
	switch (p){
		case'+': printf("%.2lf",a+b);
		break;
		case'-': printf("%.2lf",a-b);
		break;
		case'*': printf("%.2lf",a*b);
		break;
		case'/':if(b>0){
				printf("%.2lf",a/b);
		} else { printf("u cant devide by 0!!");
		}
		break;
		default :
			printf("%c is not a valide operator!",p);
	}	
	
	
	
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	char c;
	scanf("%d %d %c",&a,&b,&c);
    switch(c){
    	case'+':{
    	printf("%d+%d=%d",a,b,a+b);
		break;
		}
		case'-':{
    	printf("%d-%d=%d",a,b,a-b);
		break;
		}
		case'*':{
    	printf("%d*%d=%d",a,b,a*b);
		break;
		}
		case'/':{
    	printf("%d/%d=%d",a,b,a/b);
		break;
		}
		default:{
			printf("你輸入的值錯誤");
		}
	}
	
	
	
	system("pause");
	return 0;
}

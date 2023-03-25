#include<stdio.h>

int main (){
    printf("Hello, would you like to order the food?\n");
    printf("Do choose any of given option\n");
    printf("1.Soup or salad\n");
    printf("2.Chinese food\n");
    printf("3.Italian food\n");
    printf("4.Any cold drinks\n");
    printf("5.Some dessert\n");

    int a,b,c,d,e;
    printf("Order something\n");
    scanf("%d",&a);
switch (a)
{
    case 1:
    printf("1.Tomato Soup\n");
    printf("2.Vegetable soup\n");
    scanf("%d",&b);
    switch (b){
            case 1:
                printf("10$ for It\n");
            break;
            case 2:
                printf("9$ for It\n");
            break;
            default:
                printf("NOT AVAILABLE\n");
            break;
        }
    break;

    case 2:
    	printf("1.Jiangsu\n");
    	printf("2.Hunan\n");
    	printf("3.Zhejiang\n");
    	scanf("%d",&c);
	switch (c){
		case 1:
			printf("8$ for IT\n");
		break;
		case 2:
			printf("9$ for IT\n");
		break;
		case 3:
			printf("4$ for IT\n");
		break;
		default:
            printf("NOT AVAILABLE\n");
        break;
	}
	break;

	case 3:
		printf("currently not available");
	break;

	case 4:
		printf("1.Sprite\n");
		printf("2.Coca Cola\n");
		printf("3.Thums Up\n");
		scanf("%d",&d);

	  switch(d){
	  	case 1:
			printf("2$ for IT\n");
		break;
		case 2:
			printf("1$ for IT\n");
		break;
		case 3:
			printf("2$ for IT\n");
		break;
		default:
            printf("NOT AVAILABLE\n");
        break;
	  }
	  break;

	case 5:
		printf("1.ice-cream\n");
		printf("2.cakes\n");
		scanf("%d",&e);
		switch(e){
			case 1:
				printf("10$ for IT");
			break;
			case 2:
		        printf("currently not available");
	        break;
	        default:
            printf("NOT AVAILABLE\n");
            break;
		}
	  break;

	   default:
           printf("NOT AVAILABLE\n");
           break;
}
  return 0;
}

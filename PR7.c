/*Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.


output:
Enter The Value of Number 1: 5
Enter The Value of Number 2: 10

Press 1 for sum
Press 2 for Substraction
Press 3 for Multiplay
Press 4 for Divide
Press 5 for modulo
Press 0 for Exit
Enter your Choice: 1

The sum is : 15
Enter your Choice: 2

the substraction is: -5
Enter your Choice: 3

the multiplication is:50
Enter your Choice: 4

The division is :0
Enter your Choice: 5

The modulo is :5
Enter your Choice: 0
*/

#include<stdio.h>

int sum(int x,int y){
	return x+y;
}
int Substraction(int a,int b){
	return a-b;
}
int Multiplay(int k,int m){
	return k*m;
}
int Divide(int i,int j){
	return i/j;
}
int modulo(int u,int v){
	return u%v;
}
void main(){
	int choice,n1,n2;

	printf("Enter The Value of Number 1: ");
	scanf("%d",&n1);
	printf("Enter The Value of Number 2: ");
	scanf("%d",&n2);
	printf("\nPress 1 for sum");
	printf("\nPress 2 for Substraction");
	printf("\nPress 3 for Multiplay");
	printf("\nPress 4 for Divide");
	printf("\nPress 5 for modulo");
	printf("\nPress 0 for Exit");

	do{
	printf("\nEnter your Choice: ");
	scanf("%d",&choice);
	switch(choice){
		
		case 1:
			printf("\nThe sum is : %d",sum(n1,n2));
		break;
		case 2:
			printf("\nthe substraction is: %d",Substraction(n1,n2));
			break;
			case 3:
			printf("\nthe multiplication is:%d",Multiplay(n1,n2));
			break;
			case 4:
			printf("\nThe division is :%d",Divide(n1,n2));
			break;
			case 5:
			printf("\nThe modulo is :%d",modulo(n1,n2));
			break;
			case 6:
			break;
	}
}
	while(choice!=0);
}

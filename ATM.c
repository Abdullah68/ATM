#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	// V= value , Cash = cash , A= amount , i=select , pass = Password
	int V, Cash, A, i,pass;
	Cash = 1000;
	printf("\t\t ATM \n\n\n");
	
	printf("Enter password : ");
	scanf("%d", &pass); 
	if(pass == 1234) {
	
	printf("press 1 to withdrawl	\npress 2 to deposit\n");
	scanf("%d",&i); }
	
	if(i==1) {
		printf("your balance : %d \n", Cash);
		printf("How much you need withdrawl :  \n");
		scanf("%d", &V );
		printf("\n\tDone \n\n\n");
		printf("Your balance now is : %d " , Cash- V);
	}
	else if(i==2) {
		printf("your balance : %d \n", Cash);
		printf("How much you need deposit :  \n");
		scanf("%d", &V );
		printf("\n\tDone \n\n\n");
		printf("Your balance now is : %d \n\n" , Cash + V);
		printf("\t Thankyou");
	}
	else printf("try again");
	
	
	return 0;
}

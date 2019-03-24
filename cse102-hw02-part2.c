						/***************************/
						/*                         */
						/*      Osman Çetin        */
						/*       161044069         */
						/*          HW-02          */
						/*         Part  2         */
						/*						   */
						/***************************/
#include <stdio.h>
/*This program find all digits of a number which is entered from the keyboard (the
number must be between 23 and 98760).*/
int main(){
	int i,j=0,number,digit=10000,part_number;
	while(j==0){/*the purpose of this loop is again take a number when user entered not defined number for exp:99788*/
		printf("Enter a number:");
		scanf("%d",&number);
		
		if(number>=23 && number<=98760){
			j++;
		}
		else{
			printf("\nAgain enter a number between 23 and 98760\n");
		}
	}
	
	for(i=5;i>0;i--){/*the purpose of this loop is seperate number to digit and show all digits*/
		part_number=number/digit;
		printf("\nThe %dth digit is %d\n",i,part_number);
		number=number-digit*part_number;
		digit=digit/10;
	}
	
	return 0;
}

						/***************************/
						/*                         */
						/*      Osman Çetin        */
						/*       161044069         */
						/*          HW-02          */
						/*         Part  1         */
						/*						   */
						/***************************/

#include <stdio.h>
#include <stdlib.h>

/*this program firstly takes a student count and than genarates random grades after than shows
most successful student,
most unsuccessful student,
List the number of students for each letter grade,
calculated average grade*/
int main(){
	int i,j=0,A=0,B=0,C=0,D=0,F=0,student_count,grade,successful=0,unsuccessful=100,success_index,unsuccess_index,k=0,selection;
	char success_letter,unsuccess_letter;
	double avarage=0;
	srand(40);
	while(j==0){/*this loop takes student count. if count not in range takes number again*/
		printf("Enter student count:");
		scanf("%d",&student_count);
		if(student_count>=3 && student_count<=50)
			j++;
		else
			printf("\nNot in range!!\n");
	}
	
	for(i=1;i<=student_count;i++){/*this loop assigns grades to each students randomly*/
		grade=rand()%101;/*this rand function generates random numbers between 0 and 100*/
		avarage=avarage+grade;
		printf("%d  ",grade);
		if(grade>successful){/*this comparison finds most successful student's grade and index*/
			successful=grade;
			success_index=i;
		}
		if(grade<unsuccessful){/*this comparison finds most unsuccessful student's grade and index*/ 
			unsuccessful=grade;
			unsuccess_index=i;
		}
		switch(grade/10){/*this operand finds number of students for each letter grade*/
        
		    case 10:
		    case 9:	A++; break; 
		    case 8: B++; break;
			case 7: C++; break;
		    case 6: D++; break;
		    case 5:
		    case 4:
		    case 3:
		    case 2:
		    case 1:
		    case 0: F++; break;
        }
    }
		
		switch(successful/10){/*this operand finds letter of most successful student's grade*/
        
		    case 10:
		    case 9:	success_letter='A'; break; 
		    case 8: success_letter='B'; break;
			case 7: success_letter='C'; break;
		    case 6: success_letter='D'; break;
		    case 5:
		    case 4:
		    case 3:
		    case 2:
		    case 1:
		    case 0: success_letter='F'; break;
        }
		
		switch(unsuccessful/10){/*this operand finds letter of most unsuccessful student's grade*/
        
		    case 10:
		    case 9:	unsuccess_letter='A'; break; 
		    case 8: unsuccess_letter='B'; break;
			case 7: unsuccess_letter='C'; break;
		    case 6: unsuccess_letter='D'; break;
		    case 5:
		    case 4:
		    case 3:
		    case 2:
		    case 1:
		    case 0: unsuccess_letter='F'; break;
        }
		
        avarage=avarage/student_count;/*in here we calculate avarage grade of all students*/
        
        while(k==0){/*in this loop we show menu to user and user can choose anyone*/
			printf("\n--------------------------------------");
			printf("\nStudent Score Calculator Menu for %d Student",student_count);
			printf("\n\n1) Most Successful Student");
			printf("\n2) Most Unsuccessful Student");
			printf("\n3) Letter Grade Statistics");
			printf("\n4) Calculate Average");
			printf("\n5) Show all Data");
			printf("\n					Make Selection:");
			scanf("%d",&selection);
			if(selection==-1)/*when selection is '0' program closes*/
				k++;
			else if(selection<1 || selection>5)/*if user enter a undefined selection program says 'false selection' and wants new selection to user again*/
				printf("\nFalse Selection!!!");
			
			switch(selection){
				case 1: printf("\nMost Successful Student:");/*if selection equals '1' program shows most successful student and his or her index*/
						printf("\nIndex: %d",success_index);
						printf("\nScore: %d",successful);
						printf("\nLetter grade: %c",success_letter);
						break;
								 
				case 2: printf("\nMost Unsuccessful Student:");/*if selection equals '2' program shows most unsuccessful student and his or her index*/
						printf("\nIndex: %d",unsuccess_index);
						printf("\nScore: %d",unsuccessful);
						printf("\nLetter grade: %c",unsuccess_letter);
						break;
			
				case 3: printf("\n%d student got letter grade 'A'",A);/*if selection equals '3' program list the number of students for each letter grade*/
						printf("\n%d student got letter grade 'B'",B);
						printf("\n%d student got letter grade 'C'",C);
						printf("\n%d student got letter grade 'D'",D);
						printf("\n%d student got letter grade 'F'",F);
						break;
			
				case 4:	printf("\nThe avarage Score of %d Student is %.2lf",student_count,avarage);/*if selection equals '4' program calculate avarage's of grades*/
						break;
		
				case 5: printf("\nMost Successful Student:");/*if selection equals '5' program shows all four options data*/
						printf("\nIndex: %d",success_index);
						printf("\nScore: %d",successful);
						printf("\nLetter grade: %c",success_letter);
								 
						printf("\n\nMost Unsuccessful Student:");
						printf("\nIndex: %d",unsuccess_index);
						printf("\nScore: %d",unsuccessful);
						printf("\nLetter grade: %c",unsuccess_letter);
			
			
						printf("\n\n%d student got letter grade 'A'",A);
						printf("\n%d student got letter grade 'B'",B);
						printf("\n%d student got letter grade 'C'",C);
						printf("\n%d student got letter grade 'D'",D);
						printf("\n%d student got letter grade 'F'",F);

			
						printf("\n\nThe avarage Score of %d Student is %.2lf",student_count,avarage);
						break;
	
			}
		
        }
        return 0;
        
}

/*
 * Sione Daniels
 * EECS 348 - Friday 3pm
 * 10/04/2024
 * KUID: 3133752
 * Purpose: to make a program that will take in NFL game scores and determing the possibilites of said score
 * */

#include <stdio.h>
int ScorePoss(int score)
	{
	int TD2C;
	int TD1C;
	int TD;
	int FG;
	int Safe;

	for (TD2C = 0; TD2C <= score/8; TD2C++){
		for (TD1C = 0; TD1C <= score/7; TD1C++){
			for (TD = 0; TD <= score/6; TD++){
				for (FG = 0; FG <= score/3; FG++){
					for (Safe = 0; Safe <= score/2; Safe++){
						if ((TD2C*8)+(TD1C*7)+(TD*6)+(FG*3)+(Safe*2)==score){
							printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety", TD2C, TD1C, TD, FG, Safe);
							printf("\n");
						}
						}
					}
				}
			}
		}	
	}

int main(){
	int num1;
	while (1){
		printf("Give a 0 or 1 to stop\nEnter the NFL Score: ");
		scanf("%d", &num1);
		if (num1 <= 1)
		{
			printf("Program Ended\n");
			break;
		}	
		else
		{
			printf("Possible combinations of scoring plays if a team's score is %d:\n,", num1);
	       		ScorePoss(num1);	
		
		}
	}	
}

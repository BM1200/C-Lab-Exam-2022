//G00410478
//BrendanMcShane
//LAB EXAM

//using basic st.dio for the standard API
#include <stdio.h>

//main method
void main()
{
	//declare all variables
	//I need all my variables for the hours, rates, etc.
	int depID, planID, lessThanGrand = 0;
	float summerDayHrs, summerDayRate, summerNightHrs, summerNightRate, winterHrs, winterRate, annualTotal, summerTotal;

	//print out statement with scanf to begin the while loop
	printf("Please enter Department ID and -1 to exit loop \n");
	scanf("%d", &depID);

	//while loop that stops when user inputs -1
	while (depID != -1)
	{
		//printf statement to gather the data needed to cpmpplete this code
		printf("Please enter the summer day time units, summer night time rates, winter units and the electricity plan ID\n");
		scanf("%f %f %f %d", &summerDayHrs, &summerNightHrs, &winterHrs, &planID);

		//if statement for whichever plan ID is used
		if (planID == 1)
		{
			//putting in the rates for each plan ID to get the total
			summerDayRate = 0.5;
			summerNightRate = 0.1;
			winterRate = 0.6;
			summerTotal = summerNightHrs * summerNightRate;
			annualTotal = (summerDayHrs * summerDayRate) + (summerNightHrs * summerNightRate) + (winterHrs * winterRate);
			printf("The total bill of dept is %f and the night time summer cost is %f\n", annualTotal, summerTotal);

			//Im trying to use this if statement to gather every time the summer night units are less than 1000
			//I use ++ to update everytime that it is less than 1000
			if (summerTotal > 1000)
			{
				lessThanGrand++;
			}
		}
		//else if statement
		else if (planID == 2)
		{
			summerDayRate = 0.75;
			summerNightRate = 0.2;
			winterRate = 0.85;
			summerTotal = summerNightHrs * summerNightRate;
			annualTotal = (summerDayHrs * summerDayRate) + (summerNightHrs * summerNightRate) + (winterHrs * winterRate);
			printf("The total bill of dept is %f and the night time summer cost is %f\n", annualTotal, summerTotal);

			//Im trying to use this if statement to gather every time the summer night units are less than 1000
			//I use ++ to update everytime that it is less than 1000
			if (summerTotal > 1000)
			{
				lessThanGrand++;
			}

		}
		//else if statement
		else if (planID == 3)
		{
			summerDayRate = 1.1;
			summerNightRate = 0.3;
			winterRate = 1.3;
			summerTotal = summerNightHrs * summerNightRate;
			annualTotal = (summerDayHrs * summerDayRate) + (summerNightHrs * summerNightRate) + (winterHrs * winterRate);
			printf("The total bill of dept is %f and the night time summer cost is %f\n", annualTotal, summerTotal);

			//Im trying to use this if statement to gather every time the summer night units are less than 1000
			//I use ++ to update everytime that it is less than 1000
			if (summerTotal > 1000)
			{
				lessThanGrand++;
			}
		}
		//using this else statement just in case the user enters the wrong input
		//else statment
		else
		{
			printf("ERROR, CHOOSE FROM NUMBERS 1-3");
		}
		printf("Please enter Department ID and -1 to exit loop \n");
		scanf("%d", &depID);



	}//end of while loop
	//print statements at the end when the while loop is finished
	printf("The total company bill is %f\n", annualTotal);
	printf("The max summer night time bill by any department was %f\n", summerTotal);
	printf("The number of department with less than 1000 summertime night units is %d\n", lessThanGrand);






}

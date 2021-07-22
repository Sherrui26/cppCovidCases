#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define J 14

struct covid{
	double date;
	int dailyCase;
	int dailyRecover;
	int dailyDeath;
};
struct covid myCase[J];

void search(double num)
{
	int i,found;
	for(i=0; i<J; i++)
    {
        if(myCase[i].date == num)
        {
            found = 1;
            break;
        }
    }
    	int total1=0;
		int total2=0;
		int total3=0;
	
	if(found == 1)
    {
        printf("\nRecord of Date %.1f is found!", num);
        printf("\n\nDates   New \tRec  \tDeath ");
		printf("\n%.1f\t",myCase[i].date);
		printf("%d\t",myCase[i].dailyCase);
		printf("%d\t",myCase[i].dailyRecover);
		printf("%d\t",myCase[i].dailyDeath);
		
	double percentCase, percentRec, percentDeaths;		
	percentCase = (myCase[i].dailyCase/722659.0)*100;
	percentRec = (myCase[i].dailyRecover/657739.0)*100;
	percentDeaths = (myCase[i].dailyDeath/4803.0)*100;
	
		printf("\n\nPercentage of new case for this date : %.2f%%",percentCase);
		printf("\nPercentage of recovered case : %.2f%%",percentRec);
		printf("\nPercentage of death case : %.2f%%",percentDeaths);
    }
    else
    {
        printf("\nNo Record Found");
    }
}

void cases()
{
	int i;
	for (i=0; i<14; i++)
	{
		myCase[i].date;
		myCase[i].dailyCase;
		myCase[i].dailyRecover;
		myCase[i].dailyDeath;
		
		printf("\n%.1f\t",myCase[i].date);
		printf("%d\t",myCase[i].dailyCase);
		printf("%d\t",myCase[i].dailyRecover);
		printf("%d\t",myCase[i].dailyDeath);
	}
}

void displayTotalCase ()
{
		int summationCase=0;
		int summationRec=0;
		int summationDeaths=0;
	
		int i;
		for (i=0; i<14; i++)
		{
		summationCase += myCase[i].dailyCase;
		summationRec += myCase[i].dailyRecover;
		summationDeaths += myCase[i].dailyDeath;
		}

		printf("\n\nTotal for new case, recovered case and death case is : ");
		printf("\nTotal new case : %d",summationCase);
		printf("\nTotal recovered case : %d",summationRec);
		printf("\nTotal death case : %d",summationDeaths);
}

void displayPercentage ()
{
		int total1=0;
		int total2=0;
		int total3=0;
	
		int i;
		for (i=0; i<14; i++)
		{
		total1 += myCase[i].dailyCase;
		total2 += myCase[i].dailyRecover;
		total3 += myCase[i].dailyDeath;
		}
		
	double percentCase, percentRec, percentDeaths;		
	percentCase = (total1/722659.0)*100;
	percentRec = (total2/657739.0)*100;
	percentDeaths = (total3/4803.0)*100;
	
		printf("\nPercentage of new case : %.2f%%",percentCase);
		printf("\nPercentage of recovered case : %.2f%%",percentRec);
		printf("\nPercentage of death case : %.2f%%",percentDeaths);
}

int main(void){
	
	double summationCase,summationRec,summationDeaths;
	
	myCase[0].date= 12.6; 	myCase[0].dailyCase= 5793;	myCase[0].dailyRecover= 8334;	myCase[0].dailyDeath= 76;
	myCase[1].date= 13.6; 	myCase[1].dailyCase= 5304;	myCase[1].dailyRecover= 8163;	myCase[1].dailyDeath= 84;
	myCase[2].date= 14.6; 	myCase[2].dailyCase= 4949;	myCase[2].dailyRecover= 6588;	myCase[2].dailyDeath= 60;
	myCase[3].date= 15.6;   myCase[3].dailyCase= 5419;	myCase[3].dailyRecover= 6831;	myCase[3].dailyDeath= 101;
	myCase[4].date= 16.6; 	myCase[4].dailyCase= 5150;	myCase[4].dailyRecover= 7240;	myCase[4].dailyDeath= 73;
	myCase[5].date= 17.6; 	myCase[5].dailyCase= 5738;	myCase[5].dailyRecover= 7530;	myCase[5].dailyDeath= 60;
	myCase[6].date= 18.6; 	myCase[6].dailyCase= 6440;	myCase[6].dailyRecover= 6861;	myCase[6].dailyDeath= 74;
	myCase[7].date= 19.6; 	myCase[7].dailyCase= 5911;	myCase[7].dailyRecover= 6918;	myCase[7].dailyDeath= 73;
	myCase[8].date= 20.6; 	myCase[8].dailyCase= 5293;	myCase[8].dailyRecover= 5941;	myCase[8].dailyDeath= 60;
	myCase[9].date= 21.6; 	myCase[9].dailyCase= 4611;	myCase[9].dailyRecover= 5439;	myCase[9].dailyDeath= 69;
	myCase[10].date=22.6; 	myCase[10].dailyCase=4743;	myCase[10].dailyRecover=5557;	myCase[10].dailyDeath=77;
	myCase[11].date=23.6; 	myCase[11].dailyCase=5244;	myCase[11].dailyRecover=6372;	myCase[11].dailyDeath=83;
	myCase[12].date=24.6; 	myCase[12].dailyCase=5841;	myCase[12].dailyRecover=5411;	myCase[12].dailyDeath=84;
	myCase[13].date=25.6;	myCase[13].dailyCase=5812;	myCase[13].dailyRecover=6775;	myCase[13].dailyDeath=82;

	printf("Data Record about Covid-19 Cases in Malaysia from 12/6-25/6 by Ministry Health of Malaysia :  \n");
	printf("\nDates   New \tRec  \tDeath ");
	
	cases();
	
	displayTotalCase();
	
	printf("\n\nTotal percentage of new case, recovered case and death case:");

	displayPercentage();
	
	int systemloop = 1;
	while(systemloop == 1){
		double searching = 0;
		printf("\n\nPlease enter date to search(eg- 12.6): ");
		scanf("%lf",&searching);
		search(searching);
		
		printf("\n________________");
		printf("\n\nDo you want to continue? Yes-1, No-0 : ");
		scanf("%d",&systemloop);
	
	}
		
		
	return 0;
}

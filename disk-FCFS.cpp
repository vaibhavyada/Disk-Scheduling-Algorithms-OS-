#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,init,req[100],thm=0;
    printf("Enter the initial head position:");
    scanf("%d",&init);
    printf("Enter the number of requests:");
    scanf("%d",&n);
    printf("Enter disk requests:");
    for(i=0;i<n;i++){
    	scanf("%d",&req[i]);
	}
	for(i=0;i<n;i++){
		thm += abs(init-req[i]);
		printf("Head movement from %d to %d is : %d\n",init,req[i],abs(init-req[i]));
		init=req[i];
	}
	printf("Total head movement is : %d",thm);
}



/*

int RQ[100],i,n,TotalHeadMoment=0,initial;
    printf("Enter the number of Requests\n");
    scanf("%d",&n);
    printf("Enter the Requests sequence\n");
    for(i=0;i<n;i++)
     scanf("%d",&RQ[i]);
    printf("Enter initial head position\n");
    scanf("%d",&initial);
    
    // logic for FCFS disk scheduling
    
    for(i=0;i<n;i++)
    {
        TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
        initial=RQ[i];
    }
    
    printf("Total head moment is %d",TotalHeadMoment);
    return 0;

*/

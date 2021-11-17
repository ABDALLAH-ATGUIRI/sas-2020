#include <stdio.h>
int main()
{
//	struct {
//		char name[20];
//		int vote;
//	}candidater;
//	struct Voter{
//		char name[20],CIN[6];
//	
//	};
	int i,j,x,y,n;

	
	

	printf(" Enter the number of candidates:");
	scanf("%d",&n);
	
	 char P[n][50];
	 
	 for(j=0;n>j;j++){
	 	printf("name of condid number %d : ",j+1);
	 	
	 	scanf(" %s",&P[j]);

	 };
//	 	for (j=0;n>j;j++)
//	printf("%s \t", P[j]);
	
	 char* Y[30];
	 char* Z[30];
	 int X;

	 printf("Enter the number of voters : ");
	 scanf("%d",X);
	 
for (i=0;X>i;i++){
	 printf("Condidate's name number %d : ",i+1);
	 scanf("%d",&Z[j]);
	 printf("Condidat's CIN number %d : ",i+1);
	 scanf("%d",&Y[j]);
	 }


	for (i=0;i<n;i++){
		
		
	}
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
#include <stdio.h>
#include <conio.h>
#include <math.h>
int a[30],count=0;
//row=index && column=value
int place(int pos){
	//this function for another queen in same column,row or diagonal.
	int i;
	for(i=1;i<pos;i++){
		if((a[i]==a[pos]) || ((abs(a[i]-a[pos])==abs(i-pos)))){
			return 0;
		}
	}
	return 1;
}
void print_sol(int n){
	int i,j;
	count++;
	printf("\n\nSolution #%d:\n",count);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(a[i]==j){
				printf("Q\t");
			}
			else{
				printf("*\t");
			}
		}
		printf("\n");
	}
}
void queen(int n){
	int k=1;//k is the queen no.
	a[k]=0;//means storing 1st queen on the 0th column.
	while(k!=0){
		do{
			a[k]++;
		}while((a[k]<=n) && !place(k));
		if(a[k]<=n){
			if(k==n){
				print_sol(n);
			}
			else{
				k++;
				//moving to next queen as k is the queen no.
				a[k]=0;
			}
		}
		else{
			k--;
		}
	}
}
void main(){
	int n;
	printf("Enter the no. of queens: ");
	scanf("%d",&n);
	queen(n);
	printf("\nTotal solutions=%d",count);
}

//https://www.youtube.com/watch?v=fIKLtPEqw_o

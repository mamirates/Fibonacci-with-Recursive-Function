#include <stdio.h>

int recurfib(int N);

int main(){
	int i,n;
	printf("Please Enter the Index of Fibonacci:",n);
	scanf("%d",&n);
	if(n<=0){
		printf("You Enter the Invalid Number"); 
	}
	else{	
		for(i=1;i<=n;i++){
			printf(" %d ",recurfib(i));
		}
	}		
	return 0;
}
int recurfib(int N){
	if(N==1 || N==2)
		return 1;
	else
		return (recurfib(N-1) + recurfib(N-2)); 
}

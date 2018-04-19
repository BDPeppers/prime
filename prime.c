#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	printf("Enter the value of n:");
	int limit; int count=0; 
	scanf("%i",&limit);
	printf("First %d prime numbers:", limit);
	//true denotes primality
	bool Prime[1000];//array of size limit with all false elemets
	Prime[0]=false;//1 isn't prime
	
	//while and for loops have the same syntax and control flow
	for(int a = 1; a < 1000; a++){
		Prime[a] = true;
	}
		for(int x = 2; x <1000; x++){
			if(Prime[x-1]){
				for(int y = x*x; y <= 1000; y+=x){
					Prime[y-1] = false;
				}
			}
		}

	 for(int c =1; c < sizeof(Prime); c++){
			if (Prime[c]){
				printf("%d%s",c+1," ");
				count++;
	 	}
		if(count==limit){
			break;
		}
	}
	printf("\n");

}	

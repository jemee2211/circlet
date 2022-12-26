#include<stdio.h>
main(){
	int r,c;
	int y=4;
	int z=4;
	
	for(r=4; r>=1; r--){
		for(c=1; c<=7;c++){
			
			if(c==y || c==z){
				printf("*");
				
			}
			else{
				
				printf(" ");
		}
	
		}
			printf("\n");
			y--;
			z++;
		
	}
	
	
}

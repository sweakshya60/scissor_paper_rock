#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>
int main()  
{	char  p1, comp;
	int play=1;
	char choice;
	while(play==1){
	printf("welcome to game\nscissor= s, paper= p, rock =r\n ");
	srand(time(NULL));   // Initialization, should only be called once.
	int r = rand();
	switch((r%3)+1){
		case 1:
		comp = 's';
		break;
		
		case 2:
		comp = 'p';
		break;
		
		case 3:
		comp = 'r';
		break;
	}	 
    printf("\nselect your move:");
    scanf(" %c", &p1);
    
    printf("cpu select %c\n", comp);
    printf("you select %c\n", p1);
   		if(comp== p1)
    		printf("draw\n");
    	else if(comp=='s' && p1== 'p')
    		printf("you lose\n");
    	else if(comp=='s' && p1== 'r')
    		printf("you win\n");
		else if(comp=='p' && p1== 's')
    		printf("you win\n");
		else if(comp=='p' && p1== 'r')
    		printf("you lose\n");
		else if(comp=='r' && p1== 'p')
    		printf("you win\n");
		else if(comp=='r' && p1== 's')
    		printf("you lose\n");
    	else
    		printf("invalid option\n");
    printf("do you want to continue, y or n:");
    scanf(" %c", &choice);
    play = (choice=='y' || choice=='Y')?1:0;
    }
    printf("game over");
}


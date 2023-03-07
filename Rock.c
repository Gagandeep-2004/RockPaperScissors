#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){
    // printf("%d",rand()%100); 
    char name[30], input[10];
    printf("Enter the name of the player:\n");
    scanf("%s",name);
    int i=0;
    int flag=0;
    while(i<3)
    {
        printf("\nEnter one of the rock, paper and scissors:\n");
        scanf("%s",input);
        srand(time(NULL));
        int x = rand()%3;
        //0 =>rock, 1=>paper, 2=>scissors
        switch (x)
        {
        case 0:
            printf("Computer selected Rock :)\n");
            if(strcmp(input,"rock")==0){
                printf("Draw\n");
            }
            else if(strcmp(input,"paper")==0){
                printf("The winner is %s\n",name);
                flag++;
            }
            else if(strcmp(input,"scissors")==0){
                printf("The winner is computer\n");
                flag--;
            }
            break;

            case 1:
            printf("Computer selected paper :)\n");
            if(strcmp(input,"paper")==0){
                printf("Draw\n");
            }
            else if(strcmp(input,"scissors")==0){
                printf("The winner is %s\n",name);
                flag++;
            }
            else if(strcmp(input,"rock")==0){
                printf("The winner is computer\n");
                flag--;
            }
            break;

            case 2:printf("Computer selected scissors :)\n");

            if(strcmp(input,"scissors")==0){
                printf("Draw\n");
            }
            else if(strcmp(input,"rock")==0){
                printf("The winner is %s\n",name);
                flag++;
            }
            else if(strcmp(input,"paper")==0){
                printf("The winner is computer\n");
                flag--;
            }
            break;
        
        default:{
            printf("check spellings :)");
        }
            break;
    }
    i++;
}
    
    if(flag>0){
        printf("The winner of the tournament is %s",name);
    }
    else if(flag<0){
        printf("The winner of the tournament is COMPUTER");
    }
    else if(flag==0){
        printf("Its Draw between %s and COMPUTER",name);
    }

return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
 int secretNumber = 7;
 int guess;
 int guessCount=0;
 int guessLimit=3;
 int outOfGuesses=0;

 while(guess!=secretNumber&&outOfGuesses==0){
    if(guessCount < guessLimit){
        printf("Enter a number\n��J�A�n�q���Ʀr:");
        scanf("%d",&guess);
        guessCount++;
    }else{
        outOfGuesses =1;
    }

 }
    if(outOfGuesses == 1){
        printf("Out of Guesses\n.");
    }else{
    printf("You win!\n�AĹ�F!");
    }


 return 0;
}

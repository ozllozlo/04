#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
    int time;
    
    printf("Input seconds: ");
    scanf("%i", &time);
    
    printf("The time is %i : %i\n", time/60 , time%60 );

  
  system("PAUSE");
  return 0;
}

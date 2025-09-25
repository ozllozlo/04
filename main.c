#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
    int sec;
    
    printf("input seconds: ");
    scanf("%i", &sec);
    
    printf("The time is %i:%i:%i\n", sec/3600, //hour
                                     (sec%3600)/60,//minute
                                     sec%60//second
                                     );
    
  system("PAUSE");
  return 0;
}

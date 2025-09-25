#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
    int year;
    
    
    printf("Input year: ");
    scanf("%i", &year);
    
    int a = ( (year%4 == 0 && year%100 != 0) || (year%400 == 0) );
    
    printf("Is the year %i leap year? : %i\n", year, a );

  
  system("PAUSE");
  return 0;
}

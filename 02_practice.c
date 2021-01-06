#include <stdio.h>

int main()
{
    int fahrenheit, celsius;
    printf("Enter the Celsius : \n");
    scanf("%d", &celsius);


    fahrenheit  = ( celsius * 1.8 ) + 32;
    printf("%d celcius = %d fahrenheit",celsius,fahrenheit);
    return 0;
}
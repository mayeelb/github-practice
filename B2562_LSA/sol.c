//
#include <stdio.h>
int main(){
    int max = 0;
    int number[9];
    int order, i;
    
    for ( i = 0 ; i < 9 ; i++)
    {
        scanf("%d", &number[i]);
        
        if ( number[i] > max )
        {
            max = number[i];
            order = i + 1;
        }
    }
    printf("%d\n", max);
    printf("%d", order);
    
    return 0;
}

#include <stdio.h>
#include <math.h>


//30-ex
int main()
{
    int n,i;

    printf("enter massiv number: ");
    scanf("%d", &n);

    int a[n];
    for ( i=0; i<n; i++ ){
        printf("a[%d]: ",i);
        scanf("%d", &a[i]);
    }

    int counter=0;
    for ( i=0; i<n-1; i++ ){
        if ( a[i] > a[i+1] ){
            counter++;
            printf("needed index: %d\n",i);
        }
    }
    printf("number of needed elements: %d ", counter);


    return 0;
}
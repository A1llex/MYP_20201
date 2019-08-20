
#include <stdio.h>


int main()
{
    int a,c,primo;
    scanf("%d", &a );
    for (int  i = 0; i < a; i++) {
        primo =1;
        c=2;
        while ( c <= i / 2 && primo )
        {
            if ( i % c == 0 )
                primo = 0;

            c++;
        }

        if ( primo )
            printf( "%d ", i );
    }
}

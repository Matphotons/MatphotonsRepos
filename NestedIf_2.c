#include <stdio.h>

int main()
{

     int x;
     float y ;
     float z = 0.0;

        printf("\nEnter the value for x::\n");
        scanf("%d", &x);

        printf("\nEnter the value of y:\n");
        scanf("%f", &y);

        if( x==1 )
        {
            if(y >=500)
                 z = 0.12;
            else if(y >= 300 && y < 500)
                z = 0.08;
            else
                z = 0.02;
        }

        else if (x==2)
        {
            if( y>=2000 )
                z = 0.10;
            else if(y>=1500 && y < 2000)
                z = 0.05;    
        }

        else if ( x ==3 )
        {
            if(y >=5000 )
                z = 0.10;
            else if(y>=2500 && y < 5000)
                z = 0.05;
        }
        y  = y - y * z;

        printf("Net Order Amount is %.2f\n", y);
    
   return 0;
       
}
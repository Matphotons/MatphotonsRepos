#include <stdio.h>
#include <math.h>
int main()
{

    double hyp, opp, adj, a, b;
   
    printf("\n Enter the Opposite numbers: ", opp);
    scanf("%lf", &opp);
   
    printf("\n Enter the Adjacent number: ", adj);
    scanf("%lf", &adj);
   
    a = opp * opp;
    b = adj * adj;
    hyp = sqrt(a + b);

    printf("\n Hypotenus = %lf\n", hyp);

    return 0;



}
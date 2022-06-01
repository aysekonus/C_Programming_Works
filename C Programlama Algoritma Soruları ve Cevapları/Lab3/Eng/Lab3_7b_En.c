#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 0, prev_pi = 0, eps;
    int i, MAX_N = 100000;
    
    printf("epsilon: ");
    scanf("%lf", &eps);
    
    for(i=0; i<MAX_N ; i++)
    {               
        pi += 4*pow(-1,i) / (2*i+1);
        if(fabs(pi-prev_pi)<eps)
            break;
        prev_pi = pi;
    }    
     
    printf("pi is computed as %lf for %d terms.\n", pi, i);    

    return 0;
}

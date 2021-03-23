#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double factorial(double ans);

int main (){ //Main function from where the system is called
    char buffer[256];
    printf ("Ingrese un número: ");
    fgets (buffer, 256, stdin); //recieve number
    int factnum = atoi (buffer);
    double ans = (double) factnum;
    double start = clock();
    ans = factorial(ans); //call function
    double end = clock();
    printf("El factorial es de %lf \n",ans);
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Tiempo de duración %lf \n",cpu_time_used);
}

double factorial(double ans){
    //ans will be the answer
    if(ans == 1)
        return ans;
    return ans * factorial(ans - 1);
}
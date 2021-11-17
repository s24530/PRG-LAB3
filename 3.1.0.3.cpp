#include <iostream>
#include <time.h>

int asum (int a[], int n)
{
    srand(time(NULL));
    for(int i=0; i<=n; i++)
    {
      a[i]=(rand()%100);
    }
    int suma=0;
    for(int i=0; i<n; i++)
    {
        suma+=a[i];
    }
    
   
    return suma;
}

int main (int argc, char* argv[])
{
    int n = std::stoi(argv[1]);
    int a[100];
    asum(a,n);
    std::cout<<asum(a,n);
    std::cout<<std::endl;
    return 0;
}

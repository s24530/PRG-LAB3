#include <iostream>
#include <time.h>

int amax (int a[], int n)
{   
    int max=0;
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
      a[i]=(rand()%100);
    }
    
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }   
        else
        {
            continue;
        }
    }
    
   
    return max;
}

int main (int argc, char* argv[])
{
    int n = std::stoi(argv[1]);
    int a[100];
    amax(a,n);
    for(int i=0; i<n; i++)
    {
      std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<amax(a,n);
    std::cout<<std::endl;
    return 0;
}

#include <iostream>
#include <time.h>

int amin (int a[], int n)
{   
    int min=100;
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
      a[i]=(rand()%100);
    }
    
    for(int i=0; i<n; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }   
        else
        {
            continue;
        }
    }
    
   
    return min;
}

int main (int argc, char* argv[])
{
    int n = std::stoi(argv[1]);
    int a[100];
    amin(a,n);
    for(int i=0; i<n; i++)
    {
      std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<amin(a,n);
    std::cout<<std::endl;
    return 0;
}

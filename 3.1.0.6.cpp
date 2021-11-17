#include <iostream>
#include <time.h>

int search (int a[], int n, int needle)
{   
   
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
      a[i]=(rand()%100);
    }
    
    for(int i=0; i<n; i++)
    {
        if (a[i]==needle)
        {
            return i;
        }
       else
        {
            continue;
        }
    }
    
   
    return -1;
}

int main (int argc, char* argv[])
{
    int n = std::stoi(argv[1]);
    int needle = std::stoi(argv[2]);
    int a[100];
    search(a,n,needle);
    for(int i=0; i<n; i++)
    {
      std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<search(a,n,needle);
    std::cout<<std::endl;
    return 0;
}

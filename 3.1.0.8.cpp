#include <iostream>
#include <time.h>
void sort_desc(int a[], int n)
{
    int var;
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
      a[i]=(rand()%100);
    }
    for(int i=0; i<n; i++)
    {
      std::cout<<a[i]<<" ";
    }
    for (int i=n;i>=1;i--)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]<a[j+1])
            {
                var=a[j+1];
                a[j+1]=a[j];
                a[j]=var;
            }
        }
    }
    std::cout<<"\n";  
}

int main (int argc, char* argv[])
{
    int n = std::stoi(argv[1]);
    int a[100];
    
  
    sort_desc(a,n);
    for(int i=0; i<n; i++)
    {
      std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";
    
    
    
    return 0;
}

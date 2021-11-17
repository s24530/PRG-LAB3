#include <iostream>
#include <time.h>

void gen(int a[], int n)
{ 
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
      a[i]=(rand()%100);
      std::cout<<a[i]<<" ";  
    }
    std::cout<<"\n";
    
}
void quicksort_asc(int a[], int n,int l,int p)
{
    
    int v=a[(l+p)/2];
    int i,j,x;
    i=l;
    j=p;
    do
    {
        while(a[i]<v)i++;
        while(a[j]>v)j--;
        if(i<=j)
        { 
            x=a[i];
            a[i]=a[j];
            a[j]=x;
            i++;
            j--;
        }
    
    }while(i<=j);
    if(j>l) quicksort_asc(a,n,l,j);
    if(i<p) quicksort_asc(a,n,i,p);
    
  
   
}
void quicksort_desc(int a[], int n,int l,int p)
{
    
    int v=a[(l+p)/2];
    int i,j,x;
    i=l;
    j=p;
    do
    {
        while(a[i]>v)i++;
        while(a[j]<v)j--;
        if(i<=j)
        { 
            x=a[i];
            a[i]=a[j];
            a[j]=x;
            i++;
            j--;
        }
    
    }while(i<=j);
    if(j<l) quicksort_desc(a,n,l,j);
    if(i>p) quicksort_desc(a,n,i,p);
    
  
   
}

int main (int argc, char* argv[])
{
    int n = std::stoi(argv[1]);
    int a[100];
    int l=0;
    int p=n-1;
    gen(a,n);
    quicksort_asc(a,n,l,p);
    for(int i=0; i<n; i++)
    {
      std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";

    quicksort_desc(a,n,l,p);
    for(int i=0; i<n; i++)
    {
      std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";
    
    
    
    
    return 0;
}

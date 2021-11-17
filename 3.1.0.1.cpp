#include <iostream>
#include <vector>
void init (int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        a[i]=0;
    }
}

int main (int argc, char* argv[])
{
    int n = std::stoi(argv[1]);
    int a[100];
    init(a,n);
    for( int i = 0; i<n; i ++)
    {
        std::cout<<a[i];
    }
    std::cout<<std::endl;
    return 0;
}

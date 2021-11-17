#include <iostream>

void iota (int a[], int n, int start)
{
    for(int i=0; i<n; i++)
    {
        a[i]=start;
        ++start;
    }
}

int main (int argc, char* argv[])
{
    int n = std::stoi(argv[1]);
    int a[100];
    int start = std::stoi(argv[2]);
    iota(a,n,start);
    for( int i = 0; i<n; i ++)
    {
        std::cout<<a[i];
    }
    std::cout<<std::endl;
    return 0;
}

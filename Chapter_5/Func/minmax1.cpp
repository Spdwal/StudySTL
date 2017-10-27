#include<algorithm>
#include<cstdio>
using namespace std;

bool int_ptr_less(int *a, int *b)
{
    return *a < *b;
}

int main()
{
    int x = 17;
    int y = 42;
    int z = 33;
    int *px = &x;
    int *py = &y;
    int *pz = &z;
    int *pmax = std::max(px, py, int_ptr_less);
    printf("%p %p %p\n", px, py, pz);

    std::pair<int*, int *>extrems = std::minmax({px, py, pz} , int_ptr_less);
    printf("After find\n");
    

    printf("%p %p",extrems.first,extrems.second);
}

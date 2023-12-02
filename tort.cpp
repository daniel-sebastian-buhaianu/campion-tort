#include <fstream>
using namespace std;
int main()
{
    ifstream f("tort.in");
    int M, N;
    f >> M >> N;
    f.close();
    int dmax = 0;
    for (int i = 1; i*i <= M*N; i++)
    {
        if ((M*N)%(i*i) == 0)
            if (i > dmax)
                dmax = i;
    }
    ofstream g("tort.out");
    g << (M*N)/(dmax*dmax) << ' ' << dmax;
    g.close();
    return 0;
}

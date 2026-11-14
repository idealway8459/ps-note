#include <fstream>
using namespace std;

int main()
{
    ifstream fin("rosalind_iprb.txt");
    ofstream fout("result.txt");
    double k, m, n;
    fin >> k >> m >> n;
    double tt = k+m+n;
    double q = tt*(tt-1);
    fout << 1-(n*(n-1)/q+m*n/q+m*(m-1)/(q*4)) << "\n";

    return 0;
}

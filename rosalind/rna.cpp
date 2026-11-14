#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ifstream fin("rosalind_rna.txt");
    ofstream fout("result.txt");
    string t;
    fin >> t;
    replace(t.begin(), t.end(), 'T', 'U');
    fout << t << "\n";

    return 0;
}

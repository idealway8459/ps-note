#include <fstream>
using namespace std;

int main()
{
    ifstream fin("rosalind_hamm.txt");
    ofstream fout("result.txt");
    string s, t;
    fin >> s >> t;
    int ans = 0;
    for(int i=0; i<s.size(); i++)
        ans += s[i]!=t[i];
    fout << ans << "\n";

    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    const string syms{"ACGT"};
    for(const char sym : syms)
        cout << count(s.begin(), s.end(), sym) << " ";
    cout << "\n";
    
    return 0;
}

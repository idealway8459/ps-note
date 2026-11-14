#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<long long> DT(n);
    DT[0] = DT[1] = 1L;
    for(int i=2; i<n; i++)
        DT[i] = DT[i-1]+DT[i-2]*k;
    cout << DT[n-1] << "\n";

    return 0;
}

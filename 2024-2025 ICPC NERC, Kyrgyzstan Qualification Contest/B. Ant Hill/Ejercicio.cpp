#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, contador = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= 0)
        {
            contador += a[i];
        }
    }
    cout << contador << endl;
}

// pendiente
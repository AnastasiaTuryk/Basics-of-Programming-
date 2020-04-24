#include <iostream>
#include<string>
using namespace std;

int main() {
    int n, l, k, ii = 0;
    cin >> l;
    string s, s1 = "";
    cin >> s;
    cin >> n;
    string ss[100];
    if (l % n != 0)
    {
        k = (int)(l / n) + 1;
    }
    else
    {
        k = (int)(l / n);
    }
    for (int i = 0;i < l;i += k)
    {
        for (int j = i;j < i + k;j++)
        {
            s1 += s[j];
        }
        ss[ii] = s1;
        ii++;
        s1 = "";
    }
    for (int i = 0;i < n;i++)
        cout << ss[i] << " ";
    system("pause");
    return 0;
}
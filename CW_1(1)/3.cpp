#include <iostream>
using namespace std;

int main() {
    int n, d, dd;
    cout << "Type your n:"; cin >> n;
    int* mas = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> mas[i];
    }
        cout << "\nYour mas: ";

        for (int i = 0; i < n; ++i) {
            cout << mas[i] << " ";
        }

        cout << endl;
        d = mas[1] - mas[0];
        for (int i = 2; i < n; i++)
        {
            dd = mas[i] - mas[i - 1];
            if (dd != d)
            {
                cout << "Not progress" << endl;
                system("pause");

            }
        }
        cout << "Yes its progress" << endl;
        system("pause");
        return 0;
    }



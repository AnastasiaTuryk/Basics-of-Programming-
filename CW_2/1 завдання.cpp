#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

int* LongSequence(int arr[], int n) {
    int sequence = 0, tmp = 0, k = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] >= 0)
        {
            k++;
        }
        else
        {
            if (sequence < k)
            {
                sequence = k;
                tmp = i - k;
            }
            k = 0;
        }
    }

    if (sequence < k)
    {
        sequence = k;
        tmp = n - k;
    }
    k = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0)
        {
            k++;
        }
        else if (sequence < k)
        {
            sequence = k;
            tmp = i - k;
        }
        k = 0;
    }


    if (sequence < k)
    {
        sequence = k;
        tmp = n - k;
    }

    int* sequence1 = new int[sequence];

    cout << "The longest sequence is: ";
    for (int i = 0; i < sequence; i++)
    {
        sequence1[i] = arr[k + i];
        cout << arr[k + i] << ", ";
    }

    return sequence1;
}

int main()
{
    int n;
    cout << "input your n: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0;i < n;i++)
    {
        cout << "[" << i + 1 << "]" << ":";
        cin >> arr[i];
    }


    cout << "your massive:" << endl;
    for (int i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    int* newAraray = LongSequence(arr, n);


    delete[] arr;
}

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void name(string* a, int& k, string test)
{
    ifstream fout;
    fout.open(test);
    string line;
    bool repeat = false, take = false;
    if (fout.is_open())
    {
        while (getline(fout, line))
        {
            for (int i = 0; i < k; i++)
            {
                if (line == a[i])
                {
                    a[i] = "";
                    repeat = true;
                }
            }
            if (!repeat)
            {
                for (int i = 0; i < k; i++)
                {
                    if (a[i] == "")
                    {

                        a[i] = line;
                        take = true;

                    }

                }

            }

            if (!repeat && !take)
            {
                a[k++] = line;

            }

        }

    }

}




int main() {

    string* a = new string[20];

    string line;

    ifstream out;

    out.open("in1.txt");

    int k = 0;

    if (out.is_open()) {

        while (getline(out, line)) {

            a[k++] = line;

        }

    }

    out.close();

    string b[2] = { "in2.txt","in3.txt" };

    name(a, k, b[0]);

    name(a, k, b[1]);

    ofstream in;

    in.open("out.txt");

    for (int i = 0; i < k; i++) {

        if (a[i] != "") {
            in << a[i] << "\n";
        }
    }
    delete[] a;
}
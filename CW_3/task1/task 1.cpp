#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct Book
{
    char NameBook[100];
    char Name[100];
    int year;
    int genre;
};

void sorted(Book b[10], int len) {
    ofstream file;
    file.open("out.txt", ios_base::app);

    for (int i = 0; i < len; ++i) {
        for (int j = i; j < len; ++j) {
            if (b[i].year == b[j].year && b[i].genre > b[j].genre) {
                Book temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
            else if (b[i].year > b[j].year) {
                Book temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++) {
        file << b[i].NameBook << "," << b[i].Name << "," << b[i].year << ", " << b[i].genre << endl;

    }
    file.close();
}



int main()
{
    Book b[10];
    ifstream fin("in.txt");
    int size = 0;
    char s[100];
    if (fin.is_open())
    {
        while (!fin.eof())
        {
            fin >> b[size].NameBook;
            fin >> b[size].Name;
            fin >> b[size].year;
            fin >> b[size].genre;
            size++;
        }
    }
    fin.close();

    int max = b[0].year;
    int ind = 0;
    for (int i = 1; i < size; i++) 
    {
        if (b[i].year < max)
        {
            max = b[i].year;
            ind = i;
        }
    }

    cout << "Older : \n";
    cout << b[ind].NameBook << ", " << b[ind].Name << ", " << b[ind].year << ", " << b[ind].genre << endl;
    cout << "UnSorted: \n";
    for (int i = 0; i < size; i++) 
    {
        cout << b[i].NameBook << ", " << b[i].Name << ", " << b[i].year << ", " << b[i].genre << endl;

    }
    sorted(b, size);//ñîðòóâàííÿ êíèæîê çà íàçâîþ  ³ æàíðîì
    system("pause");
    return 0;

}

       


 
            

           

 

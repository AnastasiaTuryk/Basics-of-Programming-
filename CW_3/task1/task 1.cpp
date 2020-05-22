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
            if (b[i].year== b[j].year && b[i].genre > b[j].genre) {
                Book temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
            else if (b[i].year> b[j].year) {
                Book temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++) {
        file << b[i].NameBook << "," << b[i].Name<< "," << b[i].year << ", " << b[i].genre << endl;

    }
    file.close();
}



int main()
{
    Book b[10];
    ifstream fin("in.txt");
    int size = 0;
    char s[100];
    

    try {
        if (!fin)
        {
            cout << "your file is not open!";
        }

        while (fin.getline(s, 100))
        {
            char* ch;
            ch = strtok(s, " ");
            int j = 1;
            while (ch != NULL)
            {
                switch (j)
                {
                case 1:
                    strcpy_s(b[size].NameBook, ch);
                    j++;
                    break;
                case 2:
                    strcpy_s(b[size].Name, ch);
                    j++;
                    break;
                case 3:
                    b[size].year = atoi(ch);
                    j++;
                    break;
                case 4:
                    b[size].genre = atoi(ch);
                    j = 1;
                    break;
                default:
                    break;
                }
                ch = strtok(NULL, " ");
            }

            size++;

        }


        int min = b[0].year;
        int ind = 0;
        for (int i = 1; i < size; i++) {
            if (b[i].year < min)
            {
                min = b[i].year;
                ind = i;
            }
        }


        cout << "Older : \n";
        cout << b[ind].NameBook << ", " << b[ind].Name << ", " << b[ind].year << ", " << b[ind].genre << endl;
        cout << "UnSorted: \n";
        for (int i = 0; i < size; i++) {
            cout << b[i].NameBook << ", " << b[i].Name<< ", " << b[i]. year<< ", " << b[i].genre<< endl;

        }
        sorted(b, size);//сортування книжок за назвою  і жанром
    }

    catch (const char* exception)
    {
        std::cerr << "Error: " << exception << '\n';
    }


    system("pause");
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
#include<fstream>

using namespace std;

int main()
{
    
    int i, k, a = 0, dl = 0;
    string path= "myfile.txt";
    ofstream fout;
    fout.open(path, ofstream::app);
    
    ifstream fin;
    fin.open(path);
    if (!fin.is_open())
    {
        cout << "oshibka otkrytia faila" << endl;
    }
    else
    {
        cout << "fail otkryt" << endl;
        string ch;
        while (!fin.eof())
        {
            fin >> ch;

            cout << ch << endl;

        }
    }

    fin.close();
    string str;
    cout << "vvedite text";
    getline(cin, str);
    dl = str.length();
    for (i = dl; i >= 0; i--) {
        if (str[i] == ' ') {
            for (k = i + 1; k <= (i + a); k++) {
                cout << str[k];
            }
            a = 0;
            cout << " ";
        }

        a++;
    }

    for (int i = 0; i < dl; i++)
    {
        if (str[i] == ' ') break;
        cout << str[i];
    }
    return 0;
}
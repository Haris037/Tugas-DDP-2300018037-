#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x;
    string c = "ulang";

    cout << "            Harits Abdul Malik" << endl;
    cout << "              NIM 2300018037" << endl;
    cout << "                  Kelas A" << endl;
    cout << "=============================================" << endl;

    while (c == "ulang")
    {
        cout << "Masukkan Jumlah Kotak: ";
        cin >> x;

        while (x < 0)
        {
            cout << "Tidak Valid!" << endl;
            cout << "Masukkan Jumlah Kotak : ";
            cin >> x;
        }

        for (int i = 0; i <= (x * x); i++)
        {
            for (int j = 0; j <= (x * x); j++)
            {
                if (i == 0 || (i % x == 0) || (j == 0) || (j % x == 0))
                {
                    cout << setw(2) << "+";
                }
                else
                {
                    cout << setw(2) << " ";
                }
            }
            cout << endl;
        }

        cout << "Apakah anda ingin mengulang? ketik ulang : ";
        cin >> c;
    }
}


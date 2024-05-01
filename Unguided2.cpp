#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isVowel(char huruf) 
{
    huruf = tolower(huruf); 
    return (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o');
}

int countVowels(const string& kalimat) 
{
    int count = 0;
    for (char huruf : kalimat) 
    {
        if (isVowel(huruf)) 
        {
            count++;
        }
    }
    return count;
}

int main() 
{
    string kalimat;

    cout << "Masukkan kalimat anda : ";
    getline(cin, kalimat);

    int banyakvokal = countVowels(kalimat);

    cout << "Banyak huruf vokal dalam kalimat : " << banyakvokal << endl;

    return 0;
}


// Mikhael Setia Budi
// 2311110033
// copyright@MikhaelS.B
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int binary_search(const string& kalimat, char huruf) 
{
    int left = 0;
    int right = kalimat.length() - 1;
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (kalimat[mid] == huruf) 
        {
            return mid;
        } 
        else if (kalimat[mid] < huruf) 
        {
            left = mid + 1;
        } 
        else 
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main() 
{
    string kalimat;
    char huruf;

    cout << "\t Binary Search\n" << endl;

    cout << "Masukkan kalimat anda : ";
    getline(cin, kalimat);

    cout << "Masukkan huruf yang ingin dicari : ";
    cin >> huruf;

    // Ubah kalimat dan huruf menjadi huruf kecil
    transform(kalimat.begin(), kalimat.end(), kalimat.begin(), ::tolower);
    huruf = tolower(huruf);

    int result_index = binary_search(kalimat, huruf);
    if (result_index != -1)
        cout << "Huruf '" << huruf << "' berada pada indeks ke-" << result_index << "." << endl;
    else
        cout << "Huruf '" << huruf << "' tidak terdapat dalam kalimat." << endl;

    return 0;
}


// Mikhael Setia Budi
// 2311110033
// copyright@MikhaelS.B
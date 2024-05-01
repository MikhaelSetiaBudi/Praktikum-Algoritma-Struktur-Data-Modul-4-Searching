#include <iostream>
#include <vector>

using namespace std;

int sequentialSearch(const vector<int>& data, int angka) 
{
    int count = 0;
    for (int num : data) 
    {
        if (num == angka) 
        {
            count++;
        }
    }
    return count;
}

int main() 
{
    vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};

    cout << "\t Sequential Search\n" << endl;

    int angka = 4;

    int count = sequentialSearch(data, angka);

    cout << "Angka 4 dalam data sebanyak " << count << " buah" << endl;

    return 0;
}


// Mikhael Setia Budi
// 2311110033
// copyright@MikhaelS.B
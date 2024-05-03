# <h1 align="center">Laporan Praktikum Modul Searching</h1>
<p align="center">Mikhael Setia Budi</p>

## Dasar Teori

Searching merupakan proses menemukan suatu nilai tertentu pada kumpulan data. terdapat tiga keadaan pada hasil pencaharian yaitu data ditemukan, data ditemukan lebih dari satu, atau data tudak ditemukan.
terdapat 2 metode pada algoritma swarching, yaitu:

### a. Sequential Search

Sequential Search merupakan salah satu algoritma pencarian data yang biasa digunakan untuk data yang berpola acak atau belum terurut.
Sequential search juga merupakan teknik pencarian data dari array yang paling mudah, dimana data dalam array dibaca satu demi satu dan 
diurutkan dari index terkecil ke index terbesar, maupun sebaliknya. Konsep Sequential Search yaitu:

1. Membandingkan elemen array satu demi satu secara berurut
2. Pencarian dimulai dari indeks pertama hingga terakhir
3. Pencarian akan berhenti jika data ditemukan. jika data tidak ditemukan hingga akhir, maka pencarian tetap berhenti
4. Perulangan pada pencarian akan terjadi sebanyak jumlah N elemen pada array

### b. Binary Search

Binary Search termasuk dalam interval search, dimana algoritma ini merupakan algoritma pencarian pada array/list dengan elemen terurut. 
jadi data harus diurutkan terlebih dahulu dengan membagi menjadi dua bagian untuk setiap tahap pencarian.
konsep binary search:

1. Data diambil dari posisi 1 sampai posisi akhir N
2. Data akan dibagi menjadi dua untuk mendapatkan posisi data tengah
3. Data yang dicari akan dibandingkan dengan data yang berada di posisi tengah, apakah lebih besar atau lebih kecil
4. Jika data yang dicari lebih besar dari data tengah, maka dapat dipastikan bahwa data yang dicari kemungkinan berada di sebelah 
kanan dari data tengah. Proses pencarian selanjutnya akan dilakukan pembagian data menjadi dua bagian pada bagian kanan 
dengan acuan posisi data tengah akan menjadi posisi awal untuk pembagian tersebut.
5. Jika data yang dicari lebih kecil dari data tengah, maka dapat dipastikan bahwa data yang dicari kemungkinan berada di sebelah 
kiri dari data tengah. Proses pencarian selanjutnya akan dilakukan pembagian data menjadi dua bagian pada bagian kiri. Dengan acuan 
posisi data tengah akan menjadi posisi akhir untuk pembagian selanjutnya.
6. Jika data belum ditemukan, maka pencarian akan dilanjutkan dengan kembali membagi data menjadi dua
7. Tetapi jika data bernilai sama, maka data yang dicari langsung ditemukan dan pencarian dihentikan

## Guided 

### 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.

```C++
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;
    // algoritma Sequential Search
    for (i = 0; i < n; i++){
        if(data[i] == cari){
            ketemu = true;
            break;
        }
    }
        cout << "\t Program Sequential Search Sederhana\n" << endl;
        cout << " data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}"<< endl;
    if (ketemu)
    {
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl;
    } else 
        {
            cout << cari << " tidak dapat ditemukan pada data." << endl;
        }
    return 0;
}
```

**Code 1**
```C++
#include <iostream>
using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. 
using namespace std digunakan untuk menggunakan namespace std.

**Code 2**
```C++
int main()
{
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;
```
fungsi main() merupakan fungsi utama dalam program. Code diatas mendeklarasikan variabel, dimana variabel n digunakan untuk menyimpan jumlah elemen array datayang menyimpan kumpulan bilangan bulat. 
variabel cari digunakan untuk menyimpan angka yang ingin dicari dalam array.
variabel ketemu digunakan untuk menandai apakah angka yang dicari ditemukan atau tidak. lalu variabel i digunakan sebagai indeks dalam proses perulangan.

**Code 3**
```C++
for (i = 0; i < n; i++){
        if(data[i] == cari){
            ketemu = true;
            break;
        }
    }
```
Code diatas digunakan dengan algoritma sequential search. Program melakukan perulangan melalui setiap elemen dalam array data. 
jika elemen yang dieksekusi sama dengan nilai yang dicari, 
maka variabel ketemu menjadi true dan proses dihentikan menggunakan break.

**Code 4**
```C++
        cout << "\t Program Sequential Search Sederhana\n" << endl;
        cout << " data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}"<< endl;
```
Code diatas digunakan untuk mencetak judul program yaitu Srogram Sequential Search Sederhana.
\t digunakan untuk tab, dan \n untuk newline. Code diatas juga mencetak data.

**Code 5**
```C++
    if (ketemu)
    {
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl;
    } else 
        {
            cout << cari << " tidak dapat ditemukan pada data." << endl;
        }
    return 0;
}
```
Jika nilai yang dicari (cari) ditemukan (ketemu == true) maka program akan mencetak indeks dimana nilai ditemukan.
jika nilai yang dicari tidak ditemukan maka program akan mencetak pesan bahwa nilai yang dicari tidak ditemukan dalam data.

#### Output
```C++
         Program Sequential Search Sederhana

 data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}

 angka 10 ditemukan pada indeks ke-9
```
output diatas menampilkan judul program, lalu data, dan menampilkan angka yang dicari beserta indeksnya dengan sequential search dimana data dibaca satu persatu.

#### Full Code Screenshoot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-4-Searching/blob/master/Modul%204%20Alstrukdat/code%20Guided%201%20Searching.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-4-Searching/blob/master/Output%20Modul%204%20Alstrukdat/Output%20Guided%201%20Searching.png?raw=true)

### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search

```C++
#include <iostream>
#include <iomanip>

using namespace std;

int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(bil_data[j] < bil_data[min]) {
                min = j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}

void binary_search() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(bil_data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(bil_data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}

int main() {
    cout << "\t BINARY SEARCH\n";
    cout << "\n Data : ";
    // tampilkan data awal
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan data dengan selection sort
    selection_sort();
    // tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    binary_search();
    return 0;
}
```

**Code 1**
```C++
#include <iostream>
#include <iomanip>

using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. 
using namespace std digunakan untuk menggunakan namespace std.
iomanip digunakan untuk manipulasi output seperti set lebar kolom

**Code 2**
```C++
int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;
```
mendeklarasikan variabel bil_data yang menyimpan array berukuran 7 bilangan bulat.
variabel cari digunakan untuk menyimpan nilai yang ingin dicari pada array.

**Code 3**
```C++
void selection_sort() {
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(bil_data[j] < bil_data[min]) {
                min = j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}
```
kode diatas digunakan untuk mengurutkan array bil_data dari nilai terkecil ke terbesar menggunakan algoritma selection sort.
setiap perulangan luar, nilai terkecil dicari dari bagian array yang belum diurutkan, dan jika ditemukan nilai yang lebih kecil maka posisi minimum diperbarui.
setelah perulangan selesai, elemen terkecil ditukar dengan elemen pertama dalam bagian yang belum diurutkan.

**Code 4**
```C++
void binary_search() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(bil_data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(bil_data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}
```
kode diatas digunakan untuk mencari nilai (cari) dalam array bil_data yang telah diurutkan dengan menggunakan binary search.
variabel awal, akhir, dan tengah digunakan untuk menentukan rentang pencarian.
jika awal kurang dari atau sama dengan akhir maka pencarian dilakukan dengan membagi rentang menjadi dua bagian, lalu menentukan apakah nilai yang dicari berada di bagian kiri atau kanan rentang.
jika nilai ditemukan, variabel b_flag menjadi 1, dan pencarian berhenti. hasil pencarian, atau nilai tidak ditemukan ditampilkan ke pengguna.

**Code 5**
```C++
int main() {
    cout << "\t BINARY SEARCH\n";
    cout << "\n Data : ";
    // tampilkan data awal
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan data dengan selection sort
    selection_sort();
    // tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    binary_search();
    return 0;
}
```
fungsi main() menrupakan program utama. program akan menampilkan judul program, data sebelum diurutkan, meminta pengguna menginput data yang ingin dicari, menampilkan data setelah diurutkan,
melakukan pencarian dengan menggunakan binary search, dan menampilkan hasil pencarian. program diakhiri dengan nilai kembalian 0.

#### Output
```C++
         BINARY SEARCH

 Data :   1  8  2  5  4  9  7

 Masukkan data yang ingin Anda cari : 8

 Data diurutkan :   1  2  4  5  7  8  9

 Data ditemukan pada index ke-5
```
Menampilkan judul program searching yang digunakan. 
lalu menampilkan data sebelum diurutkan, pengguna memasukkan angka yang ingin dicari, menampilkan data setelah diurutkan dengan menggunakan selection sort, dan menampilkan indeks dari angka yang dicari.

#### Full Code Screenshoot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-4-Searching/blob/master/Modul%204%20Alstrukdat/code%20Guided%202%20Searching.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-4-Searching/blob/master/Output%20Modul%204%20Alstrukdat/Output%20Guided%202%20Searching.png?raw=true)

## Unguided 

### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

```C++
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
```

**Code 1**
```C++
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. string digunakan untuk memasukkan library standar untuk manipulasi string. algorithm digunakan untuk memasukkan library standar untuk melakukan transformasi data dan operasi pada range. using namespace std digunakan untuk menggunakan namespace std. 

**Code 2**
```C++
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
```
binary_search merupakan fungsi binary search yang melakukan pencarian biner dalam string kalimat unruk karakter huruf. masukan parameter masukan berupa string pada variabel kalimat. huruf merupakan variabel untuk parameter masukan berupa karakter yang ingin dicari dalam string. left dan right merupakan variabel untuk menyimpan indeks kiri dan kanan dari rentang pencarian. pencarian akan dilakukan dengan membagi rentang pencarian menjadi dua bagian dan memeriksa apakah karakter yang dicari berada di tengah. fungsi mengembalikan indeks karakter ketika ditemukan, -1 jika karakter tidak ditemukan.

**Code 3**
```C++
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
```
fungsi main digunakan sebagai entry point dari program. pengguna akan diminta untuk memasukkan sebuah kalimat dan sebuah huruf yang ingin dicari. kalimat dan huruf tersebut akan diubah menjadi huruf kecil menggunakan fungsi 'tolower'. menggunakan fungsi binary_search untuk mencari posisi huruf falam kalimat. hasil pencarian ditampilkan ke layar.

#### Output:
```C++
         Binary Search

Masukkan kalimat anda : Mikhael
Masukkan huruf yang ingin dicari : h
Huruf 'h' berada pada indeks ke-3.
```
menampilkan judul pencarian lalu meminta pengguna untuk memasukkan kalimat. pengguna memasukkan angka yang ingin dicari dalam kalimat yang sudah diinputkan. lalu akan menampilkan huruf berserta lokasi indkesnya.

#### Full code Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-4-Searching/blob/master/Modul%204%20Alstrukdat/code%20Unguided%201%20Searching.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-4-Searching/blob/master/Output%20Modul%204%20Alstrukdat/Output%20Unguided%201%20Searching.png?raw=true)

### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!

```C++
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
```

**Code 1**
```C++
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. string digunakan untuk memasukkan library standar untuk manipulasi string. algorithm digunakan untuk memasukkan library standar untuk melakukan transformasi data dan operasi pada range. using namespace std digunakan untuk menggunakan namespace std. 

**Code 2**
```C++
bool isVowel(char huruf) 
{
    huruf = tolower(huruf); 
    return (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o');
}
```
isVowel merupakan fungi yang menerima sebuah karakter dan memeriksa apakah karakter tersebut adalah huruf vokal. tolower digunakan unruk mengubah huruf menjadi huruf kecil. fungsi akan mengembalikan true jika huruf adalah huruf vokal, dan false jika bukan huruf vokal.

**Code 3**
```C++
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
```
coutVowels merupakan fungsi yang digunakan untuk menghitung jumlah huruf vokal dalam string kalimat. perulangan for setiap karakter dari kalimat diambil satu per satu. setiap karakter akan diperiksa apakah merupakan huruf vokal menggunakan fungsi isvowel. jika karakter tersebut huruf vokal maka count jumlah vokal akan ditambah 1.

**Code 4**
```C++
int main() 
{
    string kalimat;

    cout << "Masukkan kalimat anda : ";
    getline(cin, kalimat);

    int banyakvokal = countVowels(kalimat);

    cout << "Banyak huruf vokal dalam kalimat : " << banyakvokal << endl;

    return 0;
}
```
main digunakan sebagai program utama yang akan dijalankanl. pengguna akan diminta untuk memasukkan sebuah kalimat. fungsi coutVowels dipanggil untuk menghitung jumlah huruf vokal dalam kalimat. hasil perhiungan ditampilkan pada layar.

#### Output:
```C++
Masukkan kalimat anda : Institut Teknologi Telkom Purwokerto
Banyak huruf vokal dalam kalimat : 13
```
pengguna memasukkan kalimat. lalu akan muncul banyaknya huruf vokal dalam kalimat yang diinputkan.

#### Full code Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-4-Searching/blob/master/Modul%204%20Alstrukdat/code%20Unguided%202%20Searching.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-4-Searching/blob/master/Output%20Modul%204%20Alstrukdat/Output%20Unguided%202%20Searching.png?raw=true)

### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

```C++
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
```

**Code 1**
```C++
#include <iostream>
#include <vector>

using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. algoritma untuk fungsi pengurutan, dan vector untuk menggunakan struktur data vektor. using namespace std digunakan untuk menggunakan namespace std.

**Code 2**
```C++
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
```
fungsi main merupakan fungsi utama yang akan dieksekusi saat program dijalankan. lalu mendeklarasikan variabel n yang digunakan untuk menyimpan jumlah karakter yang akan dimasukkan pengguna dengan tipe data integer. membuat vektor bernama characters dengan panjang n dibuat untuk menyimpan karakter yang akan dimasukkan oleh pengguna. program akan diminta untuk memasukkan karakter sejumlah n dan disimpan dalam vektor characters.

**Code 3**
```C++
int main() 
{
    vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};

    cout << "\t Sequential Search\n" << endl;

    int angka = 4;

    int count = sequentialSearch(data, angka);

    cout << "Angka 4 dalam data sebanyak " << count << " buah" << endl;

    return 0;
}
```
Program akan mencetak pesan Urutan karakter sebelum sorting dengan menggunakan cout dan endl untuk newline sehingga karakter yang belum diurutkan akan muncul dibawahnya. lalu program akan mencetak karakter yang belum diurutkan.

#### Output:
```C++
 Sequential Search

Angka 4 dalam data sebanyak 4 buah
```
menampilkan pesan dimana pengguna dapat memasukkan panjang array, setelah itu masukkan karakter secara acak. lalu akan muncul pesan Urutan karakter sebelum sorting dan karakter yang belum diurutkan. setelah diurutkan secara ascending maka akan muncul pesan Urutan karakter setelah ascending sort dan karakter yang telah diurutkan secara ascending (menaik). diurutkan secara descending lalu akan memunculkan pesan Urutan karakter setelah descending sort dan karakter yang telah diurutkan secara descending (menurun)

#### Full code Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-4-Searching/blob/master/Modul%204%20Alstrukdat/code%20Unguided%203%20Searching.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-4-Searching/blob/master/Output%20Modul%204%20Alstrukdat/Output%20Unguided%203%20Searching.png?raw=true)

## Kesimpulan
dalam sorting terdapat 3 cara pengurutan yaitu insertion sort, bubble sort, dan selection sort dimana masing masing memiliki kelebihan dan kekurangan. dengan sorting ini ketika memasukkan elemen atau karakter yang tidak urut menjadi menjadi mudah diurutkan. tentu ini sangat penting dalam menganalisis data karena tidak perlu mengurutkannya dalam coding karena bisa menggunakan fungsi sorting.

## Referensi
[1]	Y. A. Sandria, M. R. A. Nurhayoto, L. Ramadhani, and R. S. Harefa, “Penerapan Algoritma Selection Sort untuk Melakukan Pengurutan Data dalam Bahasa Pemrograman PHP,” 2022.

[2]	* Saputri, D. Pemograman, B. Seleksi, and P. Saputri, “Analisis Study Komperatif Bubble Sort Dan Selection Sort Pada Algoritma,” Bhs. dan Mat., vol. 1, no. 6, pp. 151–161, 2023, [Online]. Available: https://doi.org/10.61132/arjuna.v1i6.305

[3]	L. Lasriana and A. Gunaryati, “Sistem Informasi Apotek Berbasis Web Menggunakan Algoritma Sequential Search Dan Selection Sort,” JIPI (Jurnal Ilm. Penelit. dan Pembelajaran Inform., vol. 7, no. 2, pp. 392–401, 2022, doi: 10.29100/jipi.v7i2.2709.


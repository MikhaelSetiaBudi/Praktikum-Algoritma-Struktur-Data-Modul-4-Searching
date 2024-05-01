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
lalu menampilkan data sebelum diurutkan, pengguna memasukkan angka yang ingin dicari, menampilkan data setelah diurutkan dengan menggunakan selection sort, dan menampilkan indeks dari data yang dicari.

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
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. using namespace std digunakan untuk menggunakan namespace std.

**Code 2**
```C++
void selectSort(float arr[], int length) 
{
    int pos_max;
    float temp;
    for (int i = 0; i < length - 1; i++) 
    {
        pos_max = i;
        for (int j = i + 1; j < length; j++) 
        {
            if (arr[j] > arr[pos_max])
                pos_max = j;
        }
        if (pos_max != i) 
        {
            temp = arr[i];
            arr[i] = arr[pos_max];
            arr[pos_max] = temp;
        }
    }
}
```
fungsi diatan digunakan untuk mengimplementasikan algoritma selection sort untuk mengurutkan array arr[] yang memiliki panjang array lenght. algoritma selection sort bekerja dengan cara mencari nilai minimal atau maksimal pada sekumpulan nilai kemudia meletakannya pada posisi ujung sekumpulan nilai tersebut. variabel pos_max digunakan untuk menyimpan indeks elemen dengan nilai terbesar pada setiap pengulangan. for digunakan untuk mencari elemen dengan nilai terbesar di antara elemen yang belum terurut. if membuat kondisi dengan membandingkan nilai elemen arr[j] dengan nilai terbesar yang terlah ditemukan arr[pos_max]. if (pos_max != i) digunakan untuk mengecek apakah elemen terbesar tersebut berada pada posisi yang benar atau tidak. proses ini terus berulang hingga semua elemen telah terurut, if (arr[j] > arr[pos_max]).

**Code 3**
```C++
void print_array(float array[], int length)
{
    for (int i = 0; i < length; i++) 
    {
        cout << array[i] << "\t";
    }
    cout << endl;
}
```
mendeklarasikan fungsi print_array yang menerima dua parameter yaitu array[] dan lenght. for (int i = 0; i < length; i++) adalah sebuah perulangan for yang akan melakukan perulangan melalui setiap elemen dalam array[]. cout digunakan untuk mencetak setiap elemen array, dengan dipisahkan oleh tanda tab.

**Code 4**
```C++
int main()
{
    int length = 5;
    float array[] = {3.8, 2.9, 3.3, 4.0, 2.4};

    cout << "Urutan IPS Mahasiswa sebelum diurutkan : " << endl;
    print_array(array, length);

    selectSort(array, length);

    cout << "\nUrutan IPS Mahasiswa setelah diurutkan dari yang terbesar hingga terkecil : " << endl;
    print_array(array, length);

    return 0;
}
```
fungsi main adalah tempat dimulai eksekusi program. variabel lenght menunjukan panjang array dengan tipe data integer. float array[] diisi dengan nilai awal yang belum diurutkan. pesan "Urutan IPS mahasiswa sebelum diurutkan: " dicetak dengan menggunakan cout dan endl adalah untuk newline outputnya. memanggil fungsi selectSort untuk mengurutkan array dengan pengurutan selection sort. lalu mencetak pesan "Urutan IPS mahasiswa sesudah diurutkan: " dengan menggunakan cout dan endl digunakan untuk newline.

#### Output:
```C++
         Binary Search

Masukkan kalimat anda : Mikhael
Masukkan huruf yang ingin dicari : h
Huruf 'h' berada pada indeks ke-3.
```
menapilkan pesan "Urutan IPS Mahasiswa sebelum diurutkan: " dengan output array yang masih belum diurutkan. setelah memanggil fungsi selection sort lalu menampilkan Urutan IPS Mahasiswa setelah diurutkan dari yang terbesar hingga terkecil.

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

using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. using namespace std digunakan untuk menggunakan namespace std. mengimpor pustaka string untuk dapat menggunakan fungsi string.

**Code 2**
```C++
void swap(string &a, string &b) 
{
    string temp = a;
    a = b;
    b = temp;
}
```
fungsi swap digunakan untuk menukar nilai 2 string. didefinisikan dengan menggunakan referensi '&' sebagai parameter. ketika fungsi dipanggil, nilai variabel a akan disimpan dalam variabel temp, kemudian nilai b disalin ke a, dan nilai temp (nilai asli dari a) disalin ke b. maka nilai a dan b akan ditukar.

**Code 3**
```C++
void bubbleSort(string array[], int n) 
{
    for (int i = 0; i < n-1; i++) 
    {
        for (int j = 0; j < n-i-1; j++) 
        {
            if (array[j] > array[j+1]) 
            {
                swap(array[j], array[j+1]);
            }
        }
    }
}
```
fungsi bubbleSort yang digunakan untuk algoritma bubble sorting untuk mengurutkan array string. terdapat dua pengulangan, pengulangan pertama digunakan untuk mengontrol jumlah perulangan keseluruhan, sementara perulangan kedua digunakan untuk melakukan perbandingan dan pertukaran elemen. setiap perulangan jika nilai string pada indeks j lebih besar dari nilai indeks j+1 maka dilakukan pertukaran dengan menggunakan swap.

**Code 4**
```C++
int main() 
{
    string nama[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = sizeof(nama)/sizeof(nama[0]);

    cout << "Nama 10 warga sebelum diurutkan: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << nama[i] << endl;
    }

    bubbleSort(nama, n);

    cout << "Nama 10 warga setelah diurutkan:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << nama[i] << endl;
    }

    return 0;
}
```
fungsi main adalah tempat dimulai eksekusi program. array nama[] diisi dengan nama warga yang belum diurutkan. panjang array dihitung dengan menggunakan sizeof(nama)/sizeof(nama[0]), sehingga program dapat berjalan dengan baik walapun ukuran array diubah. pesan "Nama 10 warga sebelum diurutkan: " dicetak dengan menggunakan cout dan endl adalah untuk newline outputnya. memanggil fungsi bubbleSort untuk mengurutkan array dengan pengurutan bubble sorting. lalu mencetak pesan "Nama 10 warga setelah diurutkan: " dengan menggunakan cout dan endl digunakan untuk newline.

#### Output:
```C++
Masukkan kalimat anda : Institut Teknologi Telkom Purwokerto
Banyak huruf vokal dalam kalimat : 13
```


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
#include <algorithm>
#include <vector>

using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. algoritma untuk fungsi pengurutan, dan vector untuk menggunakan struktur data vektor. using namespace std digunakan untuk menggunakan namespace std.

**Code 2**
```C++
int main() 
{
    int n;
    cout << "Masukkan banyaknya karakter: ";
    cin >> n;

    vector<char> characters(n);

    cout << "Masukkan karakter:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cout << "Karakter ke-" << i + 1 << ": ";
        cin >> characters[i];
    }
```
fungsi main merupakan fungsi utama yang akan dieksekusi saat program dijalankan. lalu mendeklarasikan variabel n yang digunakan untuk menyimpan jumlah karakter yang akan dimasukkan pengguna dengan tipe data integer. membuat vektor bernama characters dengan panjang n dibuat untuk menyimpan karakter yang akan dimasukkan oleh pengguna. program akan diminta untuk memasukkan karakter sejumlah n dan disimpan dalam vektor characters.

**Code 3**
```C++
 cout << "Urutan karakter sebelum sorting: " << endl;
     for (char character : characters) 
    {
        cout << character << " ";
    }
    cout << endl;
```
Program akan mencetak pesan Urutan karakter sebelum sorting dengan menggunakan cout dan endl untuk newline sehingga karakter yang belum diurutkan akan muncul dibawahnya. lalu program akan mencetak karakter yang belum diurutkan.

**Code 4**
```C++
sort(characters.begin(), characters.end());
```
fungsi sort digunakan untuk mengurutkan karakter dalam vektor characters secara ascending (menaik)

**Code 5**
```C++
cout << "Urutan karakter setelah ascending sort: " << endl;
    for (char character : characters) 
    {
        cout << character << " ";
    }
    cout << endl;
```
program akan mencetak urutan karakter yang sudah diurutkan secara ascending atau menaik dan mencetak pesan Urutan karakter setelah ascending sort dengan menggunakan cout, endl untuk newline sehingga karakter yang sudah diurutkan akan muncul dibawahnya.

**Code 6**
```C++
sort(characters.rbegin(), characters.rend());
```
fungsi sort digunakan kembali untuk mengurutkan karakter dalam vektor characters secara descending atau menurun.

**Code 7**
```C++
 cout << "Urutan karakter setelah descending sort: " << endl;
    for (char character : characters) 
    {
        cout << character << " ";
    }
    cout << endl;

    return 0;
}
```
setelah diurutkan secara descending, program mencetak karakter yang telah diurutkan dan mencetak pesan Urutan karakter setelah descending sort dengan menggunakan cout. endl untuk newline sehingga karakter yang sudah diurutkan akan muncul dibawahnya. return 0 untuk menandakan bahwa program telah berakhir. 

#### Output:
```C++
Masukkan banyaknya karakter: 5
Masukkan karakter:
Karakter ke-1: a
Karakter ke-2: c
Karakter ke-3: e
Karakter ke-4: d
Karakter ke-5: b
Urutan karakter sebelum sorting:
a c e d b
Urutan karakter setelah ascending sort:
a b c d e
Urutan karakter setelah descending sort:
e d c b a
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



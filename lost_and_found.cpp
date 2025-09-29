#include <iostream>
#include <string>
using namespace std;

// Cek huruf vokal
bool isVowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Reverse buatan sendiri
string myReverse(string s)
{
    string res = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        res += s[i];
    }
    return res;
}

// Mesin enkripsi
string encrypt(string word)
{
    string noVowel = "";
    for (char c : word)
    {
        if (!isVowel(c))
            noVowel += c;
    }
    string rev = myReverse(noVowel);
    int ascii = (int)word[0];
    int mid = rev.length() / 2;
    return rev.substr(0, mid) + to_string(ascii) + rev.substr(mid);
}

int main()
{
    string kata;
    cout << "Masukkan kata: ";
    cin >> kata;
    cout << "Hasil sandi: " << encrypt(kata) << endl;
    return 0;
}

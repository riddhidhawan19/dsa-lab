#include <iostream>
#include <string>
using namespace std;

// to reverse string
string reverseString(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
    return s;
}

// remove vowels
string removeVowels(string s)
{
    string result = ""; // empty string
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
            result = result + c;
    }
    return result;
}

// sorting
string sortString(string s)
{
    int n = s.length();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s[j] > s[j + 1])
            {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    return s;
}

// convert uppercase to lowercase
string toLowerCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    return s;
}

int main()
{
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    // (a) Concatenate
    cout << "Concatenated: " << s1 + s2 << endl;

    // (b) Reverse
    cout << "Reversed: " << reverseString(s1) << endl;

    // (c) Delete vowels
    cout << "Without vowels: " << removeVowels(s1) << endl;

    // (d) Sort alphabetically
    cout << "Sorted string: " << sortString(s1) << endl;

    // (e) Convert uppercase to lowercase
    cout << "Lowercase: " << toLowerCase(s1) << endl;

    return 0;
}
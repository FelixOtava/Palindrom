#include <iostream>
#include <string>
bool Palindrom(const std::string& input)
{
    const int alfabet = 26;
    int charCounts[alfabet] = { 0 };
    int a = 'a';
    for (int i = 0; i < input.length(); i++)
    {
        charCounts[input[i]-a]++;
    }
    int isOdd = 0;
    for (int i = 0; i < alfabet; i++)
    {
        isOdd += charCounts[i] % 2;
    }
    return isOdd <= 1;
}

int main()
{
    std::string input;
    std::cout << "Type some random letters: \n";
    std::cin >> input;
    if (Palindrom(input) == true)
        std::cout << "DA";
    else
        std::cout << "NU";
}


#include <string>
#include <algorithm>
#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    if (std::equal(s.begin(), s.begin() + s.size() / 2, s.rbegin()))
        std::cout << "is a palindrome.\n";
    else
        std::cout << "is NOT a palindrome.\n";
    cout<<"this change going to happen in Github website";
}

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[20];
    cout << "Enter the string in uppercase: "; 
    cin >> s;
    int len = strlen(s);

    for(int i = 0; i < len; i++) { 
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32; 
        }
    }
    cout << "The entered string in lowercase: " << s;
    return 0;
}


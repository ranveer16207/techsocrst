#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n;
string text;
cout << "enter text:- ";
getline(cin, text);
cout << "enter shift:- ";
cin >> n;

for(int i = 0; i < text.length(); i++)
 {
    char x = text[i];

    if(x >= 'A' && x <= 'Z'){
        cout << char((x + n - 65)%26 + 65);
    } 
    else if(x >= 'a' && x <= 'z'){
        cout << char((x + n - 97)%26 + 97);
    } 
    else{
    cout << x;
    }
 }
    return 0;
}

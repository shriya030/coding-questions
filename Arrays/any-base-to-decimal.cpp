https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/any-base-to-decimal-official/ojquestion#

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main() {
    string s;
    cin>>s;
    long long int base, num = 0;
    cin>>base;
    long long int len = s.length();
    long long int n = len - 1, i = 0;
    while (len > 0) {
        len--;
        //cout<<(int)s[n]<<endl;
        num +=(((int)s[n] - 48) * pow(base, i));
        //cout<<num<<endl;
        n--;
        i++;
    }
    cout<<num;
    
}

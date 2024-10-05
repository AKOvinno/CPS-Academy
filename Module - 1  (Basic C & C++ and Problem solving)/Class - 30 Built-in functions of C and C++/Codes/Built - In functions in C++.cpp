#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    cout << "Max of 1, 2, 3, 4 = " << max({1, 2, 3, 4}) << "\n";
    cout << "Minimum of 1, 2, 3, 4 = " << min({1, 2, 3, 4}) << "\n";
    cout << "Cubic root of 1000 = " << cbrt(1000) << "\n";
    double d = 2.34;
    cout << "Ceil value = " << ceil(d) << "\n";
    cout << "Floor value = " << floor(d) << "\n";
    cout << "Round 3.45 = " << round(3.45) << "\n";
    cout << "Round 3.76 = " << round(3.76) << "\n";

    int ara[] = {2, 3, 4, 5, 6};
    reverse(ara+1, ara+4); /// Here, a+5 is end pointer
    for(int i = 0; i < 5; i++) cout << ara[i] << " ";

    cout << "\n";

    int b[] = {5, 2, 1, 6, 5, 4, 3};
    sort(b, b+7);
    for(int i = 0; i < 7; i++) cout << b[i] << " ";

    int m[] = {2, 3, 4, 5, 6};
    cout << "\nMax element of array = " << *max_element(m, m+5) << "\n";

    char a = 'a';
    char bi = 'A';
    cout << isupper(a) << "\n"; // It will return boolean 0/1
    cout << islower(a) << "\n";
    cout << isdigit(a) << "\n";
    cout << isalpha(a) << "\n";

    cout << (char) tolower(bi) << "\n";
    cout << (char) toupper(a) << "\n";

    char s1[] = "Ovinno";
    char s2[] = "Laila";
    cout << "String length = " << strlen(s1) << "\n";
    cout << strcmp(s1, s2) << "\n";
    cout << strcat(s1, s2) << "\n";

    cout << "GCD of 10 and 5 = " << __gcd(10, 5) << "\n";


    return 0;
}


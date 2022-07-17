#include<iostream>

using namespace std;

int main()
{
    int test;
    cin >> test; 
    while(test--)
    {
        int a, b, x, y, k, petrol = 0, desel = 0;
        cin >> a >> b >> x >> y >> k;
        petrol = ((x*k)+a);
        desel = ((y*k)+b);
        if(petrol < desel) cout << "PETROL\n";
        else if(desel < petrol) cout << "DIESEL\n";
        else cout << "SAME PRICE\n";
    }
}

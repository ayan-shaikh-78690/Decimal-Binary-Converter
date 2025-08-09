#include <iostream>
using namespace std;

void DectoBinary()
{
    int decnum;
    cout << "Enter decimal number to convert it into binary." << endl;
    cin >> decnum;
    int rem, ans = 0;
    int pow = 1;
    while (decnum > 0)
    {
        rem = decnum % 2;
        decnum /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    cout << "The binary form is " << ans << endl;
    // Binary form
}
void Binarytodec()
{
    int biNum;
    cout << "Enter binary number to convert into decimal" << endl;
    cin >> biNum;

    int rem, ans = 0, pow = 1;
    while (biNum > 0)
    {
        rem = biNum % 10;
        ans += (rem * pow);

        pow *= 2;
        biNum /= 10;
    }
    cout << "The decimal form is " << ans << endl;
}

int main()
{
    int ch;
    cout << "Main Menu: \n\t1.Decimal to Binary\n\t2.Binary to Decimal" << endl;
    do
    {
        cout << "Enter your choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            DectoBinary();
            break;

        case 2:
            Binarytodec();
            break;
        }
    }while(ch < 3);

    return 0;
}

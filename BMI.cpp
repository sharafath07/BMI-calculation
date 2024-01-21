#include <iostream>
using namespace std;

int main()
{
    float W, H, BMI, sq;
    int min, max, j, i;
    
    cout << "Enter your weight in kg\n" ;
    cin >> W;
    cout << "Enter your height in metre\n" ;
    cin >> H;

    sq=H*H;
    BMI=W/sq;
    cout << "Body Mass Index =" << BMI << "\n";

    for(i=0;i<10000;i++)
    {
    min=i/sq;
    if(min==18)
    break;
    else
    continue;
    }
    for(j=0;j<10000;j++)
    {
    max=j/sq;
    if(max==25)
    break;
    else
    continue;
    }

    if(BMI>24.9)
    {
    if(BMI>30)
    cout << "It is at obuseweight range.\nYour healthy weight range is between " << i << "kg" << " and " << j << "kg" ;
    else
    cout << "It is at overweight range.\nYour healthy weight range is between " << i << "kg" << " and " << j << "kg" ;
    }
    else if(BMI<18.5)
    cout << "It is at underweight range.\nYour healthy weight range is between " << i << "kg" << " and " << j << "kg" ;
    else
    cout << "It is at healthy weight range.\nYou want to maintain your weight in between " << i << "kg" << " and " << j << "kg" ;

    return 0;
}
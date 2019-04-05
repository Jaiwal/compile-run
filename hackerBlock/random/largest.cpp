/*#include<bits/stdc++.h>


using std::cin;
using std::cout;
int main()
{

  int a,b,c;
  cin>>a>>b>>c;
  int m;
  m=a > b ? ( a > c ? a : c) : (b > c ? b : c) ;
  cout<<m;
  return 0;
}
*/
#include<iostream>
using namespace std;

int main()
{
    int num1, num2, num3, largest;


    cin >> num1 >> num2 >> num3;

    largest = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3) ;

    cout << largest ;

    return 0;
}


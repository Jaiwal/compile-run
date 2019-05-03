
#include<fstream>
#include<iostream>
using namespace std;
int main()
{

    ifstream fin;
    char ch;
    fin.open("FH.doc");

   // fin>>ch; bcz space ,newline ,tab ko data separator mante and lega nhi as charcterr

    ch=fin.get();
    while(!fin.eof())
    {

        cout<<ch;
         ch=fin.get();
      //  fin>>ch;
    }
    fin.close();
    getchar();









    return 0;


}

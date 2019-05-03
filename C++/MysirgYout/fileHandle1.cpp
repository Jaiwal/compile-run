
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("FH.doc");
    getchar();
    fout<<"Hello there";
    getchar();
    fout.close();
    getchar();

    return 0;

}

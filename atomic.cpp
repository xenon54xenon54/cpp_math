#include <iostream>
int l;
int s;
int questions;
using namespace std;

void tblSolve(int z, int amu)
{
    cout << z << ", " << z << ", " << amu - z << ", " << z << ", " << amu << '\n';
}
void tblSolveCmd(void)
{
    cout << "How many questions do you have? ";
    cin >> questions;
    for (int index = 0; index <= questions; index += 1)
    {
        cout << "What is the atomic number? ";
        cin >> l;
        cout << "What is the atomic mass? ";
        cin >> s;
        cout << "";
        tblSolve(l, s);
    }
}
int main(void)
{
    tblSolveCmd();
    return (0);
}
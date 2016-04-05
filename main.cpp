#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int array1[3][2]={2,4,1,6,8,9};
    cout<<"the number of array1 are:"<<endl;
    int l;
    for (l=0;l<3;l++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<setw(8)<<array1[l][j];
        }
        cout<<endl;
    }
    int array[2][5]={1,2,3,4,5,1,2,3,4,5};
    cout <<"the number array are:"<<endl;
    int i;
    for(i=0;i<2;i++)
    {
        for(int j=0;j<5;j++) {
            cout<<setw(2)<<&array[i][j];
//            for(j=0;j<5;j++)
//            {
//                cout << setw(4) << array[i][j];
//            }
//            cout<<endl;
            cout << setw(4) << array[i][j]<<endl;

        }

        cout<<endl;
    }



}

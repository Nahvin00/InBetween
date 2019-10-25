#include <iostream>
using namespace std;

int main()
{
    int firstNum,secondNum,totalSqrOdd=0,totalEven=0;
    cout<<"Input two integers: "<<endl;
    cin>>firstNum>>secondNum;
    int ini=firstNum;
    if(ini<secondNum){
        cout<<"\nThe odd numbers between "<<ini<<" and "<<secondNum<<": "<<endl;
        while(secondNum>ini){
            ini++;
            if(ini%2!=0){
                cout<<ini<<"\t";
                totalSqrOdd+=(ini*ini);
            }
            else{
                totalEven+=ini;
            }
        }
    }
    cout<<"\n\nThe sum of all even numbers between "<<firstNum<<" and "<<secondNum<<" is "<<totalEven<<"."<<endl
        <<"\nThe numbers and their squares between 1 and 10: "<<endl;
    
    int i=2;
    while(i<10){
        cout<<i<<"\t\t"<<(i*i)<<endl;
        i++;
    }
    cout<<"\nThe sum of the square of the odd numbers between "<<firstNum<<" and "<<secondNum<<" is "<<totalSqrOdd<<".";
    return 0;
}

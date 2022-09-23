#include <iostream>
using namespace std;
int calc(int a , char c,int b){
    double result;
    if (c=='+'){
        result=a+b;
    }
    else if (c=='-'){
        result=a-b;
    }
    else if (c=='*'){
        result=a*b;
    }
    else if (c=='/'){
        result=a/b;
    }
    else{
        cout<<"Invalid operator";
    }

}
int main()
{
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin>>op;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "result  is: " << calc(num1,op,num2 )<< endl;

    return 0;
}

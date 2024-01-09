#include<bits/stdc++.h>
using namespace std;

long long fact(int n){
    long long ans = 1;
    for(long long i = 2; i<=n; i++){
        ans *= i;
    }
    return ans;
}

int main(){
    cout<<endl;
    cout<<"             Welcome To The Scientific Calculator App Developed by Shubham Maurya"<<endl;
    cout<<endl;
    cout<<"***** Press 0 to quit the program *****"<<endl;
    cout<<"Enter 1 for Addition"<<endl;
    cout<<"Enter 2 for Subtraction"<<endl;
    cout<<"Enter 3 for Multiplication"<<endl;
    cout<<"Enter 4 for Division"<<endl;
    cout<<"Enter 5 for power"<<endl;
    cout<<"Enter 6 for Factorial"<<endl;
    cout<<"Enter 7 for Square"<<endl;
    cout<<"Enter 8 for Cube"<<endl;
    cout<<"Enter 9 for Squareroot"<<endl;
    cout<<"Enter 10 for log()"<<endl;
    cout<<"Enter 11 for ln()"<<endl;
    cout<<"Enter 12 for Trigonomentic function"<<endl;
    cout<<endl;
    int operation = 1;

    while(operation){
        cout<<"Enter the operation you want to do: ";
        cin>>operation;
        bool flag=false;
        double a, b = 2;
        switch (operation){
        case 0:
            flag = true;
            break;
        case 1:
            cout<<"Enter the numbers you want to add: ";
            cin>>a>>b;
            cout<<"Addition = "<<a+b<<endl;
            break;
        case 2:
            cout<<"Enter the numbers you want to subtract: ";
            cin>>a>>b;
            cout<<"Subtraction = "<<a-b<<endl;
            break;
        case 3:
            cout<<"Enter the numbers you want to multiply: ";
            cin>>a>>b;
            cout<<"Multiplication = "<<a*b<<endl;
            break;
        case 4:
            cout<<"Enter the numbers you want to divide: ";
            cin>>a>>b;
            cout<<"Divide = "<<(a*(1.0)/b)<<endl;
            break;
        case 5:
            cout<<"Enter the numbers you want to power: ";
            cin>>a>>b;
            cout<<"Power = "<<pow(a,b)<<endl;
            break;
        case 6:
            cout<<"Enter the number you want factorial of: ";
            int f;
            cin>>f;
            cout<<"Factorial = "<<fact(f)<<endl;
            break;
        case 7:
            cout<<"Enter the number you want to square: ";
            cin>>a;
            cout<<"Square = "<<pow(a,2)<<endl;
            break;
        case 8:
            cout<<"Enter the number you want to cube: ";
            cin>>a;
            cout<<"Cube = "<<pow(a,3)<<endl;
            break;
        case 9:
            cout<<"Enter the number you want to squareroot: ";
            cin>>a;
            cout<<"Squareroot = "<<(double)sqrt(a)<<endl;
            break;
        case 10:
            cout<<"Enter the number you want to apply log(): ";
            cin>>a;
            cout<<"Log("<<a<<") = "<<(double)log(a)<<endl;
            break;
        case 11:
            cout<<"Enter the number you want to apply ln(): ";
            cin>>a;
            cout<<"ln("<<a<<") = "<<(double)log2(a)<<endl;
            break;
        case 12:
            cout<<"Enter 1 for sin():"<<endl;
            cout<<"Enter 2 for cos():"<<endl;
            cout<<"Enter 3 for tan():"<<endl;
            cout<<"Enter 4 for cot():"<<endl;
            cout<<"Enter 5 for sec():"<<endl;
            cout<<"Enter 6 for cosec():"<<endl;
            int arg;
            cin>>arg; 
            switch (arg){
             
            case 1:
                cout<<"Enter the angle in radian: ";
                cin>>a;
                cout<<"sin("<<a<<") = "<<sin(a)<<endl;
                break;
            case 2:
                cout<<"Enter the angle in radian: ";
                cin>>a;
                cout<<"cos("<<a<<") = "<<cos(a)<<endl;
                break;
            case 3:
                cout<<"Enter the angle in radian: ";
                cin>>a;
                cout<<"tan("<<a<<") = "<<tan(0.0174532925*a)<<endl;
                break;
            case 4:
                cout<<"Enter the angle in radian: ";
                cin>>a;
                cout<<"cot("<<a<<") = "<<1/(tan(a))<<endl;
                break;
            case 5:
                cout<<"Enter the angle in radian: ";
                cin>>a;
                cout<<"sec("<<a<<") = "<<1/(cos(a))<<endl;
                break;
            case 6:
                cout<<"Enter the angle in radian: ";
                cin>>a;
                cout<<"cosec("<<a<<") = "<<1/(sin(a))<<endl;
                break;
            default:
                cout<<"You have entered wrong choice !!!"<<endl;
                break;
            }
            break;
        default:
            cout<<"You have entered wrong choice !!!"<<endl;
            break;
        }
        if(flag){
            break;
        }
    }
    cout<<endl;
    cout<<"           Thanks for using Scientific Calculator App"<<endl;
    cout<<endl;
    return 0;
}
#include <iostream>

using namespace std;

int padovan_iterative(int n){
    int padovan = 1;
    int one = 1;
    int two = 1;
    int three = 1;
    for (int i = 3; i <= n; i++){
        padovan = two + three;
        three = two;
        two = one;
        one = padovan;
    }
    return padovan;
}

int padovan_recursive(int n){
    if (n < 3){
        return 1;
    }else {
        return padovan_recursive(n-2) + padovan_recursive(n-3);
    }
}

int main()
{
    int n;
    cout<<"Input: ";
    cin>>n;
    cout<<padovan_iterative(n)<<endl;
    return 0;
}

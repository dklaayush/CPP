#include<iostream>
using namespace std;
class add{
    private:
    int number1;
    int number2;
    public:
    void add(){
        cout<<'enter 2 numbers:';
        cin>>number1>>number2;

    }
    void display(){
        cout<<'sum is'<<number1+number1;

    }
}
int main(){
    sum s1;
    s1.add;
    s1.display;
    return 0;
}
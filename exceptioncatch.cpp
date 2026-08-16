#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"enter your choice:";
    cin>>choice;
    try{
        if(choice==1)
        throw 10;
        else if(choice==2)
        throw 2.5;
        else 
        throw 'A';
    }
    catch(int){
    cout<<"an integer is caught";
    }
    catch(double){
        cout<<'an float number is caught';

    }
    catch(char){
        cout<<"an character is caught";
    }
    return 0;

}
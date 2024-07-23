#include<iostream>
using namespace std;

int main()
{
double x;
double y;

cout<<"enter first number :";
cin>>x;
cout<<"enter second number :";
cin>>y;

cout<<"1-addition"<<endl;
cout<<"2-subtraction"<<endl;
cout<<"3-multiflication"<<endl;
cout<<"4-divison"<<endl;

int choice;

cout<<"enter your choice(1-4)"<<endl;
cin>>choice;

double result;

switch(choice)
{
    
    case 1:
     result=x+y;
     cout<<"result is :"<<result;
     break;
    case 2:
     result=x-y;
     cout<<"result is :"<<result;
     break;
    case 3:
     result=x*y;
     cout<<"result is :"<<result;
     break;
    case 4:
     result=x/y;
     cout<<"result is :"<<result;
     break;
    default:
     cout<<"invalid choice";   
}

return 0;

}

#include <iostream>
#include <cmath>//math library for power function
using namespace std;
int main(){
int n1 , n2 , result=0;//int the first and second number in case of decimals
int function; //the function which will hole the value of the desired operation
do{
//use a do while loop so the computer keeps asking the user for input after each operation
cout<<"1)Power"<<endl<<"2)Multiply"<<endl<<"3)divide"<<endl<<"4)addition"<<endl<<"5)Subtract"<<endl<<"0 to exit"<<endl<<"insert the number of your desired function:";
cin>>function;
//ask the user for input and store it in function
if (function==1){
//use function== and not = so its "if it equals" and not assigning it the value
cout<<"insert first number(base): ";
cin>>n1;
cout<<"insert second number(power): ";
cin>>n2;
//ask the user for the first and second number and store them in n1 and n2
result =pow (n1 , n2);
//use the pow function first number is the base the second is the power and store it in result
cout<<"result= "<<result<<endl;
//print the result 
}
//addition and multiplication and subtraction dont need a special function
// simply use their already built in operators (+ , - , *)
else if (function==2){
    cout<<"insert first number: ";
    cin>>n1;
    cout<<"insert second number: ";
    cin>>n2;
    //same storing procedure
    result=n1+n2;
    cout<<"result:"<<result<<endl;
}
else if (function==3){
cout<<"insert first number: ";
float n3 ,n4;//float the division numbers as high chance they contain decimals
cin>>n3;
cout<<"insert second number: ";
cin>>n4; 
float result2 =n3/n4;
cout<<"result:"<<result2<<endl;
}
else if (function==4){
cout<<"insert first number: ";
cin>>n1;
cout<<"insert second number: ";
cin>>n2; 
result=n1+n2;
cout<<"result:"<<result<<endl;
}
else if(function==5){
    cout<<"insert first number: ";
cin>>n1;
cout<<"insert second number: ";
cin>>n2; 
result=n1-n2;
cout<<"result:"<<result<<endl;
}
else ;}
while (function!=0);
cout<<"goodbye :)";
//the condition for while is function!= 0 which means the function dosent equal 0 
//then continue asking for input if it does then end the loop
return 0;
//to let the computer know that the program has ended
}





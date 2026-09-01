#include <iostream>
#include <cmath>//math library for power function
using namespace std;
int main(){
float angle=0; 
float result3=0; // float as result may have decimals so must be stored in a double float just incase :)
double result2=0; //for the square root because it holds large decimal values therfore the result must be stored in a double float
float n3 ,n4;//float the division numbers as high chance they contain decimals
 int n1 , n2 , result=0;//int the first and second number in case of decimals
int function; //the function which will hole the value of the desired operation
do{
//use a do while loop so the computer keeps asking the user for input after each operation
cout<<"1)Power"<<endl<<"2)Multiply"<<endl<<"3)divide"<<endl<<"4)addition"<<endl<<"5)Subtract"<<endl<<"6)square root"<<endl<<"7)trigonometry"<<endl<<"8)log functions"<<endl<<"0 to exit"<<endl<<"insert the number of your desired function:";
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
else if(function==6){
cout<<"enter your number: ";
cin>>n3;//store value in n3 as it is a float
result2 = sqrt(n3);//function in math library for square root 
cout<<"result= "<<result2<<endl;
}
else if (function==7){
cout<<"1)sin"<<endl<<"2)cos"<<endl<<"3)tan"<<endl<<"4)cosec"<<endl<<"5)sec"<<endl<<"6)cotg"<<endl<<"insert the number of your desired function: ";
cin>>function;
if(function==1){
cout<<"please input your desired angle: ";
cin>>angle;
double radians = angle * M_PI / 180.0;//the trig functions in C++ only take the angles in rad so this formula transfers the angle to rad
result3= sin(radians);
cout<<"result= "<<result3<<endl;
}
else if (function==2){
double radians = angle * M_PI / 180.0;
cout<<"please input your desired angle: ";
cin>>angle;
result3= cos(radians);
cout<<"result= "<<result3<<endl;
}
else if (function==3){
cout<<"please input your desired angle: ";
cin>>angle;
double radians = angle * M_PI / 180.0;
result3= tan(radians);
cout<<"result= "<<result3<<endl;
}
else if (function==4){
cout<<"please input your desired angle: ";
cin>>angle;
double radians = angle * M_PI / 180.0;
result3= asin(radians);//the asin or acos or atan signifies the inverse
cout<<"result= "<<result3<<endl;}
else if (function==5){
cout<<"please input your desired angle: ";
cin>>angle;
double radians = angle * M_PI / 180.0;
result3= acos(radians);
cout<<"result= "<<result3<<endl;}
else if (function==6){
cout<<"please input your desired angle: ";
cin>>angle;
double radians = angle * M_PI / 180.0;
result3= atan(radians);
cout<<"result3= "<<result<<endl;}}
else if(function==8){
cout<<"1)ln"<<endl<<"2)log10"<<endl<<"3)log(custom base)"<<endl<<"please slect your desired function: ";
cin>>function;
if(function==1){
cout<<"please input desired number";
cin>>n1;
result = log(n1);
cout<<"result: "<<result<<endl;
}
else if(function==2){
cout<<"please input desired number";
cin>>n1;
result = log10(n1);//log base 10
cout<<"result: "<<result<<endl;
}
else if(function==3){
cout<<"please input desired base: "<<endl;
cin>>n1;
cout<<"please input desired number: ";
cin>>n2;
result = log(n1) / log(n2);//in order for the user to select custom base use this formula
cout<<"result: "<<result<<endl;}}
else ;
}
while (function!=0);
cout<<"goodbye :)";
//the condition for while is function!= 0 which means the function dosent equal 0 
//then continue asking for input if it does then end the loop
return 0;
//to let the computer know that the program has ended
}




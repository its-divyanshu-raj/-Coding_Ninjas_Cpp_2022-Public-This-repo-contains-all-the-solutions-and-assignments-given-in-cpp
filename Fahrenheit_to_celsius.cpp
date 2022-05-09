 /*Fahrenheit to Celsius Table 
Send Feedback
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Input Format :
3 integers - S, E and W respectively */
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------  
 #include<iostream>
using namespace std;


int main(){

int S, E, W,C;
    
cin>>S>>E>>W;
    
for(S;S<E;S=S+W){
    C = (5.0/9.0)*(S-32) ;
    cout<<S<<' '<<C<<endl;
    
} 
  
}

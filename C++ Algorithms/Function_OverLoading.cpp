/*
    working with function overloading functions
*/

#include<iostream>
#include<string>


using namespace std;

string nameOrder(char first_name, char second_name){
    string result = first_name + second_name;
    return result;
}
string nameOrder(char first_name , char second_name){
    string result = second_name + first_name;
    return result;
}
string nameOrder(char first_name, int post){
    string result = first_name + to_string(post);
    return result;
}

int main(){
    string first_name = "Jato";
    string second_name = "Priestly";
    int post = 7;
    cout << "First Order: "<< nameOrder(first_name, second_name) << endl;  // AB
    cout << "Second Order: "<< nameOrder(first_name,second_name) << endl;
    cout << "Third Order: "<< nameOrder(first_name,post) <<endl;
}
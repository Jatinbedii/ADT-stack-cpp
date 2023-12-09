#include<iostream>
using namespace std;



class stack{
    public:
    int arr[99];
    int size=0;

    //constructor
    stack(){

    }
    stack(int n){
        arr[0]= n;
        size++;
    }

    //checking if it is empty
    int isempty(){
        if(size==0){
            return 1;
        }

        return 0;
    }

    int findsize(){
        return size;
    }

    //push 
    int push(int n){
        if(isempty()){
            arr[0]= n;
        }else{
            if(size==98){
            cout<<"Stack is full";
            return -1;
            }else{
                arr[size]= n;
            }
        }
        size++;
        return n;
    }

    //pop
    int pop(){
        if(isempty()){
            cout<<"Stack is Empty";
            return -1;
        }


        size--;

        return arr[size];
    }




    //top
    int top(){
        if(isempty()){
            cout<<"Stack is Empty";
            return -1;
        }

        return arr[size-1];

    }





};

int main(){
   //Whatever you wanna do
   return 0;

}
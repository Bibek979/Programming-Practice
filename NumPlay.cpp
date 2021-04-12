#include<iostream>
#include<math.h>                        //Library for math e.g, (10^9)

using namespace std;

class NumPlay
{
    public:
        int input;

        string num[9] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

        public:
            NumPlay()
            {
                input=0;
            }

    int InputMethod()
    {
        while(1)
        {
            cout<<endl<<"Enter an Integer between 1 and 10^9 : \t";
            cin>>input;
            cout<<endl;

            if(input>=1&&input<=pow(10.0, 10.0))
            {
                return input;
            }
            cout<<"Enter a valid input\n";
        }
    }

    void output()
    {
        if(input>=1&&input<=9)
        {
            cout<<num[input-1]<<endl;                    
        }
        
        else
        {
            cout<<"Greater than 9\n";
        }
    }

};


int main()
{
    NumPlay obj;
    while(1)
    {
        obj.InputMethod();
        obj.output();
    }    
}

/*
There are issues that I need to come back to check like : 
1. Any other types of input puts the program in a kind of Loop.
2. To put an option of exit in the program. 
*/
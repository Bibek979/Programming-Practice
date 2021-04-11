/*This is a program which gives the user a menu to convert time from hours to minute to seconds and 
vice versa */

#include<iostream>


using namespace std;

class TimeCalculator
{
    public:
    int hour, minute, second;
    
    public:
        TimeCalculator()
        {
        }

    int hhtomm(int h)       //Method to convert hours into minutes
    {
        //1 hour = 60 mins.
        int m;
        m=h*60;
        return m;
    }

    float mmtohh(int m)         //Method to convert Minutes to Hours 
    {
        //1 min = 1/60 hour
        float h;
        h=m/60;
        return h;
    }

    int mmtoss(int m)       //Method to convert minutes to Seconds
    {
        //1 min = 60 seconds
        int ss;
        ss=m*60;
        return ss;
    }
    float sstomm(int s)     //Method to convert second to minutes
    {
        //1 second = 1/60 minutes
        float mm;
        mm=s/60;
        return mm;
    }

    float sstohh(int s)   //Method to convert second to hour
    {
        //1 second = 1/3600 hour
        int hh;
        hh=s/3600;
        return hh;
    }

    int hhtoss(int h)   //Method to convert Hour into Seconds
    {
        //1 hour = 3600 seconds
        int ss;
        ss=h*3600;
        return ss;
    }    

    //InputDisplay is a dynamic function which will handle the input of minute, hour and second

    void InputDisplay(string a)
    {
        cout<<"Enter "<<a<<" : "<<endl;
    }

};

int main()
{
    int option;
    TimeCalculator obj;
    while(1)
    {
        cout<<"*****************Time Converter*****************"<<endl<<endl;
        cout<<"1. Hour to Minute"<<endl<<"2. Hour to Second"<<endl<<"3. Minute to Hour"<<endl<<"4. Minute to Second"<<endl<<"5. Second to Minute"<<endl<<"6. Second to Hoour"<<endl<<"7. exit"<<endl<<endl;
        cout<<"Select an option to Use\t";
        cin>>option;

        cout<<endl<<endl;

        switch (option)
        {
            case 1: 
            obj.InputDisplay("Hours");
            cin>>obj.hour;
            cout<<"Hours to Minutes = "<<obj.hhtomm(obj.hour)<<endl;
            system("pause");
            break;

            case 2: 
            obj.InputDisplay("Hours");
            cin>>obj.hour;
            cout<<"Hours to Seconds = "<<obj.hhtoss(obj.hour)<<endl;
            system("pause");
            break;

            case 3: 
            obj.InputDisplay("Minutes");
            cin>>obj.minute;
            cout<<"Minutes to Seconds = "<<obj.mmtoss(obj.minute)<<endl;
            system("pause");
            break;

            case 4: 
            obj.InputDisplay("Minutes");
            cin>>obj.minute;
            cout<<"Minutes to Hours = "<<obj.mmtohh(obj.minute)<<endl;
            system("pause");
            break;

            case 5: 
            obj.InputDisplay("Seconds");
            cin>>obj.second;
            cout<<"Seconds to Hours = "<<obj.sstohh(obj.second)<<endl;
            system("pause");
            break;

            case 6: 
            obj.InputDisplay("Seconds");
            cin>>obj.second;
            cout<<"Seconds to Minutes = "<<obj.sstomm(obj.second)<<endl;
            system("pause");
            break;

            case 7: exit(0);

            default:
            cout<<"You have entered a wrong option Try again !!"<<endl;
        }
    }
    
}


/*
Problems to fix
 1.i have an error where the second to hour is not being returned in float. 
 2. Only if the screen could be cleaned after each iterations. 
 */

/*
Plans with this program are : - 
Full fledged Program to calculate
And to have its own UI.  
*/
# include <iostream>
using namespace std;

class Power                                          //creating power class
{
    public:
    int power(double m,int n=2)                      //function definition and setting default value of n =2
    {
        int i, ans=1;
        for(i=1;i<=n;i++)                            //calculation part 
       {
           ans=ans*m;
       }
        return ans;
    }
};

    int main()
    { 
        int result=0;
        Power pow;                                   // creating pow variable of power data-type
        result=pow.power(5);                         // function call by passing 1 parameters and using default parameter
        cout<<"The sqaure of 5 is: "<<result;
        return 0;   
    }


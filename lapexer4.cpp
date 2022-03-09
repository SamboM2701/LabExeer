//lapexer4
 #include <iostream>
 using namespace std;
 int main()
 {
    int Temperature = 23;
    
    if (Temperature > 41 and Temperature <= 54)
    {
         cout<<"Stay hydrated";
    }
    
    else if (Temperature > 32 and Temperature <= 40)
    {
        cout<<"Stay Cool and Safe!";
    }
   
    else if (Temperature > 26 and Temperature <= 31)
    { 
       cout<<"Keep a sunblock handy!";
    }
   
    else if (Temperature > 20 and Temperature <= 25)
    { 
        cout<<"Always keep your cool!";
    }
    else
    {
        cout<<"Cool breeze in the air!";
    }
    

return 0;
    
 }
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;



int main() {
    srand(time(0)); // Set a new seed based on the current time
    int random=rand()%100+1;
    cout<<random;
    
     cout<<"Please enter number between 1 o 100"<<endl;
     int userInput;
     cin>>userInput;
     int count=10;
     while(count!=0)
     {
        if(userInput<random)
        {
            cout<<"Your answer is too low"<<endl;
            cin>>userInput;
            count--;
            
        }
        else if (userInput>random)
        {
            cout<<"Your answer is too high"<<endl;
            cin>>userInput;
            count--;
        }
        else if(userInput==random){
            cout<<"Congarts you found the number "<<userInput<<endl;
            break;
        }
        
     }
    return 0;
}

    

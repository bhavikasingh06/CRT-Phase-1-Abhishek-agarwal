//program 5
//login credential

#include <iostream>
using namespace std;

int main()
{
    int userId = 0606;
    int userPassword = 0000;
    
    int inputId;
    int inputPassword;
    
    cin>>inputId>>inputPassword;
    
    bool isGranted = (userId == inputId) && (userPassword == inputPassword);
    cout<< "Access Granted" << isGranted << endl;
    cout<< "Access Denied" << !isGranted << endl;
    
    return 0;
    
}

#include <iostream>
#include <cstring>
using namespace std;




int  main(int numArgs, char** argsv)
{
string temp1  = "";
string temp2 = "";
string temp3 = "";


    
if(numArgs > 4 || numArgs < 2)
{
    cout << "Please pass only between 1 and 3 parameters in, thank you." << endl;
}
 
temp1 = argsv[1];
if(temp1 == "add")
{
    if(numArgs != 3)
    {
        cout << "Invalid Input: Too many or not enough parameters for 'add'." << endl;
        cout << "Correct Syntax: ./a.out add ./path/to/file.cpp" << endl;
    return 0;
    }
    else
    {
        
 cout << "Added " <<  argsv[2] << endl;            
        return 0;
    }
    

}
else if(temp1 == "status")
{
    if(numArgs != 2)
    {
        cout << "Error: Invalid Input: Too many parameters for 'status'." << endl;
        cout << "Correct Syntax: ./a.out status" << endl;
    return 0;
    }
cout << "I have checked your changes" << endl;
}
else if(temp1 == "push")
{
if(numArgs != 4)
{
    cout << "Error: Invalid Input: not enough parameters for 'push'." << endl; 
    cout << "Correct Syntax: ./a.out push origin master" << endl;
return 0;
}
else
{
    {
        temp2 = argsv[2];
        temp3 = argsv[3];
    }
}

 if(temp2 != "origin")
{
    cout << "Error: Invalid Input: parameter position 2 (./a.out push ___ master) must be 'origin' " << endl;
    cout << "                                                         ^^^                          " << endl;   
return 0;
}
else if(temp3 != "master")
{
cout << "Error: Invalid Input: parameter position 3 (./a.out push origin _____) must be 'master' " << endl;
cout << "                                                                ^^^^^                   " << endl;   
return 0;
}

cout << "pushing changes to origin master" << endl;


}
else if(temp1 == "commit")
{
if(numArgs != 4)
{
    cout << "Error: Invalid Input: not enough parameters for 'commit'." << endl; 
    cout << "Correct Syntax: ./a.out commit -m message" << endl;
    return 0;
}
else
{
    {
        temp2 = argsv[2];
        temp3 = argsv[3];
    }
}

 if(temp2 != "-m")
{
    cout << "Error: Invalid Input: parameter at position 2 (./a.out commit __ message) must be '-m' for commit" << endl;
    cout << "                                                              ^^                                 " << endl;
return 0;
}
  
cout << "Commiting your files and adding the message [" << argsv[3] << "]" << endl;
return 0;



}

else{

cout << "Error: Unrecognized Command: Please pass in a valid command" << endl;
}
    return 0;
}
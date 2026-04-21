#include <iostream>
#include <string>
using namespace std;

void point_down(string alpha)
{
    int index = alpha.size();
    
    for(int i=0; i<alpha.size(); i++)
    {
        for(int k = 0; k<alpha.size()-(alpha.size()-i);k++)
        {
            cout<<" ";
        }
        for(int j=0; j<index; j++)
        {
            cout<<alpha[j]<<" ";
        }
        cout<<endl;
        --index;
    }
    
}

void point_up(string alpha)
{
    int index = 0;
    
    for(int i=0; i<alpha.size()+1; i++)
    {
        for(int k = 0; k<alpha.size()-i;k++)
        {
            cout<<" ";
        }
        for(int j=0; j<index; j++)
        {
            cout<<alpha[j]<<" ";
        }
        cout<<endl;
        ++index;
    }
}

// Left Pyramid Function:

void left_pyramid(string alpha)
{
    int index = 1;
    
    for(int i=0; i<alpha.size();i++)
    {
        for(int j = 0; j<index; j++)
        {
            cout<<alpha[j]<<" ";
        }
        cout<<endl;
        ++index;
    }
    
    index -=3;
    //cout<<"index is: "<<index<<endl;
    
    for(int i = 0; i<alpha.size()-1; i++)
    {
        for(int j = index; j>-1; j--)
        {
            cout<<alpha[j] << " ";
        }
        cout<<endl;
        --index;
    }
    
}

// Right pyramid function...
void right_pyramid(string alpha)
{
    int index = alpha.size()-1;   // Use this to print spaces.
    int arrayindex = alpha.size()-1; // Use this to print numbers
    
    
    
     // This is the bottom of the pyramid.
    for(int i = 0; i<alpha.size()-1;i++)
    {
        cout<<"  ";
        
        for(int j=0; j<index; j++)
        {
            cout<< "  "; //"-+";
        }
        
        //for(int i = 0; i<alpha.size()-1; i++)
        
            for(int j = arrayindex-1; j>-1; j--)
            {
                cout<<alpha[j] << " ";
            }
            cout<<endl;
            --arrayindex;
    
   // cout<<'A';
    //cout<<endl;
    index++;
    }

    
    
}


// Right sided hourglass

int main() {
    //string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int in; 

    
    int a;
    
    while (a!=9)
    {
        string alpha = "";
        cout<<"Would you like to enter a string? 1 for yes, 9 to exit: "; cin>>a;
        
        cin.ignore();
        cout<< "Please enter a string: "; getline(cin, alpha);
        
            
    cout<< "Input your 1 for pyramid, 2 for inverted triangle 3 for a pyramid from the left side, 4 to make a triangle appear from the right hand side: ";
    cin>>in;
    cout<< endl;
    
        if(in == 1)
        {
            point_up(alpha);
         }
        else if (in == 2)
        {
            point_down(alpha);
        }
        else if (in == 3)
        {
            left_pyramid(alpha);
        }
        else if (in == 4)
        {
            right_pyramid(alpha);
            
        }
        cout<< endl;
    }
    return 0;
}


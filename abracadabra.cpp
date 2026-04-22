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
        if(index >1)
        {
            cout<<endl;
        }
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
        for(int j = 0; j<index; j++)
        {
            cout<<alpha[j] << " ";
        }
        cout<<endl;
        --index;
    }
    
}


//This is a function "Right Pyramid" will call to get the top.
void top_right(string alpha)
{
    int spacesindex = alpha.size()-1+alpha.size()-2; // Need Spaces
    int arrayindex = alpha.size()-1; // Start at lowest number of course...
    // This nested for loop will give us the upper right half:
    int size = 1;
    for(int i =0; i<alpha.size(); i++)
    {
        
        for (int k=0; k<spacesindex; k++)
        {
            //cout<<"+="; //This is a sanity check to verify spaces are actually being placed.
            cout<<"  ";
        }
        spacesindex -=1;
        
        
        int index = alpha.size()-1;
       
        
       // for(int j = 0; j<alpha.size();j++)//spacesindex-1; j--)
        //{
            for(int k =0; k<size; k++)
            {
                cout<<alpha[index-k] << " ";
                //cout<<"size is: "<<size<< " ";
            }
           size++;
        //}
        cout<<endl;
    }
    
    
}
// Right pyramid function...
void right_pyramid(string alpha)
{
    int index = alpha.size()-1;   // Use this to print spaces.
    int arrayindex = alpha.size()-1; // Use this to print numbers
    
    //Call the function to make the top right:
    top_right(alpha);
    //cout<<endl;
    
     // This is the bottom of the pyramid.
    for(int i = 0; i<alpha.size()-1;i++)
    {
        //cout<<"+=";
        
        for(int j=0; j<index; j++)
        {
            cout<< "  ";// "+="; //"-+";
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

// Normal Hourglass
void hourglass(string alpha)
{
    point_down(alpha);
    if(alpha.size()>1)
    {
        point_up(alpha);
    }
}

//Create a sideways hourglass. Might have to use logic: upperleft_and_right, then lowerleft_and_right...
void sideways_upper(string alpha)
{
    // Think... Need to 
    int spaces = 2*alpha.size()-3;
    int index = 1;
    for(int k = 0; k<alpha.size();k++)
    {
    for(int i =0;i<index; i++) // Left side chars
    {
        cout<< alpha[i]<< " ";
    }
    if (spaces >0) // Insert Spaces
    {
        for(int i =0;i<spaces;i++) //
        {
            cout<< "  ";
        }
    }
    int n = index;
    for(int i = 0;i< index;i++) // Insert Right Side chars
    {
        if(n != alpha.size())
        {
            cout<< alpha[alpha.size()-alpha.size()+i]<< " ";
        }
        --n;
    }
    ++index;
    spaces -=2;
    cout<<endl;
    }
}
void sideways_lower(string alpha)
{

}

void sideways_hourglass(string alpha)
{
    sideways_upper(alpha); // Will print the whole damn thing.
    if(alpha.size()>1)
    {
        sideways_lower(alpha);
    }
}

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
                    
    cout<< "Input your 1 for pyramid, 2 for inverted triangle 3 for a pyramid from the left side, 4 to make a triangle appear from the right hand side, 5 to make an hourglass, 6 to make a sideways hourglass: ";
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
        else if(in == 5)
        {
            hourglass(alpha);
        }
        else if(in ==6)
        {
            sideways_hourglass(alpha);
        }
        cout<< endl;
    }
    return 0;
}

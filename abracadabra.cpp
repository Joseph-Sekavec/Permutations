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

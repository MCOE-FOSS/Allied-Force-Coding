    #include <iostream>
     
    using namespace std;
     
    int a[10];
     
    int main() 
    {
    	int T;
        cout<<"\nEnter test cases: ";
    	cin>>T;
    	while (T--) 
        {
            cout<<"Test Case "<<T<<": \n";
            cout<<"Enter number of candles available for : \n";
    		for (int i=0;i<10;i++)
            { 
                cout<<"Number "<<i<<": ";
                cin>>a[i];
            }
    		int mn=a[1],z=1;
    		for (int i=2;i<10;i++) 
    			if (a[i]<mn) {
    				mn=a[i];
    				z=i;
    			}
    		if (a[0]<mn){
    			mn=a[0];
    			z=0;
    		}

            cout<<"Smallest number not possible: ";

    		if (z==0) {
    			cout<<"1";
    			for (int i=0;i<=mn;i++) 
                    cout<<"0";
    		} 
            else 
                for (int i=0;i<=mn;i++)
                    cout<<z;

            cout<<endl;
    	}

    	return 0;
    } 
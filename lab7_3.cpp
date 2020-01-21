#include <iostream>
using namespace std;
main()
{
    int age;
    double hight,assets;
    cout << "Enter your age : ";
    cin >> age ;
    if (age <= 20)
    {
        cout << "Enter your hight : ";
        cin >> hight;
        if (hight < 160)
        {
            cout << "status = \"UNFRAND\"";
        }
        else
        {
            if (hight < 175)
            {
                cout << "status = \"FRIEND\"";
            }
            else
            {
                cout << "Enter you assets(million) : ";
                cin >> assets;
                if (assets>69)
                {
                    cout << "status = \"MARRIDE\"";
                }
                else
                {
                    cout << "status = \"ONE NIGHT-STAND\"";
                }
                
                
            }
            
            
        }
        
        
    }
    else
    {
    if (age<30)
    {
        cout << "Enter you assets(million) : ";
        cin >> assets;
        if (assets > 10)
        {
            cout << "status = \"BAST FRIEND\"";
        }
        else
        {
            cout << "status = \"UNFRIEND\"";
        }
    }
    else
    {
        cout << "status = \"UNFRIEND\"";
    }  
}
}

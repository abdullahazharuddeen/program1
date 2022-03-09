#include <iostream>
#include <stack>
#include <vector>

using namespace std;

stack <int> Stack1;
vector <int> v;

int main()
{
    int n;
    string str;
while(cin >> str )
{
    if(str=="push")
    {
        scanf("%d",&n);
        Stack1.push(n);
        cout << "ok" << endl;
    }
    else if(str=="pop")
    {

     if(Stack1.size()!=0)
        {
        cout << Stack1.top() << endl;
        Stack1.pop();
        }
        else
        {
            cout << "error" << endl;
        }


    }
    else if(str=="back")
    {

        if(Stack1.size()!=0)
        {
            cout << Stack1.top() << endl;
        }
        else
        {
            cout << "error" << endl;
        }

    }
    else if(str=="size")
    {
        cout << Stack1.size() << endl;
    }
    else if(str=="clear")
    {
        cout << "ok" << endl;
        while(!Stack1.empty())
        {
            Stack1.pop();
        }
    }
    else if(str=="exit")
    {
        cout << "bye" << endl;
        break;
    }

}

}

#include<iostream>
using namespace std;
int main()
{
    int x=1,w,count;
    cin>>w;
    while(x<w)
    {
        if(x%2==0 && (w-x)%2==0)
            {count=1;
            break;}
        else
            count=0;
        x++;
    }
    if(count==1)
        cout<<"YES";
    else
        cout<<"NO";
}

Better code:

#include<iostream>

using namespace std;

int main(){
    //retrying with c++
    int n;
    cin >> n ;

    if(n > 3 && n % 2 == 0) cout << "YES" ;
    else cout << "NO" ;

    return 0;
}

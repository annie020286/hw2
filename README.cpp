#include <iostream>
using namespace std;

int main(){
    int n1 = 0, n2 = 0, n3 = 0, d1 =0, d2=0 ,d3=0;
    int a1 = 0, a2 = 0;
    int output1 = 0, output2 = 0, output3 = 0;
   
    cout << "";
    cin >> n1 >> n2 >> n3 >> d1 >> d2 >> d3 >> a1 >>a2;
    
    if(d1 == a1 || d1 == a2 )
        output1 = n1 ;

    if((d2 == a1) || (d2 == a2))
        output2 = n2;

    if((d3 == a1) || (d3 == a2 ))
        output3 = n3 ;
    
    //ooo
    if(output1 == n1 && output2 ==n2 && output3 == n3){
        if (n1 < n2 && n2 < n3)
            cout << n1 << "," << n2 << ","<< n3 ;
        if (n1 < n3 && n3 < n2)
            cout << n1 << "," << n3 << ","<< n2 ;
        if (n2 < n1 && n1< n3)
            cout << n2 << "," << n1 << ","<< n3 ;
        if (n2 < n3 && n3 < n1)
            cout << n2 << "," << n3 << ","<< n1 ;
        if (n3 < n2 && n2 < n1)
            cout << n3 << "," << n2 << ","<< n1 ;
        if (n3 < n1 && n1 < n2)
            cout << n3 << "," << n1 << ","<< n2 ;
        if(n1 ==n2 ==n3)
            cout << n1 <<"," << n2 << ","<< n3 ;
    }
    //oox
    if(output1 == n1 && output2 ==n2 && output3 ==0){
        if (n1 <= n2 )
            cout << n1 << "," << n2 ;
        if (n2 < n1)
            cout << n2 << "," << n1 ;
    }
    
    //oxx
    if(output1 == n1 && output2 ==0 && output3 ==0){
        cout << n1 ;
    }
    //xoo
    if(output1 == 0 && output2 ==n2 && output3 ==n3){
        if (n3 <= n2 )
            cout << n3 << "," << n2 ;
        if (n2 < n3)
            cout << n2 << "," << n3  ;
    }
    //xxo
    if(output1 ==0 && output2 ==0 && output3 ==n3 ){
        cout << n3 ;
    }
    //xxx
    if(output1 ==0&& output2 ==0 && output3 ==0){
        cout << "-1";
    }
    
    //xox
    if(output1 == 0 && output2 ==n2&& output3 ==0)
        cout << n2;
    
    //oxo
    if(output1 == n1 && output2 == 0 && output3 == n3){
        if (n1 <= n3 )
            cout << n1 << "," << n3 ;
        if (n3 < n1)
            cout << n3 << "," << n1  ;
    }
        
    
           
return 0;

}

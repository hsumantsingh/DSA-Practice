 #include<iostream>
 using namespace std;
 int main(){
      int x;
      cout<<" Number of Row=";
      cin>>x;
      int a=3;
      for (int  i = 1; i <= x; i++){   
        if(i%2!=0) a=1;
        else a=0;
               for (int  j = 1; j <=i; j++){           // method 1
           cout<<a;
           if(a==1)a=0;
           else a=1;
        }  
     cout<<"\n";
    }
 } 


                                                      // method 2
//  #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a Number= ";
//     cin>>n;
//     for(int i=0; i<=n-1; i++){
//         for(int j=0; j<=i; j++){
//             if((i+j)%2==0){cout<<1<<" ";}
//             else{cout<<0<<" ";}
//         }
//         cout<<endl;
//     }
// }


                                                              // output 
// enter a Number= 5
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
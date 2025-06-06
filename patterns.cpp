#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
 int main(){
   
  int n;
  


    do {
        cout << "Choose an option:" <<endl;
        cout << "1. Draw Rectangle" <<endl;
        cout << "2. Draw Right-Angled Triangle" << endl;
        cout << "3. Draw Circle" <<endl;
        cout << "4. Read Saved Info" <<endl;
        cout <<"5. erase the saved data" << endl;
        cout<<"6.exit"<<endl;
        cout << "Enter your choice:" << endl;
        cin >>n;
      if(n==1){
         int l,w;
         cout<<"enter length";
         cin>>l;
         cout<<"enter width";
         cin>>w;
         for(int i =1;i<=l;i++){
            for(int j=1;j<=w;j++){
               cout<<"*";
            
            } cout<<endl;
         }  
         //calculations

          double a=l*w;
            double p= 2*(l+w);
           
            cout<<"area of rectangle is:" << a <<" and perimeter is :" <<p <<endl;

            //saving it
             ofstream file("data.txt", ios::app);
         file <<"shape : rectangle " << " length: "<< l << endl << " ,width : " << w <<endl;
         file.close();
         cout<<"data saved";
      
         
      } 
      else if (n==2){

         cout<<"triangle";
         cout<<"enter hypotaneous";
         int p;
         cin>>p;

         int h;
         cout<<"enter height :";
         cin>>h;
         for(int i=1;i<=h;i++ ){

            for(int j =1;j<=i;j++){
            cout<<"*";
         } cout<<endl;
       }  
         double area=0.5*h*h;
         double perimeter=h+h+p;

         cout<<"area is :"<< area <<" and perimeter is "<< perimeter<<endl;

         //saving 

         ofstream file("data.txt",ios::app);
         file <<" shape: triangle " << " area is "<<area <<" and perimeter is " <<perimeter << "hypotaneous given was " <<p <<endl;
         file.close();
         cout<<"data saved";
      }
      else if (n==3){
         cout<<" circle " <<endl;
         cout<<" enter its radius :";
         int r ; 
         cin>>r;

         for(int x=-10 ;x<=10;x++){
            for(int y=-10;y<=10;y++){

              float dis= sqrt(x*x +y*y);
              if(abs(dis-r)<0.5)
              cout<<"*";
            else 
               cout<<" ";
            } 
            cout<<endl;
           
         }  //cal and save

           float area = 3.14*r*r;
          float circuim=2*3.14*4;
          cout <<" area of circle is "<< area << "and circuimference is " << circuim <<endl;

          ofstream file("data.txt",ios::app);
          file <<" shape : circle and radius entered are :" << r << circuim <<endl;
          file.close();
          cout<<"data saved";
         
      }  
            else if (n==4) {

                 ifstream file("data.txt");
                 string line;
                cout << "Stored Shape Data:";
                while (getline(file, line)) {
                cout << line << "\n";
                 }
                  file.close();
            }
            else if(n==5){
              ofstream file("data.txt",ios::trunc);
              file.close();
              cout<<"data erased"<< endl;
              } cout<<endl;
            

   } while(n !=8);
          return 0;
      
}
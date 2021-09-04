#include<iostream>
#include<cmath>
#include<iomanip>
 using namespace std;

 int main()
 {
     double x = 0.0;
     double y = 0.0;
     double limInf = 0.0;
     double limSup = 1.0;
     double erro   = 0.001;
     double x_raiz = 0.0;
     int n;
     
     
     
	 cout << "Digite o limite inferior: ";
     cin >> limInf;
     cout << "Digite o limite superior: ";
     cin >> limSup;
     cout << "Digite a estimativa de erro: ";
     cin >> erro;


            x=limInf;

            double y_i = x*x*x -9*x+3;

             x=limSup;

            double y_f = x*x*x-9*x+3;

            if(y_i*y_f>0){ cout << "Neste intervalo nao tem raiz: \n"; }
            
            if(y_i*y_f<0){cout << "Neste intervalo tem pelo menos uma raiz: \n";}

            double a = limInf;
            double b = limSup;


          int contador = 0;
     
         do{
         
             
            
             double x_m= (a+b)/2;
             cout << "iteracao " << contador << setprecision(5) << " - x_medio  = " << setprecision(10) << x_m << endl;

             x=x_m;

             

             y=x*x*x-9*x+3;

             if(y*y_i>0){ a=x_m; }

             if(y*y_f>0){ b = x_m;}
             
             contador ++;
             
             x_raiz = x_m;

             
             
         }while(abs(b-a)>erro);
         
         cout << "x_raiz = " << x_raiz << " raiz da funcao: \n";
         return 0;
     }

//Nicorici Adrian, 22.03.2014
//Se citeste de la tastatura un sir de numere intregi pozitive pana la intalnirea lui 0. Sa se numere multiplii lui 3 si sa se afiseze numarul obtinut.

#include <iostream>
using namespace std;

void sir();

void sir(){
	int i=0,sir[1000],impar=0,n=1,c;
	cout << "Introduceti numere pozitive.Pt terminare introduceti 0." << endl;
	cin >> sir[i];
	c=sir[i];
	i++;
	while(c!=0){
		cin >> sir[i];
		if(sir[i]>5){
			if(sir[i]%3==0){
				impar++;
			}
		}
		else{
			if(sir[i]==1)
				impar++;
			if(sir[i]==3)
				impar++;
		}
		c=sir[i];
		i++;
	}
	cout << "Ati introdus " << impar << " multiplii de 3" << endl;
}

int main(){
	sir();
	system("pause");
	return 0;
}
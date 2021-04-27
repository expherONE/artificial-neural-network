#include<iostream>
#include<vector>
using namespace std;


int main(){
//neuronas
double neuron1;
double neuron2;
double neuron3;
double neuron4;

//entradas
double entrada1;
double entrada2;

//pesos
//entradas
double weight_input_neuron1=1;
double weight_input_neuron2=1;
//interconexiones
double weight_neuron1_neuron3=1;
double weight_neuron1_neuron4=1;
double weight_neuron2_neuron3=1;
double weight_neuron2_neuron4=1;
//salidas
double weight_neuron3_output=1;
double weight_neuron4_output=1;

//salidas
int salida1;
int salida2;

//------------------------------------------------------

cout<<"************************************"<<endl;
cout<<"ANN-artificial-neuron"<<endl;
cout<<"MODEL - Artificial Neuron of McCulloch and Pitts"<<endl;
cout<<"Funcionamiento : "<<endl;
cout<<"Se esperan 2 entradas y algunas combinaciones obtendran salidas"<<endl;
cout<<"code of Moises Humberto Olguin Mtz"<<endl;
cout<<"************************************"<<endl<<endl;
cout<<"Escribe las entradas y presiona enter"<<endl;
cout<<"--------------------------------------"<<endl;
cout<<"Ingresa la entrada 1"<<endl;
cin >> entrada1;
cout<<"Ingresa la entrada 2"<<endl;
cin >> entrada2;
cout<<"- - - - - - - - - - - - - - - - - -"<<endl;

cout<<"------lista de pesos------"<<endl;
cout<<"weight_input_neuron1 = ",cout<<weight_input_neuron1<<endl;
cout<<"weight_input_neuron1 = ",cout<<weight_input_neuron2<<endl;
cout<<"weight_neuron1_neuron3 = ", cout<<weight_neuron1_neuron3<<endl;
cout<<"weight_neuron1_neuron4 = ", cout<<weight_neuron1_neuron4<<endl;
cout<<"weight_neuron2_neuron3 = ", cout<<weight_neuron2_neuron3<<endl;
cout<<"weight_neuron2_neuron4 = ", cout<<weight_neuron2_neuron4<<endl;




//neuron 1
cout<<"------test de neuronas------"<<endl;

if (entrada1!=0)
{
   neuron1 = weight_input_neuron1 * entrada1;
   cout<<"neurona 1 = ",cout<<neuron1<<endl;
}

//neuron2
if (entrada2!=0)
{
    neuron2 = weight_input_neuron2 * entrada2;
    cout<<"neurona 2 = ",cout<<neuron2<<endl;
}

//neuron3
if (neuron1!=0 || neuron2!=0)//si alguno de los dos es diferente de 0 entonces ejecutar
{
    neuron3 = (neuron1 * weight_neuron1_neuron3) + (neuron2 * weight_neuron2_neuron3);
    cout<<"neurona 3 = ", cout<<neuron3<<endl;
}

//neuron4
if (neuron4!=0)
{
    neuron4 = (neuron1 * weight_neuron1_neuron4) + ( neuron2 * weight_neuron2_neuron4);
    cout<<"neurona 4 = ", cout<<neuron4<<endl;
}
cout<<"************************************"<<endl<<endl;
cout<<"------Con las entradas------"<<endl;
cout<<"entrada 1 = ",cout<<entrada1<<endl;
cout<<"entrada 2 = ",cout<<entrada2<<endl;
cout<<"------Las salidas resultan------"<<endl;

//salida1

if (neuron4!=0)
{
   salida1 = neuron4 * weight_neuron4_output;
   cout<<"el total de la salida 1 es = ", cout<<salida1<<endl;
}

//salida 2
if (neuron3!=0)
{
   salida2 = neuron3 * weight_neuron3_output;
   cout<<"el total de la salida 2 es = ", cout<<salida2<<endl;
}

}
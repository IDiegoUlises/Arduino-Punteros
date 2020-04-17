
void setup()
{
 //Inicia el puerto serial
 Serial.begin(9600);
  
//Crea una variable
int variable = 3;

//Crea un puntero
int *puntero; 

//Puntero a punta a una direccion de memoria
puntero = &variable;

//El puntero  cambia el valor de una variable selecionada
*puntero = 8; 
 
//Muestra la variable
 Serial.println(variable);
}

void loop()
{
}

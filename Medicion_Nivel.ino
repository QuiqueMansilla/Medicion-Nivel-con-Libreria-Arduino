//Autor Quique Mansilla
//Escuela Tecnica N°2 Obispo Colombres
//Medicion de nivel de agua en %, de un valde usando sensor ultrasonico usando funciones definidas por el usuario

const int EchoPin = 11;
const int TriggerPin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(TriggerPin, OUTPUT);
  pinMode(EchoPin, INPUT);
}

void loop() {
  float Distancia = ping(TriggerPin, EchoPin); //Se llama a la funcion "ping" definida al final y guardo el valor que devuelve dicha funcion en variable Distancia
  imprimeValor(Distancia); //Se llama a la funcion "inprimeValor" que muestra en Monitor serial el valor de la distancia (cm)
  long int Nivel = nivel(Distancia);   //Se llama a la funcion "nivel" definida al final y guardo el valor que devuelva esta funcion en variable "Nivel"
  imprimeValor1(Nivel); //Se llama a la funcion "inprimeValor1" que muestra en Monitor serial el valor del nivel (%)
  delay(1000);
}

  

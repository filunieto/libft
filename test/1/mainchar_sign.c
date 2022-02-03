#include <iostream>
using namespace std;
int main(int argc, char * argv[])
{
	// El número positivo se almacena en la computadora como código fuente
	// y el número negativo se almacena como complemento
	 // En el proceso de asignación, el contenido almacenado en la computadora
	 // se asigna directamente a la variable correspondiente
	 // Solo un número con signo se tratará como un complemento directamente, y luego menos uno e invertido
	 // Al menos me parece así. Luego mire su señal.
	 // Los números sin signo se procesarán directamente de acuerdo con el código fuente,
	 // porque no hay bit de signo, traducido directamente.
 
 
	 // Para una computadora de números negativos, almacena el código de complemento,
	 // y para una computadora de números positivos, almacena el código fuente
	char a = 0x81;
	/*
	 // No hay coincidencia aquí, porque 0x81 almacena el código fuente en la computadora 1 0 0 0 0 0 0 1
	 La asignación a un carácter firmado se tratará como un complemento de uno y se reducirá en uno primero
	 1 0 0 0 0 0 0 0 0, y luego invierta el bit de signo.
	1 1 1 1 1 1 1 1，
	 Luego obtenga el valor analítico -127, obviamente -127 y +129 obviamente no son iguales.
	 Al mismo tiempo, debe tenerse en cuenta que 10000001 se almacena en la dirección de a,
	 // pero esto se analiza en complemento
	*/
	if (a == 0x81)
	{
		printf("you are matched!!!\n");
	}
	
	printf("a is %d\n", a);
	 // Al asignar un valor a un carácter sin firmar, almacenará directamente el valor de a en la memoria
	 // 10000001, y después de asignar a unsigned char, después de unsigned char será
	 // Se analiza el código fuente y se restaura el 129 original.
	unsigned char w = a;
	printf("w is %d\n", w);
 
	/*
	 -1 El valor almacenado en la computadora según el número de complemento es 11111111
	 Después de asignar este valor a un carácter sin firmar, se procesará de acuerdo con el código fuente.
	 Ningún bit de signo se traduce en 255
	*/
	char testc = -1;
	unsigned char test_uc = testc;
	printf("test_uc =%d\n", test_uc);
	return 0;
}
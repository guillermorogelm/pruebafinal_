Prueba Final - Guillermo Rogel - 00345296

Seccion 1
1. ¿Cual fue la principal contribucion de Ada Lovelace a la computacion?
B

2. ¿Que significa que C++ sea un lenguaje compilado?
B

3. ¿Cual es el orden correcto del proceso de compilacion en C++?
B

4. ¿Cual es la diferencia entre int y double en C++?
B

5. ¿Por que la expresion 7 / 2 da como resultado 3 y no 3.5 en C++?
B

6. ¿Para que sirve using namespace std;?
B

7. ¿Que hace el siguiente codigo?
B

8. En un bucle for anidado donde el externo va de 0 a 4 (5 iteraciones) y el interno va de 0 a 2
(3 iteraciones), ¿cu´antas veces se ejecuta el c´odigo dentro del bucle interno?
C

9. Si declaras un arreglo bidimensional int matriz[3][4];, ¿cu´al es el ´ındice del ´ultimo ele-
mento v´alido?
B

10. Completa los espacios en blanco para recorrer e imprimir todos los elementos de int
matriz[3][4];:
for ( int i = 0; i < ___ ; i ++) {
for ( int j = 0; j < ___ ; j ++) {
cout << matriz [ i ][ j ] << " " ;
}
}
B

11. Si tienes int x = 10; y int* ptr = &x;, ¿qu´e representa *ptr?
B

12. ¿Que debe ir en el espacio en blanco para que la funci´on modifique el valor original?
C

13. ¿Cual es la diferencia entre pasar por valor y pasar por referencia?
B

14. En una clase de C++, ¿qu´e significa private?
B

15. ¿Para qu´e sirve un constructor en una clase?
B


### Parte B
### Pregunta 1
Un algoritmo es una secuencia de pasos ordenados y finitos para resolver un problema. Para resolver un problema de programación primero entiendo qué se pide entradas y salidas esperadas, luego pienso la lógica en pasos simples, la escribo en pseudocódigo, la traduzco a C++, compilo y pruebo con distintos casos.

### Pregunta 2
Un puntero es una variable que almacena una dirección de memoria en lugar de un valor directo. El operador & obtiene la dirección de una variable, y el operador * accede al valor almacenado en esa dirección. Sirven para modificar variables desde funciones, manejar memoria dinámica y trabajar con arreglos eficientemente.


### Pregunta 3
Un arreglo es una colección de elementos del mismo tipo almacenados en posiciones contiguas de memoria. Se declara así: int numeros[5]

Se accede a sus elementos mediante índices que empiezan en 0, por ejemplo numeros[0] es el primer elemento y numeros [4] el ultimo


### Pregunta 4
El alcance de una variable define en qué parte del programa puede usarse. Una variable local se declara dentro de una función y solo existe mientras esa función se ejecuta. Una variable global se declara fuera de todas las funciones y puede accederse desde cualquier parte del programa, aunque su uso excesivo puede generar errores difíciles de rastrear.

### Pregunta 5
Usamos private para proteger los datos internos de una clase y public para exponer solo los métodos necesarios para interactuar con ella. Esto es el encapsulamiento: ocultar la implementación interna y controlar el acceso a los datos, evitando que código externo modifique el estado del objeto de manera no controlada.

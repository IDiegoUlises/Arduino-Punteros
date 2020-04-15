# Arduino Punteros

**Declarar un puntero** 
```c++
int variable = 3;
int *puntero;
```

**Apuntar una direccion de memoria de una variable**
```c++
puntero = &variable;
```

**Cambiar el valor de una variable**
```c++
*puntero = 8;
``` 

## Ver la direccion RAM de una variable
```c++
 int variable = 3;
 Serial.println((int)&variable);
```

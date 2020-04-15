# Arduino Punteros


Un puntero obtiene la direccion de la variable en la memoria ram como 0x312 - informacion no verificada, tambien  se podra obtener los punteros de la memoria eprom? o son solo datos de las memoria ram los punteros... y ademas si con punteros de puede modificar una constante porque es curiosio una constante definida nunca puede ser modifica y si se intenta modificar con un puntero??? que pasaria.
NO


dato de puntero: igual como la suma + ya la resta - tiene su operador en los punteros tiene su propio operador * el asterico y el % o & no me acuerdo cual era el otro pero tiene un operador para realizar operaciones ??? que tipo de operaciones seran??? si es solo ver la direccion de la memoria??
SI

**Declarar un puntero** 
```c++
int variable;
int *Puntero;
```

**Apuntar una direccion de una variable**
```c++
puntero = &variable;
```

**Cambiar el valor de una variable**
```c++
*puntero = 9;
``` 

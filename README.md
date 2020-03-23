# Arduino-Punteros

//Dato: Un puntero es un tipo de dato que contine
//una direccion de memoria.
//En el ejemplo la "num" tiene la direccion
//fisica en donde se almacena la variable "num"
//luego la variable "ptrNum" apunta la direccion
//de memoria donde esta almacenada la variable num
//Lo que hace es modificar la variable llamada "num"
//Que su valor es 5 y la modifica para que sea el
//valor 7 se puede modificar cualquier variable
//que no este protegida arduino no tiene memoria
//protegida porque no tiene sistema operativo
//Tambien se puede elegir la posicion de memoria
//que apuntara el puntero
//Se puede modificar cualquier tipo de valor
//char, int, float, array, bytes, bit, todos

         //es necesario convertir el valor
             //porque el compilador dice que
                          //Es codigo inseguro y debe 
                           //convertir en un tipo de variable
                           //por eso se usa (int) para 
                           //convertir el valor
                           //y luego se utiliza
                           //"&" que es para ver
                           //la posicion de memoria
                           //que se encuentra la variable
                           //actualmente
                           
                           

Un puntero obtiene la direccion de la variable en la memoria ram como 0x312 - informacion no verificada, tambien  se podra obtener los punteros de la memoria eprom? o son solo datos de las memoria ram los punteros... y ademas si con punteros de puede modificar una constante porque es curiosio una constante definida nunca puede ser modifica y si se intenta modificar con un puntero??? que pasaria.

Dato curioso: la memoria eprom guarda los datos en la misma posicion de memoria en toda su vida util pero la memoria ram del arduino cada que vez que es reiniciado la memoria ram se borra y las variables se crean en nuevas posiciones de memoria.

dato de puntero: igual como la suma + ya la resta - tiene su operador en los punteros tiene su propio operador * el asterico y el % o & no me acuerdo cual era el otro pero tiene un operador para realizar operaciones ??? que tipo de operaciones seran??? si es solo ver la direccion de la memoria??

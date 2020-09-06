# C++_PDC7

## :copyright: Autor

- :camera: <img src="https://avatars1.githubusercontent.com/u/64861402?s=400&u=0477a114ca729a44357ba5b4a5381816c4d4ea92&v=4" width="160px"> 
- :woman: **Mónica Valeria Castillo**
- :e-mail: monicastillo@unitec.edu
- :link: [github.com/monicastle](https://github.com/monicastle)
- :calendar: 30/08/2020

---

## :dart: Objetivos

![](Images/1C++.png)

Punto de Control #06 en **C++** diseñado para demostrar:

1. :nut_and_bolt: La diferencia en el uso de:
   - **static_cast**
   - **dynamic_cast**
2. :books: La implementación y mejora de:
    - **Funciones Virtuales** 
    - **Typeid**
    - **Sobrecarga de Operadores**
3. :open_file_folder:La organización de:
   - Código (**Visual Studio Code** y Repositorio en **Github**)
   - Imágenes (Extensión **Polacode** de **VSC**)
   - Formato (**Markdown** en **VSC**)

---

## :black_circle: Static_Cast

![](Images/Static_Cast.png)

Este programa utiliza el static_cast para obtener el valor de una variable, dependiendo del casteo. 

## :small_blue_diamond: Salida - Static_Cast

![](Images/Salida-Static_Cast.jpeg)

La salida es el valor de 3 diferentes tipos de variables (char, int y float), los cuales se castean a el valor deseado e imprimiendo dicho valor.

---

## :brown_circle: Static_Cast vs Dynamic_Cast 1/3

![](Images/Static_CastvsDynamic_Cast1.png)

Este programa intenta utilizar el static_cast para castear una variable en una clase. Se puede notar que un caso funciona y el otro no compila, esto es debido a que la variable X no es clase madre ni hija a diferencia que la variable B, por lo que al ser madre de la clase D si es posible castearse. 

## :small_blue_diamond: Salida - Static_Cast vs Dynamic_Cast 1/3

![](Images/Salida-STvsDC1.jpeg)

Al no poder compilarse muestra que el casteo es invalido y no puede ser realizado.

---

## :purple_circle: Static_Cast vs Dynamic_Cast 2/3

![](Images/Static_CastvsDynamic_Cast2.png)

Este programa intenta utilizar el dynamic_cast para castear una variable en una clase, pero debido a que el dynamic_cast se utiliza mas que todo para el polimorfismo no permite hacer el casteo.

## :small_blue_diamond: Salida - Static_Cast vs Dynamic_Cast 2/3

![](Images/Salida-STvsDC2.jpeg)

Al no poder compilarse muestra que el casteo no puede ser realizado, ya que el tipo de fuente no es polimorfico.

---

## :yellow_circle: Static_Cast vs Dynamic_Cast 3/3

![](Images/Static_CastvsDynamic_Cast3.png)

Este programa intenta utilizar el dynamic_cast para castear una variable en una clase, al tener una función virtual permite que el programa se compile correctamente. No cuenta con una salida.

---

##  :orange_circle:  Funciones Virtuales

![](Images/FuncionesVirtuales.png)

Este programa utiliza las funciones virtuales, las cuales se declaran dentro de una clase base y se sobreescriben por una clase derivada.

## :small_blue_diamond: Salida - Funciones Virtuales

![](Images/Salida-FuncionesVirtuales.jpeg)

La salida del programa muestra lo que imprimen las diferentes funciones virtuales "fun".

---

## :green_circle: Typeid

![](Images/Typeid.png)

Este programa utiliza el Typeid para obtener un tipo de variable (char, string, int, double, float, etc.) o el nombre ese tipo utilizando el .name.

## :small_blue_diamond: Salida - Typeid

![](Images/Salida-Typeid.jpeg)

La salida muestra el nombre de las diferentes variables usando el typeid, tambien hace la comparación entre un string y una variable de tipo string.

---

## :large_blue_circle: Sobrecarga de Operadores 1

![](Images/SobrecargadeOperadores1.png)

Este programa utiliza la sobrecarga de operadores, con los siguientes operadores "<<" y ">>".

## :small_blue_diamond: Salida - Sobrecarga de Operadores 1

![](Images/Salida-SDO1.jpeg)

La salida consiste en ingresar un número telefonico de la siguiente manera: (504) ####-####, e imprime dicho número con la sobrecarga de operadores.

---

## :red_circle: Sobrecarga de Operadores 2

![](Images/SobrecargadeOperadores2.png)

Este programa utiliza la sobrecarga de operadores, con los siguientes operadores "++" y "--".

## :small_blue_diamond: Salida - Sobrecarga de Operadores 2

![](Images/Salida-SDO2.jpeg)



---

## :computer: Código

- :blue_book: [C_PDC_06](https://github.com/monicastle/C_PDC_06)

---
## :wrench: Herramientas
- :package: [Visual Studio Code](https://code.visualstudio.com/)
- :camera: [Polacode-2020 v0.5.2](https://github.com/jeff-hykin/polacode)
- :notebook: [Markdown Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
- :smile: [Emoji Cheat Sheet](https://www.webfx.com/tools/emoji-cheat-sheet/)

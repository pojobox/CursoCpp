# Curso de C++ Básico a Avanzado

¡Bienvenidos al repositorio oficial del **Curso de C++ Básico a Avanzado**! 🎉 Aca vas a encontrar el código fuente y los ejemplos prácticos utilizados a lo largo del curso. Este repositorio está diseñado para complementar los videos de YouTube y facilitar tu aprendizaje de C++ desde cero hasta un nivel avanzado.

## 🚀 ¿Qué vas a encontrar en este repositorio?

### 📚 Contenido del Curso
El curso está estructurado en clases, cada una diseñada para cubrir conceptos clave de C++ de forma progresiva.

### Modulo Básico.

### 🗂 Clases con Código Incluido
- **Clase 01: Instalación del IDE y Hola Mundo**
  - Descarga e instalación de Visual Studio 2022 Community Edition.
  - Configuración de lenguaje C++ 20 para aproveechar las caracteristicas en un futuro.
  - Creación de tu primer archivo CPP.
  - Introducción a la estructura básica de C++.
  
- **Clase 02: Tipos de datos**
  - Impresion en pantalla de los diferentes tipos de datos
  - Rango de valores
  - signed vs unsigned
  - Utilización de la función sizeof.

- **Clase 03: Operadores**
    - Aritméticos
    - Bit a Bit
    - Utilización de #include <bitset> para visualizar en consola numeros en binario
    - pequeño avance de un condicional if.

 - **Clase 04: Variables y Casting**
   - Creación de variables.
   - Inicialización de las mismas.
   - Casting implícito.
   - Casting explícito.
  
 - **Clase 05: Flujos de entrada, salida y manipuladores**
    - Cómo usar cin y cout para manejar la entrada y salida de datos.
    - Diferencias entre std::endl y \n para hacer saltos de línea.
    - Manipuladores como setw(), setprecision(), fixed y scientific.
    - Cómo restaurar los manipuladores a sus valores por defecto.
      
 - **Clase 06: Control de flujo 1**
    - Condicionales en C++ (if, else if, else).
    - Switch-case para manejar múltiples opciones.
    - Operadores Relacionales y Lógicos.
    - Ejercicios prácticos para poner en práctica lo aprendido.

 - **Clase 07: Control de flujo 2**
    - Bucles:
    - For
    - While
    - Do-while
    - Break
    - Continue
    - Porque no utilizar goto
    - Ejercicio: Creamos una calculadora básica poniendo en práctica todo lo aprendido en el módulo básico!!.
    
- **Quiero felicitarte porque acabas determinar el primer módulo de este curso de c++, seguí practicando y jugando con lo aprendido y yo te veo en el próximo módulo ;-).**

  ### BIENVENIDOS AL MODULO INTERMEDIO!!!

  - **Clase 08: Introducción a funciónes**
    - Estructura básica de una función en C++.
    - Cómo declarar y definir funciones.
    - Llamada a funciones desde main.
    - Ejercicio: Función para sumar dos números.

  - **Clase 09: Parámetros en funciónes**
    - Parámetros por valor: Cómo funcionan y cuándo utilizarlos.
    - Parámetros por referencia: Ventajas y uso en funciones.
    - Funciones con void: Cuando no necesitamos que devuelvan un valor.
    - Ejercicio: Función swap para intercambiar valores.
   
  - **Clase 10: Parámetros default en funciónes**
    - Cómo declarar funciones con parámetros por defecto.
    - Cuándo y por qué usar valores por defecto.
    - Reglas y restricciones en el uso de parámetros opcionales.
    - Ejercicios:
    - Crear una función calcularArea()  que reciba la base y la altura de un rectangulo, pero si no se proporciona la altura , que utilice el valor por defecto 1
    - Crear una función calcularPropina() que reciba el monto de una cuenta y un porcentaje opcional de propina.
   
  - **Clase 11: Sobrecarga en funciónes**
    - ¿Cómo funciona la sobrecarga de funciones en C++?
    - Ventajas y reglas de la sobrecarga.
    - Ejemplos prácticos:
    - Ejemplo 1: Sobrecarga con diferente número de parámetros.
    - Ejemplo 2: Sobrecarga con diferentes tipos de parámetros.
    - Ejercicios prácticos:
    - Ejercicio 1: Crear una función mostrarDatos() sobrecargada para recibir uno o dos números enteros.
    - Ejercicio 2: Crear una función multiplicar() sobrecargada para multiplicar dos enteros o un entero y un decimal.
   
  - **Clase 12: Arrays**
    - ¿Cómo funcionan los arrays en C++?
    - Diferencia entre arrays unidimensionales y bidimensionales.
    - Cómo recorrer y manipular arrays.
    - Ejemplos en código:
    - Ejemplo 1: Declaración y recorrido de un array unidimensional.
    - Ejemplo 2: Creación y visualización de una matriz bidimensional.
    - Ejercicios prácticos:
    - Ejercicio 1: Crear un programa que use un array unidimensional para almacenar 5 números y calcular su suma.
    - Ejercicio 2: Crear un programa que almacene una matriz 3x3 e imprima su transpuesta (intercambiando filas por columnas).

  - **Clase 13: Cadenas de texto**
    - Qué es una cadena de caracteres y cómo se representa internamente.
    - Cómo ingresar texto por consola usando cin y getline.
    - Diferencias entre char[] y std::string.
    - Métodos útiles como .length(), .substr(), .append(), .find() y comparación con ==.
    - Ejemplos prácticos desarrollados:
    - Leer el nombre y contar la cantidad de letras con char[] y con std::string.
    - Usar .substr() para extraer parte de una frase.
    - Concatenar frases con .append().
    -  Buscar caracteres en una cadena con .find().
    - Comparar dos cadenas con == (std::string) y strcmp (char[]).
    - Ejercicios resueltos paso a paso: 
    - Ejercicio 1: Contar caracteres de una palabra con char[].
    - Ejercicio 2: Comparar dos palabras con strcmp.

  - **Clase 14: Structs**
    - Qué es un struct en C++
    - Cómo declarar y utilizar una estructura
    - Array de estructuras
    - Ventajas de usar struct
    - Ejercicios prácticos:
    - Crear un registro de estudiantes
    - Pasar una estructura a una función para mostrar sus datos

  - **Clase 15: Enums**
    - Qué es una enumeración (enum) en C++
    - Cómo declarar y utilizar un enum
    - Cómo usarlo en estructuras de control como switch
    - Ventajas de utilizar enum en tus programas
    - Ejercicios prácticos: 
    - Crear un semáforo con enum y switch
    - Mostrar permisos según tipo de usuario usando enum y if else

  - **Clase 16: Introduccion a punteros**
    - Qué es un puntero
    - Cómo declarar y acceder a punteros
    - Operadores & y * (dirección y desreferenciación)
    - Cómo modificar datos usando punteros
    - Errores comunes al usarlos
    - Ejercicios prácticos: 
    - Intercambiar valores con punteros
    - Sumar dos variables usando punteros
   
  - **Clase 17: Uso de new y delete en C++ - Memoria Dinámica** 09/05/25 18:00 pm ARG.
    - Qué es la memoria dinámica en C++
    - Cómo usar new para reservar memoria
    - Cómo usar delete para liberar memoria
    - Cuándo y por qué usar memoria dinámica
    - Diferencias entre memoria estática y dinámica
    - Ejercicios prácticos:
    - Crear un número dinámico y mostrarlo
    - Crear un arreglo dinámico y mostrar la suma total


*(A medida que avancemos en el curso, se añadirán más clases con ejemplos y ejercicios prácticos.)*
*Vamos a estar subiendo cada nueva clase los dias Viernes por la tarde, No te la pierdas!!*

---

## 📥 Cómo usar este repositorio
1. **Navega por las carpetas de cada clase** para acceder al código correspondiente.
2. **Sigue las instrucciones en los videos** para poner en práctica lo aprendido.
3. **Implementa los ejemplos y ejercicios** directamente en tu editor de código.

---

## 📹 Curso en YouTube
¡Sigue el curso completo en mi canal de YouTube!  
🔗https://www.youtube.com/watch?v=7zyqUDVXO8Y&list=PLa_oI_dNTkD2HaqpO-hwN7sjO_BfhLYGH

🔔 **¡No olvides suscribirte para no perderte ninguna clase!**

---

## 📧 Contacto
Si tenés dudas o sugerencias:
- Dejanos tu comentario en los videos.  

¡Estaré encantado de ayudarte! 😊

---

### 🌟 ¡Gracias por aprender conmigo!
Espero que este curso sea una guía útil en tu camino para dominar C++. 💻✨

**Te saluda tu instructor Jonathan!**

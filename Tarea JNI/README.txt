Este programa solo sirve en computadoras de 32 bits con windows ya que el dll fue diseñado para esta arquitectura.
Para compilar:
Es necesario tener instalado un jdk y gcc.

Los siguientes pasos se realizan desde la línea de comandos.

Pasos de Compilacion en jdk: 
	javac Calculator.java
	javah Calculator

Pasos Siguientes en gcc:
	gcc -c -I"%JAVA_HOME%\include" -I"%JAVA_HOME%\include\win32" Calculator.c
	gcc -Wl,--add-stdcall-alias -shared -o calldll.dll Calculator.o

Pasos Siguientes en jdk:
	javac CalculatorUI.java

Por Ultimo:
	java CalculatorUI
	
	

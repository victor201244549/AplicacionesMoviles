import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Calculator {
   static {
      System.loadLibrary("caldll"); // Load native library at runtime
                                   // hello.dll (Windows) or libhello.so (Unixes)
   }
	
	public Calculator()
	{
	
	}
   // Declare a native method sayHello() that receives nothing and returns void
   public native int add(int number1,int number2);
   public native int rest(int number1,int number2);
   public native int divide(int number1,int number2);
   public native int multiply(int number1,int number2);
}
import java.util.Scanner;
public class EJERCICIO5 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int numero;
		do {
			System.out.println("Ingrese un numero del 1 al 10: ");
			numero = scanner.nextInt();
		}while(numero > 10 || numero < 1);
		
		System.out.println("La tabla de multiplicacion del numero " + numero + " es: ");
		
		for(int i = 1; i <= 10; i++) {
			System.out.println(numero + "x" + i + " = " + (numero * i));
		}
	}
}

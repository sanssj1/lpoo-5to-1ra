import java.util.Scanner;

public class EJERCICIO3 {
	public static boolean esPrimo(int numero) {
	    if (numero <= 1) return false;
	    for (int i = 2; i <= Math.sqrt(numero); i++) {
	        if (numero % i == 0) {
	            return false;
	        }
	    }
	    return true;
	}
	public static void main(String[] args) {
		int numero;
		Scanner scanner = new Scanner(System.in);
		do {
			System.out.print("Ingrese un numero: ");
			numero = scanner.nextInt();
		}while(!(numero > 100 && esPrimo(numero)));
		scanner.close();
	}
}

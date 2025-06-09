import java.util.Scanner;
public class EJERCICIO4 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int numero;
		do {
			System.out.print("Ingrese un numero positivo: ");
			numero = scanner.nextInt();
		}while(numero < 0);
		
		int sumaPares = 0;
		int sumaImpares = 0;
		
		for(int i = 1; i <= numero; i++) {
			if(i % 2 == 0) {
				sumaPares += i;
			}
			else {
				sumaImpares += i;
			}
		}
		
		System.out.println("Suma numeros pares: " + sumaPares);
		System.out.println("Suma de numeros impares: " + sumaImpares);
		
	}
}

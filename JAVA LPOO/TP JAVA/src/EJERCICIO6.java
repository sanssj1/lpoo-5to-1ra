import java.util.Scanner;
public class EJERCICIO6 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
        
		System.out.print("Ingrese una palabra o frase: ");
        String texto = scanner.nextLine();
        
        String textoInv = "";
        
        for(int i = texto.length() - 1; i >= 0; i--){
        	textoInv += texto.charAt(i);
        }
        
        System.out.println(textoInv);
        
	}
}

public class EJERCICIO2 {
	public static boolean esPrimo(int numero) {
	    if (numero <= 1) return false;
	    for (int i = 2; i <= Math.sqrt(numero); i++) {
	        if (numero % i == 0) {
	            return false;
	        }
	    }
	    return true;
	}
	public static String obtenerDivisores(int numero) {
		StringBuilder divisores = new StringBuilder();
		for(int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                if (divisores.length() > 0) {
                	divisores.append(", ");
                }
            	divisores.append(i);
                }
	}
		return divisores.toString();	
	}
	public static void main(String[] args) {
		for (int i = 50; i<100; i++) {
			if(esPrimo(i) == true) {
				System.out.println("Primo");
			}
			else {
				System.out.println(i + ": " + obtenerDivisores(i));
				}
			}
		}
	}

import java.util.Scanner;

public class Travel {
	int start;
	int end;
	int count = 0;
	int[] arr = new int[10];
	int[] a = new int[10000];
	int[] Prime = new int[10000];
	
	public Travel() {
		
	}
	
	public void setPrime() {
		for(int i = 2; i<10000; i++)
			a[i] = i;
		for(int i = 2; i<10000; i++) {
			if(a[i] == 0)
				continue;
			for(int j = i + i; j<10000; j+=i) {
				a[i] = 0;
			}
		}
		for(int i = 2; i<10000; i++)
			if(a[i] != 0)
				Prime[i] = i;
	}
	
	public void 
	
	
	public static void main(String[] args) {
		Travel travel = new Travel();
		Scanner sc = new Scanner(System.in);
		travel.start = sc.nextInt();
		travel.end = sc.nextInt();
		travel.setPrime();
		
	}
}

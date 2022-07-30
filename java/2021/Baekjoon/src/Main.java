import java.util.Scanner;

public class Main {
	int n;
	int[] arr;
	
	public Main() {
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		arr = new int[n];
		for(int i = 0; i<n; i++)
			arr[i] = sc.nextInt();
		sort();
		for(int i = 0; i<n; i++)
			System.out.println(arr[i]);
	}
	
	public void sort() {
		int least;
		int temp;
		for(int i = 0; i<n; i++) {
			least = i;
			for(int j = i+1; j<n; j++) {
				if(arr[least] > arr[j])
					least = j;
			}
			temp = arr[least];
			arr[least] = arr[i];
			arr[i] = temp;
		}
	}
	
	public static void main(String[] args) {
		new Main();
	}
}

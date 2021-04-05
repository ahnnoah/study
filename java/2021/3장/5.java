import java.util.Scanner;

public class practice {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int arr[] = new int[10];
		System.out.println("정수를 입력하세요>>");
		for(int i = 0; i<10; i++) {
			arr[i]=sc.nextInt();
		}
		int least, tmp;
		for(int i = 0; i<10; i++) {
			least=i;
			for(int j = i+1; j<10; j++) {
				if(arr[least]>arr[j])
					least=j;
			}
			tmp = arr[least];
			arr[least] = arr[i];
			arr[i] = tmp;
		}
		for(int i = 0; i<10; i++) {
			System.out.println(arr[i]+" ");
		}
		
		sc.close();
	}
}

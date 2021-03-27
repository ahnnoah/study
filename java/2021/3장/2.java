package practice;
import java.util.Scanner;

public class practice {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("정수 10개 입력>>");
		int num[] = new int[10];
		for(int i = 0; i<10; i++) {
			num[i] = scanner.nextInt();
		}
		for(int i = 0; i<10; i++) {
			if(num[i]%3==0)
				System.out.println(num[i]+"  ");
		}
		
		scanner.close();
	}
}

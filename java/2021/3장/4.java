package practice;
import java.util.Scanner;
import java.util.InputMismatchException;

public class practice {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		char[] week = {'일','월','화','수','목','금','토'};
		int n;
		while(true) {
			try {
				System.out.println("정수를 입력하시오>>");
				n = sc.nextInt();
			}
			catch(InputMismatchException e) {
				System.out.println("정수가 아닙니다. 다시 입력하세요!");
				sc.next();
				continue;
			}
			if(n<0) {
				System.out.println("프로그램 종료합니다...");
				break;
			}
			else {
				System.out.println(week[n%7]);
			}
		}
		
		sc.close();
	}
}

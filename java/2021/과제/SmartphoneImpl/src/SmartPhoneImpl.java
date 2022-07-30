//2061028 안노아
class Phone {
	String phoneNumber;	//String형의 변수 phoneNumber 선언
	public Phone(String phoneNumber) {	//생성자
		this.phoneNumber = phoneNumber;	//받은 값 저장하기
	}
	void call() {
		System.out.println(phoneNumber+"에서 전화를 걸어 통화를 합니다. "); //phoneNumber 출력
	}
}

public class SmartPhoneImpl extends Phone {
	String model;	//String형의 변수 model 선언
	public SmartPhoneImpl(String phoneNumber, String model) {	//생성자
		super(phoneNumber);	//슈퍼클래스 생성자
		this.model = model;	//받은 값 저장하기
	}
	@Override
	void call() {
		super.call();	//슈퍼클래스 함수 호출
		System.out.println("이어팟을 이용해서 통화를 합니다. ");	//출력문
	}
	public static void main(String[] args) {
		SmartPhoneImpl phone = new SmartPhoneImpl("010-9999-0000", "IOS");	//객체 생성
		phone.call();	//함수 호출
	}
}
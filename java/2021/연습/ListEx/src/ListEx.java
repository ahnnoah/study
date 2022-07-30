import javax.swing.*;
import java.awt.*;

public class ListEx extends JFrame{
	private String[] fruits = {"apple","banana","kiwi","mango","pear"};
	private ImageIcon[] images = { new ImageIcon("C:\\Users\\gurmi\\OneDrive\\바탕 화면\\사과.jfif"),
								new ImageIcon("C:\\Users\\gurmi\\OneDrive\\바탕 화면\\바나나.jfif"),
			new ImageIcon("C:\\Users\\gurmi\\OneDrive\\바탕 화면\\키위.jfif"),
			new ImageIcon("C:\\Users\\gurmi\\OneDrive\\바탕 화면\\망고.jfif"),
			new ImageIcon("C:\\Users\\gurmi\\OneDrive\\바탕 화면\\배.jfif") };
	public ListEx( ) {
		setTitle("리스트 만들기 예제");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		
		JList<ImageIcon> imageList = new JList<ImageIcon>();
		imageList.setListData(images);
		c.add(imageList);
		
		setSize(300,550);	setVisible(true);	
	}
	public static void main(String [] args) {
		new ListEx();
	}
}
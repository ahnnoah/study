import java.awt.*;
import javax.swing.*;

public class Test extends JFrame {
	
	public Test() {
		setTitle("Home");  
	    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	    setLocationRelativeTo(null); 
	    Container c = getContentPane();
	    c.setLayout(new FlowLayout());
		
	    ImageIcon[] iconWater = new ImageIcon[9];
	    JLabel[] imgWater = new JLabel[9];
        iconWater[0] = new ImageIcon("C:\\Users\\gurmi\\OneDrive\\바탕 화면\\합친거 1\\cup\\emptyCup.png");
        imgWater[0] = new JLabel(iconWater[0]);
        c.add(imgWater[0]);
        for(int i = 1; i<=8; i++) {
        	iconWater[i] = new ImageIcon("C:\\Users\\gurmi\\OneDrive\\바탕 화면\\합친거 1\\cup\\" + i*250 + ".png");
        	imgWater[i] = new JLabel(iconWater[i]);
        	c.add(imgWater[i]);
        }
         
        setSize(1000,1000);
        setVisible(true);
	}
	
	public static void main(String[] args) {
		new Test();
	}
}

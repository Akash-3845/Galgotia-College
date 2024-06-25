import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class P39 {
    private JFrame frame;
    private JButton button;
 public P39() {
        // Create the frame
        frame = new JFrame("Event Handling Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
 // Create the button
        button = new JButton("Click Me");
        button.addActionListener(new ButtonClickListener());
 // Add the button to the frame
        frame.getContentPane().add(button, BorderLayout.CENTER);
  // Display the frame
        frame.setVisible(true);
   }
// ActionListener implementation for handling button clicks
    private class ButtonClickListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
  // When the button is clicked, show a message dialog
            JOptionPane.showMessageDialog(frame, "Button Clicked!");
        }
    }
public static void main(String[] args) {
        // Create an instance of the P39 class
        P39 eventHandler = new P39();
    }
}
 

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class P40 {
    private JFrame frame;
    private JLabel nameLabel, ageLabel, genderLabel;
    private JTextField nameField, ageField;
    private JRadioButton maleRadioButton, femaleRadioButton;
    private JButton registerButton;
public P40() {
 // Create the frame
        frame = new JFrame("Student Registration");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
        frame.setLayout(new GridLayout(4,2)); // Create and add components
        nameLabel = new JLabel("Name:");
        frame.add(nameLabel);
        nameField = new JTextField();
        frame.add(nameField);
        ageLabel = new JLabel("Age:");
       frame.add(ageLabel);
        ageField = new JTextField();
        frame.add(ageField);
      genderLabel = new JLabel("Gender:");
        frame.add(genderLabel);
       maleRadioButton = new JRadioButton("Male");
        femaleRadioButton = new JRadioButton("Female");
        ButtonGroup genderGroup = new ButtonGroup();
        genderGroup.add(maleRadioButton);
        genderGroup.add(femaleRadioButton);
        JPanel genderPanel = new JPanel();
        genderPanel.add(maleRadioButton);
        genderPanel.add(femaleRadioButton);
        frame.add(genderPanel);
        registerButton = new JButton("Register");
        registerButton.addActionListener(new ButtonClickListener());
        frame.add(registerButton);
 // Display the frame
        frame.setVisible(true);}
    private class ButtonClickListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
 // Get the entered values
            String name = nameField.getText();
            int age = Integer.parseInt(ageField.getText());
            String gender = maleRadioButton.isSelected() ? "Male" : "Female";
            String message = "Name: " + name + "\nAge: " + age + "\nGender: " + gender;
            JOptionPane.showMessageDialog(frame, message, "Registration Details",            JOptionPane.INFORMATION_MESSAGE);
        }}
 public static void main(String[] args) {
 // Create an instance of the P40 class
 P40 registrationApp = new P40();
    }}


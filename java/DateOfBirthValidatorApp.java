import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class DateOfBirthValidatorApp {
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                createAndShowGUI();
            }
        });
    }

    private static void createAndShowGUI() {
        JFrame frame = new JFrame("Date of Birth Validator");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JPanel panel = new JPanel();
        panel.setLayout(new FlowLayout());

        JLabel label = new JLabel("Date of Birth (dd/mm/yyyy):");
        JTextField textField = new JTextField(10);
        JButton button = new JButton("Validate");

        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String dateOfBirth = textField.getText();
                try {
                    // Validate the date of birth format
                    DateFormat dateFormat = new SimpleDateFormat("dd/MM/yyyy");
                    dateFormat.setLenient(false);
                    Date dob = dateFormat.parse(dateOfBirth);

                    // Perform additional validation checks
                    // For example, check if the person is at least 18 years old
                    Date currentDate = new Date();
                    long diff = currentDate.getTime() - dob.getTime();
                    long years = diff / (1000 * 60 * 60 * 24 * 365);
                    if (years < 18) {
                        JOptionPane.showMessageDialog(frame, "Date of Birth should be at least 18 years ago.");
                    } else {
                        JOptionPane.showMessageDialog(frame, "Date of Birth is valid.");
                    }
                } catch (ParseException ex) {
                    JOptionPane.showMessageDialog(frame, "Invalid Date of Birth format. Please use dd/mm/yyyy.");
                }
            }
        });

        panel.add(label);
        panel.add(textField);
        panel.add(button);

        frame.getContentPane().add(panel);
        frame.pack();
        frame.setVisible(true);
    }
}
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class NumericConverterGUI extends JFrame {
	private JLabel inputLabel;
	private JTextField inputField;
	private JButton convertButton;
	private JLabel resultLabel;

	public NumericConverterGUI() {
    	// Set up the JFrame
    	setTitle("Numeric Text Converter");
    	setSize(300, 150);
    	setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    	setLayout(new FlowLayout());

    	// Create and add components
    	inputLabel = new JLabel("Enter a numeric value (0-9):");
    	inputField = new JTextField(10);
    	convertButton = new JButton("Convert");
    	resultLabel = new JLabel();

    	add(inputLabel);
    	add(inputField);
    	add(convertButton);
    	add(resultLabel);

    	// Add ActionListener to the Convert button
    	convertButton.addActionListener(new ActionListener() {
        	@Override
        	public void actionPerformed(ActionEvent e) {
            	String inputText = inputField.getText();
            	int numericValue;
            	try {
                	numericValue = Integer.parseInt(inputText);
                	String textEquivalent = getTextEquivalent(numericValue);
                	resultLabel.setText("Text Equivalent: " + textEquivalent);
            	} catch (NumberFormatException ex) {
                	resultLabel.setText("Invalid input! Enter a numeric value (0-9).");
            	}
        	}
    	});
	}

	private String getTextEquivalent(int numericValue) {
    	String[] numbermapping={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    	return numbermapping[numericValue];
	}

	public static void main(String[] args) {
    	SwingUtilities.invokeLater(new Runnable() {
        	@Override
        	public void run() {
            	NumericConverterGUI converter = new NumericConverterGUI();
            	converter.setVisible(true);
        	}
    	});
	}
}

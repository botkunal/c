import java.io.*;
import java.net.*;

public class NetworkUtilityExample {
    public static void main(String[] args) {
        try {
            String urlString = "https://www.example.com"; // Replace with your desired URL
            URL url = new URL(urlString);

            // Retrieving the IP address using InetAddress class
            InetAddress ipAddress = InetAddress.getByName(url.getHost());
            System.out.println("IP Address: " + ipAddress.getHostAddress());

            // Establishing a connection using URLConnection class
            URLConnection connection = url.openConnection();
            BufferedReader reader = new BufferedReader(new InputStreamReader(connection.getInputStream()));
            
            System.out.println("\nContents of the web page:");
            String line;
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }
            reader.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

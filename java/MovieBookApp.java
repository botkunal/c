import java.lang.*;
class BookTheaterSeats 
{
    int total_seats = 10;

    void bookseat(int seats) 
    {
        if (total_seats >= seats) 
        {
            System.out.println("seats" + seats);
            total_seats = total_seats - seats;
            System.out.println("seats Left" + total_seats);

        } 
        else 
        {
            System.out.println("sorry seats cannot be booked...!");
            System.out.println("seats Left:" + total_seats);
        }
    }
}

public class MovieBookApp extends Thread 
{
    static BookTheaterSeats b;
    int seats;

    public void run() 
    {
        b.bookseat(seats);
    }
 
    public static void main(String[] args) 
    {
        b = new BookTheaterSeats();
        MovieBookApp amit = new MovieBookApp();
        
        amit.seats = 7;
        amit.start();

        MovieBookApp sarthak = new MovieBookApp();
        sarthak.seats = 6;
        sarthak.start();
    }
}
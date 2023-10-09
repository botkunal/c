
//import java.io.*;
public class test111 {
    
    // public void run(){
    //     for(int i=0;i<4;i++){
    //         System.out.println(i);
    //         try {
    //             Thread.sleep(500);
    //         } catch (InterruptedException e) {
    //             System.out.println(e);// TODO: handle exception
    //         }
    //     }
    // }   
    public static void main(String[] args)throws InterruptedException {
    
        Thread t1 = new Thread(() -> {
            for(int i=0;i<4;i++){
                System.out.println(i);
                try{
                    Thread.sleep(50);
                } catch (Exception e) {
                    // TODO: handle exception
                    System.out.println(e);
                }
            }
        });
    
        Thread t2 = new Thread(() ->{
            try{
                t1.join();
            }catch(InterruptedException e){
                System.out.println(e);
            }
            for (char i = 'a'; i < 'j'; i++) {
                System.out.println(i);
                try {
                    Thread.sleep(50);
                } catch (Exception e) {
                    System.out.println(e);// TODO: handle exception
                }
            }
        }   );
        

        t2.start();
        t1.start();

    } 
}

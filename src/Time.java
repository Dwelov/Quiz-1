import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.Locale;

public class Time {

    DateTimeFormatter formatter24 = DateTimeFormatter.ofPattern("HH:mm:ss");
    DateTimeFormatter formatter12 = DateTimeFormatter.ofPattern("hh:mm:ss a").withLocale(Locale.ENGLISH);

    public void displayTime24Format() {
        while (true) {

            LocalTime now = LocalTime.now();
            String time = now.format(formatter24);
            System.out.println(time);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }
    }

    public void displayTime12Format() {
        while (true) {
                LocalTime now = LocalTime.now();
            String time = now.format(formatter12);
            System.out.println(time);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }
    }



}
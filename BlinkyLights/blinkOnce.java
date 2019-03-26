/*
 * blinkOnce.java
 *
 * Control a blinking LED with RPi
 *
 */
import com.pi4j.io.gpio.*;
import com.pi4j.io.gpio.trigger.GpioCallbackTrigger;

/* Define a function to control the LED */
public class blinkOnce {
    private static void blink(GpioPinDigitalOutput led, int time, int dur){
        led.blink(time, dur);
        return;
    }

    public static void main(String [] args){
        System.setProperty("pi4j.linking", "dynamic");
        
        // Initialize the GPIO
        GpioFactory.setDefaultProvider(new RaspiGpioProvider(RaspiPinNumberingScheme.BROADCOM_PIN_NUMBERING));
        final GpioController gpio = GpioFactory.getInstance();
        final GpioPinDigitalOutput led = gpio.provisionDigitalOutputPin(RaspiPin.GPIO_17);
    
        // Run the function in a loop
        try {
            System.out.println("The LED will blink ten times");
            for(int cntr=0; cntr<10; cntr++){
                System.out.printf("Blink #%d\n", cntr+1);
                blink(led, 1000, 500);
                Thread.sleep(2000);
            }
        } catch (InterruptedException e){
            gpio.shutdown();
        }
    }
}
            

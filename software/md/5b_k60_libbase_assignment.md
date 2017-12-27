# k60 Control - libbase - Assignment

Author: Peter Tse ([mcreng](http://www.github.com/mcreng))

### LED Pulsing

Use three different methods, such that the LED flickers, once per 500ms. The methods are

* While loop GPIO,
* PWM (connect PWM output to GPI, and use interrupt such that when PWM signal is high, the LED turns on, and vice versa), and
* PIT.



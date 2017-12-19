# Circuit Knowledge

Author: Leslie Lee ([LeeChunHei](https://github.com/LeeChunHei))

This tutorial will teach you some basic circuit.

## Pull UP

![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/human_pull_up.jpg)

Pull up circuit is a circuit that a pull-up resistor connect the logic signal to high potential. It keeps the logic level of signal to high when the state is not set.

![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/pull_up.png)

## Pull Down

Pull down circuit is similar to pull up circuit, but there is a pull-down resistor connect the logic signal to ground instead. It keeps the logic level of signal to low when the state is not set.

![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/pull_down.png)

## Debounce

Debounce circuit consists of resistors and capacitor. There is a pull up resistor, it ensures the logic level is high when the state is not set and charge the capacitor. So when the signal is bouncing, the capacitor will discharge and prevent voltage dropping which will affect the logic level.

![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/debounce.jpg)

## High Pass Filter

High pass filter is a filtering circuit that passes signal having frequency higher than the cutoff frequency.

![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/high_pass_filter.png)

## Low Pass Filter

Low pass filter is a filtering circuit that passes signal having frequency lower than the cutoff frequency.

![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/low_pass_filter.png)

## Motor Driver Circuit

As in SmartCar competition, speed is everything, so having a good understanding on how motor driver works is very important for you to speed up your car.

### H bridge

Motor is driven by this H bridge circuit, it mainly consists of four mosfets/transistors. The four mosfets/transistors form a circuit like a letter H with the motor output at its center.

![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/H_bridge.png)

So there will be a voltage difference when the four mosfets/transistors are opened in different pattern.

| Q1   | Q2   | Q3   | Q4   | Voltage difference |
| ---- | ---- | ---- | ---- | ------------------ |
| 1    | 0    | 0    | 1    | A > B              |
| 0    | 1    | 1    | 0    | B > A              |
| 1    | 0    | 1    | 0    | A = B              |
| 0    | 1    | 0    | 1    | A = B              |

Another pattern will cause the power and ground short circuit, so in most of the motor driver design, the motor driver IC will prevent this scenario happens.

### Mosfet motor driver circuit

![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/mosfet_motor_driver.png)

This is the whole motor driver circuit. It mainly consists of three parts: H bridge, motor driver controller IC and voltage step up circuit.

A voltage step up circuit is used to provide 12V to the driver IC, so that the driver IC can supply 12V to the mosfets to turn it on.

The motor driver controller IC will decode the pwm signal to control the H bridge circuit, then gives out the correct voltage difference to the motor.

### BTN motor driver circuit

So it is a bit complicated to a complete mosfet motor driver circuit, therefore there is some IC that had already embedded half of the circuit, so we just need two of them to complete the whole motor driver circuit.

![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/btn_motor_driver.png)




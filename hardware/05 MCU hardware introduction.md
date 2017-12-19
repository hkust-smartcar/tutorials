# MCU Hardware Introduction

Author: Leslie Lee ([LeeChunHei](https://github.com/LeeChunHei))

This tutorial will teach some hardware knowledge about microcontroller unit (MCU).

For more detail usage, you should check the datasheet of the MCU.

## Open-Drain Output

This is a open circuit output. It requires a pull-up resistor at the output pin, or else the output is floating. MCU constructs open-drain output using a N-MOS or BJT-NPN as the switch, so the output voltage need to be decided externally. So we can do level shift with this output and it only requires very small gate driving current in the MCU.

![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/open_drain.jpg)

## Push-Pull Output

MCU will do the pull up and pull down job itself with the output setting. So no external pull-up resistor required. MCU constructs push-pull output using two transistors as totem pole, when output requires high, upper transistor connected, lower one closed, making the output as high voltage potential. Therefore output voltage of push-pull is decided by MCU voltage.

![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/push_pull.jpg)




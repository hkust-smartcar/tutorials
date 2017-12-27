# Board Design

Author: Leslie Lee ([LeeChunHei](https://github.com/LeeChunHei))

This tutorial will teach you to design your own board.

## Set Up Altium Designer

Altium Designer is a very popular and powerful software for designing circuit board.

In SmartCar team we will use this software to draw the schematics and route the PCB board.

### Install Altium Designer

1. Download Altium Designer in the following link

   https://drive.google.com/open?id=0BwKAy76tTyu3bGxObE5aYVEyOTg

2. Unzip the file and install Altium Designer.

3. Close Altium Designer.

4. Copy 'License/msimg32.dll' from the zip to the install directory.

5. Open Altium Designer and reload the license by clicking "Add standalone license file" and load one of the license files in 'Licenses/' from the zip

### Add Altium Designer Libraries

1. Download all the libraries from the following link.

   https://github.com/hkust-smartcar/tutorials/raw/master/hardware/libraries.zip

2. Unzip all the files to where you want to place it.

3. Open library in the following way.

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/open_library_1.png)

   or

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/open_library_2.png)

4. Click libraries.

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/open_library_libraries.png)

5. Click install and selected all the libraries that you just unzip.

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/libraries_install.png)

6. Then all the libraries are installed.


## Start A New Project

1. ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/new_project.PNG)

2. ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/new_project_2.PNG)

3. Now you will have a completely new project in your computer, but it is still empty.

4. Add the schematic file into your project

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/add_schematic.PNG)

5. Now you need to add the components you need in your circuit design, click the library out.

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/add_component_1.PNG)

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/add_component_2.PNG)

6. Now you need to search the components needed

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/search_component.PNG)

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/search_component_result.PNG)

7. After finding the correct the component, you need to pull the corresponding component out to your schematic file.

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/pull_component_out.PNG)

8. There are the common components symbol

   Resistant symbol:

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/res_symbol.PNG)

   Capacitor symbol:

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/cap_symbol.PNG)

   Diode symbol:

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/diode_symbol.PNG)

   Led symbol:

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/led_symbol.PNG)

   Inductor symbol:

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/inductor_symbol.PNG)

9. After all the necessary components are pulled into your schematic file, you may place the components in a clear way. Then you need to route the circuit.

   First click the following button.

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/circuit_routing_button.PNG)

   Then your cursor will become a big cross, you just need to click the pin of the components, there will be a line come out from the pin. All you need to do is connect this circuit wire to the pin of component you want to connect to.

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/circuit_routing.PNG)

   Sometime if you want connect two circuit wires (nets) together, you can just directly click to the destination net. There will be a dot to indicate they are connected.

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/circuit_connection.PNG)

   Also you don't really need to connect the components pins using wire, 














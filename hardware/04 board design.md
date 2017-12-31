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

1. First new a project

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/new_project.PNG)

2. Choosing the default setting and name your project. 

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/new_project_2.PNG)

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

   Also you don't really need to connect the components pins using wire, you can assign wire with a net name, then wires with same net name will automatically connected together.

   First you need to click the net assign button.

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/net_button.PNG)

   Just put the net name label to the corresponding wire will assign the net name to that wire.

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/net_name.PNG)

   After that double click the net label to change the net name.

   ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/net_name_change.PNG)

10. After compete adding all the components, you may found that all the components are in form of 'C?, R?, SW*?'. So we need to annotate the schematic the assign all the components with correct name.

  Click annotate schematic

  ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/annotation.PNG)

  A window will pop up, you need to first click 'Reset All', then 'Update Changes List', at last 'Accept Changes'

  ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/annotation_complete.PNG)

  After clicking 'Accept Changes', a window will pop up, click 'Validate Changes' first, then 'Execute Changes', after that you should see all green ticks next to every component.

  ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/accept_changes.PNG)

11. Next we need to create a pcb file to store our creation of the board.

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/new_pcb_file.PNG)

12. Then you need to link the pcb file and the schematic

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/update_to_pcb.PNG)

    You will require the accept all the changes to pcb file, remember to **UNTICK** add rooms option.

    After that you may click the 'Validate Changes', then 'Execute Changes', now you should see many green ticks next to every modification, at last click 'Close'.

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/update_to_pcb_accept.PNG)

    The result should be like this

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/add_to_pcb_result.PNG)

13. You shall see there are many thin green line connecting the components pad. They are showing the shortest connection to let your design complete.

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/shortest_connection.PNG)

14. Next you need to click the routing button to start routing your board

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/routing_button.PNG)

    Then move your cursor to click on any components pad there, you should able to see the red line coming out from the pad, this is the copper connection that will make when you manufacture it.

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/routing.PNG)

    So we will mainly manufacture two layer board, so the red line meaning you are routing the top layer, you can change to blue layer by clicking the label under the pcb layout. And a via will be used to connect both the top layer routing and bottom layer routing.

    You need to change the default setting of the via in the following way.

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/set_via_setting_1.PNG)

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/set_via_setting_2.PNG)

15. So after few routing operation, you may found the routing width is very small, which is not good for power transfer net. You can change the width in the following way.

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/routing_width_setting.PNG)

    And you can also edit the design rule to change all the setting of this pcb routing, include routing width.

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/design_rule.PNG)

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/design_rule_width_setting.PNG)

    We recommend to use at least 10mil for signal transfer net, 30mil for high voltage but low current transfer net, 100mil for power and larger current transfer net.

16. So finally, when you complete the whole board, please remember to place polygons that connected to the ground net in both layer. Polygon can help you to connect all the gnd together if you are choosing  connected ground net to the polygon. It can also help you to reduce heat of the board and may also reduce noise.

    You can place the polygon in the following way.

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/polygon_pour.PNG)

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/polygon_pour_setting.PNG)

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/polygon_pouring.PNG)

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/polygon_pour_result.PNG)

17. At last you may add some polygon cutout to delete some sharp polygon, as those polygon  will create noise at the sharping point.

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/polygon_cutout.PNG)

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/polygon_cutouting.PNG)

    You need to repour the polygon to see the changes.

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/repour_all.PNG)

    ![](https://github.com/hkust-smartcar/tutorials/raw/master/hardware/img/cutout_result.PNG)

    Also, don't forget to place as much via as you can to connect the top layer polygon and bottom layer polygon. And you shall put adding these via after finalize you polygon design, some bad things will happened if you reverse these two steps.

## Assignment

Everyone needs to complete a motor driver design with two motor output. You are required to use the DRV8432 motor controller IC to build the circuit. You can find the DRV8432 library by added the following library into your Altium Designer.

https://github.com/hkust-smartcar/tutorials/raw/master/hardware/DRV8432.rar

Deadline: 2/1/2018
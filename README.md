# JensArduinoCarPedals

This is my car simulator pedals for Arduino with I work with from time to time.
This pedals have gas, brake and clutch and use a Arduino (Windows native drivers) to connect to usb port.
Feel free to do pull request to this repository.

# Parts you need to this project

1. Arduino Pro Micro or any board based on ATmega32U4
2. Usb cable between Arduino board and computer.
3. 3 piece Slide Potentiometer 5kohm or hall sensors.
4. 3 cheap styling pedals for cars.
5. Spring
6. Some metall to build pedal construction in
7. Nuts, bolts and cables to potentiometer
8. Project Cars or another car simulator you like.

# Welding potentiometer and Arduino together.
<IMG SRC="https://github.com/jensws80/JensArduinoCarPedals/blob/master/electricalDrawings.jpg?raw=true"></A>
Connect Gas to A0, Brake to A1 and Clutch to A2. Connect each potentiometer to +5v and GND
Programming Arduino and test

For this you need to download MHeironimus/ArduinoJoystickLibrary (LGPL-3.0) and my Arduino project


<A HREF="https://github.com/MHeironimus/ArduinoJoystickLibrary">MHeironimus/ArduinoJoystickLibrary Version 1.0</A><br>
<A HREF="https://github.com/jensws80/JensArduinoCarPedals">My Arduino file</A>


Install libary and open jenswsArduinoPedal project.
Download it to your Arduino board and connect to your gaming computer.
Go to Controlpanel/Hardware and sound/Devices and printer.
If everything is correct you now see your arduino board as a joypad.
Right click on your Arduino board and choose Game control Settings
After you choose your Arduino board you can go to tab test and test your potentiometer.



# Building Pedal construction


I build my pedal construction in steel and welding it together. One tricky part was to find spring with correct feeling. You have to test what you like. I also fond that 100mm from bottom to center of pedal was a good length for my foot.
I show some pics how i have done to give you idea how you can build yours.


# Test run in Project Cars

If you have done everything correct you now have som nice pedals to you car simulator. Probably I gona build version 2,0 of my pedals. I'm not 100% satisfied with the feeling in my pedals. Maybe i rebuild brake to hydraulic and try different springs on gas and clutch. I aslo plan to build some parts with my 3d-printer.

<A href="https://www.youtube.com/embed/U09LJFdwUUU">Youtube clip</A>

## License
This project is licensed under the terms of the GNU V.3 license.

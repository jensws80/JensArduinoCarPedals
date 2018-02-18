# JensArduinoCarPedals

This is my car simulator pedals for Arduino with I work with from time to time.
This pedals have gas, brake and clutch and use a Arduino (Windows native drivers) to connect to usb port.
Feel free to do pull request to this repository.

All file you need you find in this git.
<A HREF="https://github.com/jensws80/JensArduinoCarPedals/blob/master/jensArduinoCarPedals.ino">Download Arduino Project</A>

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
<IMG SRC="https://github.com/jensws80/JensArduinoCarPedals/blob/master/electricalDrawings.jpg"></A>
Connect Gas to A0, Brake to A1 and Clutch to A2. Connect each potentiometer to +5v and GND
Programming Arduino and test

For this you need to download MHeironimus/ArduinoJoystickLibrary (LGPL-3.0) and my Arduino project


<A HREF="https://github.com/MHeironimus/ArduinoJoystickLibrary">MHeironimus/ArduinoJoystickLibrary</A>
<A HREF="https://github.com/jensws80/JensArduinoCarPedals/blob/master/jensArduinoCarPedals.ino">My Arduino Project</A>


Install libary and open jenswsArduinoPedal project.
Download it to your Arduino board and connect to your gaming computer.
Go to Controlpanel/Hardware and sound/Devices and printer.
If everything is correct you now see your arduino board as a joypad.
Right click on your Arduino board and choose Game control Settings
After you choose your Arduino board you can go to tab test and test your potentiometer.



# Building Pedal construction


I build my pedal construction in steel and welding it together. One tricky part was to find spring with correct feeling. You have to test what you like. I also fond that 100mm from bottom to center of pedal was a good length for my foot.
I show some pics how i have done to give you idea how you can build yours.

Download 3d model of my pedals in format stl

Download 3d model of my pedalsplate in format stl

# Install potentiometer on to pedal construction.

I have choose to mount my potentiometer in back of pedal console. When I press on a pedal potentiometer go from 0 to 5kohm. It may be a better solution to mount direct on pedal?

# Settings in Project Cars

Start Project Cars and go to Options/Controls/Edit assignments Choose Throttle and press on gas pedal. Do the same with Brake and Clutch

# Test run in Project Cars

If you have done everything correct you now have som nice pedals to you car simulator. Probably I gona build version 2,0 of my pedals. I'm not 100% satisfied with the feeling in my pedals. Maybe i rebuild brake to hydraulic and try different springs on gas and clutch. I aslo plan to build some parts with my 3d-printer.

## License
This project is licensed under the terms of the GNU V.3 license.

# JensArduinoCarPedals

Car Simulator pedals for Arduino, I work with occasionally to develop.
If you want to develop this project feel free to do pull request to this repository.

This Arduino pedals have gas, brake and clutch and use a Arduino (Windows native drivers) to connect to usb port.


# Parts you need to this project

1. Arduino Pro Micro or any board based on ATmega32U4
2. Usb cable between Arduino board and computer.
3. 3 piece Slide Potentiometer 5kohm or hall sensors.
4. 3 cheap styling pedals for cars.
5. Spring
6. Some metall to build pedal construction in
7. Nuts, bolts and cables to potentiometer


For this you need to download MHeironimus/ArduinoJoystickLibrary (LGPL-3.0) and my Arduino project


<A HREF="https://github.com/MHeironimus/ArduinoJoystickLibrary">MHeironimus/ArduinoJoystickLibrary Version 1.0</A><br>
<A HREF="https://github.com/jensws80/JensArduinoCarPedals">My Arduino file</A>

# Electrical drawings.
<IMG SRC="https://github.com/jensws80/JensArduinoCarPedals/blob/master/electricalDrawings.jpg?raw=true"></A>
Connect Gas to A0, Brake to A1 and Clutch to A2. Connect each potentiometer to +5v and GND


This electrical drawings in made in Eagle.


# Building Pedal construction


I build my pedal construction in steel and welding it together. One tricky part was to find spring with correct feeling. You have to test what you like. I also fond that 100mm from bottom to center of pedal was a good length for my foot.

Pedals drawings is done in Sketchup.

# Test run in Project Cars

See this Youtube clip

<A href="https://www.youtube.com/embed/U09LJFdwUUU">Youtube clip</A>


## License
This project is licensed under the terms of the GNU V.3 license.

# NOGGIN LOGIN - HardHacks2019
Noggin Login is a program and hardware hack that counts the heads, or __noggins__, of people in a selected area.

![website](media/noggin-login.png)

DEVPOST: https://youtu.be/m5ggC2xEji4

DEMO: https://devpost.com/software/hardhacks2019

# Motivation/Applications
As first-time college students, we were shocked by the sheer size of lecture halls and class sizes. However, it quickly became apparent that class attendance varies on a day to day basis, with a noticeable decrease as a quarter comes to a close. We realized that collecting data of the amount of students in a lecture hall would be quite useful, including for:
- Studying possible correlations of class attendance with average grades/passing rates
- Studying trends of class attendance and how they correlate with certain events/the _nth_ week of a quarter
- Monitoring class attendance against the amount of seats for adjusting waitlists

The hack isn't just limited to the classroom; Noggin Login could be used in any public area that could use some head-counting to determine how many people visit the space over time!

# Different Versions
Two different implementations are available for noggin-counting!

## Implementation A - Above the Door
- The device can be installed just above the front door of a room to count how many people walk in and out.

![Implementation B](media/ImplementationB2.jpg)
Implementation A Demo

## Implementation B - Above the Lecture Hall
- The device can be installed on the ceiling in the middle of a room to continuously count from above the amount of heads in the selected area.

![Implementation A](media/ImplementationA.jpg)
Implementation B Demo

# Installation
Installation
- Download the repository
- Install pip, OpenCV, imutils, and pySerial
- Download the Arduino IDE

# Features
- Head counter that adds up the total amount of people in a room
- Website that displays the live count of people
- Arduino with an LCD displaying the live count of people

![Setup](media/Setup.jpg)
Setup of Arduino

![Arduino](media/Arduino.jpg)
Arduino Closeup

![Welcome Sign](media/WelcomeSign.jpg)
Welcome Sign at start of running program

![Initiating](media/Initiating.jpg)
Initiating message before displaying count

![Total Head Count](media/TotalHeadCount.jpg)
Final total head count (Our team members here!)

![Potentiometer](media/Potentiometer10K.jpg)
Potentiometer used as a giant 3-way resistor

# Challenges
- Connecting the Python data of head counts to display on the LCD attached to the Arduino
- Figuring out the correct algorithm to increment and decrement the amount of people that is detected
- Understanding the functions of an Arduino

# Extensions
- Printing out the number of people onto the LCD
- Website that would potentially broadcast a live count of the people in a room

# Credits
- CodePen.io
  
  -- https://codepen.io/harmputman/pen/ImjDs
  
  -- https://codepen.io/neoberg/pen/kavnF

- OpenCV
  
  -- https://github.com/C-Aniruddh/realtime_object_recognition
  
- Arduino
  
  -- https://www.arduino.cc/reference/en/language/functions/communication/serial/
  

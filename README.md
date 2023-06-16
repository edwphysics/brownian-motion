# brownian-motion
A Mathematica module to analyse collected data from a Brownian motion experiment (analysisV14.nb or analysisV15.nb). The data collection used recordings from a ZEISS microscope to track polyestirene spheres with Physlets Tracker (.trz or .trk files generating analysis*.txt tracking data), and recorded temperature directly to Mathematica (LM35.nb to generate data stored in LM35.mx) with and Arduino module connected to an LM35 sensor (Arduino module LM35.ino). 

In the brownian-motion folder you can find the modules described above used to analyse just one video at a time. The folder data contains the tracking data of the only one video uploaded and the results folder contains the nuerical and plot results. The folder combined-videos contains the modified code to analyse al the data produced by several videos with their own temperatures data and tracking data stored in temp and data respectively. 

Temperature recording: The ArduinoIDE module must be uploaded to the Arduino microprocessor. Ensure it is collecting data and printing it in the serial monitor. Then open and run the first two cells of the LM35.nb module (1. Connection to Arduino and 2. Starts the collection of data): it must show live the temperature data collection as a plot. To stop the measurement run the next cell, and finally run the last one to disconnect the Arduino.

Based on the Lab Report: .

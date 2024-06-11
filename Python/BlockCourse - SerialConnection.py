#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Apr 25 10:33:21 2024

@author: J Cabrera-Moreno 20240425

Serial communication test with arduino

Block course 2024
Automation of data collection
University of Zurich
Evolutionary Cognition Group
"""

import glob
import serial
import datetime

# List COM ports
comPorts = glob.glob('/dev/tty.*')
print(comPorts)


threshold = 200

currentState = "Night"

ser = serial.Serial(comPorts[1], 9600, timeout=0.1)
while True:
    data = int(ser.readline().decode("utf-8"))
    
    if data < 200:
        log = "Night"
    elif data >= 200:
        log = "Day"
    
    if currentState != log:
        currentTime = datetime.datetime.now().strftime("%m/%d/%Y, %H:%M:%S")
        print(currentTime, log)
        with open("Test.csv", "a") as logs:
            logs.writelines([currentTime," ", log, "\n"])
        
        currentState = log
    
        
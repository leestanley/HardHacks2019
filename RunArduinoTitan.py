import serial
import time

# whether or not arduino is connected
connected = False

s = serial.Serial('COM3', 9600) #port is 11 (for COM12), and baud rate is 9600
time.sleep(3)    #wait for the Serial to initialize
       
s.write(b'999')



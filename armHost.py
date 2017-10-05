import serial

ser = serial.Serial('COM3')
print(ser.name)
while True:
    to_write = input("Bring me the values!") 
    ser.write(to_write.encode())
ser.close()


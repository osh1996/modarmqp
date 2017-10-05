import serial

ser = serial.Serial('COM3')
print(ser.name)

for i in range(0,20):
    to_write = input("Bring me the values!") 
    ser.write(to_write.encode())
ser.close()


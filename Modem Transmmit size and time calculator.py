import os

b = os.path.getsize("draw.jpeg")

modemSpeed = int(input("Enter the modem speed : "))
x = input("Choose the size : {gbps, mbps, kbps, bps} : ")

if (x == "gbps"):
    bitsPerSeconds = modemSpeed * 1000000000
elif (x == "mbps"):
    bitsPerSeconds = modemSpeed * 1000000
elif (x == "kbps"):
    bitsPerSeconds = modemSpeed * 1000
elif (x == "bps"):
    bitsPerSeconds = modemSpeed

answer = b / bitsPerSeconds

print("the file size :" , b , "byte")
print("transmit time :" , answer , "seconds")
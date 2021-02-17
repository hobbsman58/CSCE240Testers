## program to generate random integers
## generates 100 random integers
## stores their sums and max/min in a separate file called key
## import sys
## import subprocess as sp
import random

lowest = int(-10000)
highest = int(10000)
numberOfInts = int(10) ## Set by user

generated = int(0) ## integer initializer
max = int(lowest)
min = int(highest)
sum = int(0) ## sum initializer
randStr = str(numberOfInts) ## string initializer

for i in range(numberOfInts):
    generated = random.randint(lowest, highest)
    randStr = randStr + '\n' + str(generated)
    ## can change the \n if you want to try the whitespace as spaces, or even tabs with \t
    sum = sum + generated
    if(generated > max):
        max = generated
    if(generated < min):
        min = generated

with open('integers.txt','w') as txtFile:
    txtFile.write(randStr)
    txtFile.write(' ')

## txtFile.close()

avg = sum/numberOfInts
maxStr = str(max) + '\n'
maxStr = maxStr + str(min) + '\n'
maxStr = maxStr + str(sum) + '\n'
maxStr = maxStr + str(avg) + '\n'

with open('keyFile.txt','w') as keyFile:
    keyFile.write(maxStr)

## maybe dictionary storage would be better for these
keyDict = {}

'''
Accept two numbers from user and display first number in second
number of times.
'''

def Display(iNo1,iNo2):
    
    if iNo2 < 0:
        iNo2 = -iNo2
    
    for x in range(iNo2):
        print(iNo1,end="\t")
    
    print()

iValue1 = int(input("Enter First Number\n"))
iValue2 = int(input("Enter Second Number\n"))

Display(iValue1,iValue2)
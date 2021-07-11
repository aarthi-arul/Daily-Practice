'''Print the full date of Day of the Programmer during year y in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is y.'''
year=int(input())
d=0
if(year>=1700 and year<=1917):
    if(year%4==0):
        print("12.09."+str(year))
    else:
        print("13.09."+str(year))
elif(year>=1919):
    if(year%400==0 or (year%4==0 and year%100!=0)):
           print("12.09."+str(year))
    else:
        print("13.09."+str(year))
else:
    print("26.09.1918")
    
import datetime

date = datetime.datetime.now()
year = date.year
month = date.month
day = date.day

if month < 10:
    month = str(month)
    month = "0"+month
if day < 10:
    day = str(day)
    day = "0"+day
year = str(year)

print(year+"-"+month+"-"+day)

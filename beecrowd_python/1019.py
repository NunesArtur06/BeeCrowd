seg = int(input())

hora = int(seg/3600)
min = int((seg%3600)/60)
segundo = int((seg%3600)%60)

print("%d:%d:%d" %(hora, min, segundo))
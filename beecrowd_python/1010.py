cod1, num1, val1 = input().split() #vai cortar a string assim que ler um espaço
cod2, num2, val2 = input().split() #vai cortar a string assim que ler um espaço

num1 = int(num1)
num2 = int(num2)

val1 = float(val1)
val2 = float(val2)

sum1=num1*val1
sum2=num2*val2
total = sum1+sum2

print('VALOR A PAGAR: R$ %0.2f' %total)

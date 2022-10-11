import math
a,c=12,5
print ("Diketahui : ")
print ("Alas = ", c,"cm")
print ("Tinggi = ", a,"cm")
b=round(math.sqrt(a*a+c*c))
print ("Jawab : ")
print ("Sisi A = ", a,"cm")
print ("Sisi B = ", b,"cm")
print ("Sisi C = ", c,"cm")
print ("Keliling = ",a+b+c,"cm") 
print ("Luas = ",round((a*c)/2),"cm")
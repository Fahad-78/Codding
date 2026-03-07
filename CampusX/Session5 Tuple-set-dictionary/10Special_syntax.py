#Unpack value
a,b,c = (1,2,3)
print(a)
print(b)
print(c)

# #Not possible because too many values for variables
# a,b = (1,2,3)
# print(a)
# print(b)

#Swap value without any third variable
a = 2
b = 3
a,b = b,a
print(a,end=',')
print(b)
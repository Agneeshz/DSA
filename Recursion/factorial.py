
def factorial(n):
  if n>1:
    return (n+factorial(n-1))
  else:
    return n
x=factorial(12)
print (x)
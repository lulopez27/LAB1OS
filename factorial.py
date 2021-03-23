import time
def factorial(ans):
    if(ans == 1):
        return 1
    return ans*factorial(ans-1)

print('Ingrese un número: ')
ans = input()
start=time.time()
ans = factorial(int(ans))
print('El factorial es de '+str(ans))
print('Tiempo de duración '+str(time.time() - start))
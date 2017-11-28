def saludador(nombre):
    print "hola" , nombre
    print "¿cómo estás?"
    print "habeses beo kosas"
    
saludador("bebeeeeeeeeeeeeeeee")

def saludador2():
    print "dime tu nombre"
    nombre=raw_input()
    print "te quiero",nombre
saludador2()

    
def saludador3():
    nombre=raw_input()
    print "te quiero",nombre
saludador3()

def sumador():
	x = input("dime el primer numero ")
	y = input("dime el segundo numero ")
	print"la suma sale"
	print x, "+" ,y, "=", x+y
sumador()

def sumador_multiple():
    suma = 0
    for cont in [1,2,3,4,5]:
        numero = input ("dime un nuevo numero ")
        suma = suma+numero
    print "la suma =", suma
sumador_multiple()

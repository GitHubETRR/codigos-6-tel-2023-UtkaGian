Tareas = []
print("Hola, bienvenido a su To do list. Aquí podrá enlistar sus tareas.\n")
Escape='R'
while Escape!='E' and Escape!='e':
    Control=input("Ingrese A si quiere añadir una tarea o D si quiere eliminarla:\n")
    Repetidor='R'
    while Repetidor=='R' or Repetidor=='r':
        Repetidor='n'
        if Control=='A' or Control=='a':
            Tarea=input("Ingrese su tarea:\n")
            Tareas.append(Tarea)
            Repetidor=input("Ingrese una R si desea añadir otra tarea o ignore si quiere salir al inicio:\n")
    Repetidor='R'
    while Repetidor=='R' or Repetidor=='r':
        Repetidor='n'
        if Control=='D' or Control=='d':
            print("Tu lista:\n")
            for i in range(len(Tareas)):
                print(i,'   ' , Tareas[i], '\n')
            Index=int(input("Ingrese qué elemento desea eliminar:\n"))
            del Tareas[Index]
            Repetidor=input("Ingrese una R si desea eliminar otro elemento o ignore si quiere volver al inicio:")
    print("Estas son tus tareas pendientes:\n")
    print(*Tareas, sep='\n')
    Escape=input("Ingrese una E si desea finalizar el programa o ignore si desea continuar:\n")

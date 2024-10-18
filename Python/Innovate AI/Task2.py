#Problem: Write a Python program that takes a list of numbers as input (entered by the user), sorts the list, and then finds the smallest and largest numbers from the sorted list. The program should also calculate the average of all the numbers.

def SORT(L):
    for x in range (len(L)):
        for y in range(len(L)-1):
            if L[y]>L[y+1]:
                L[y],L[y+1]=L[y+1],L[y]
    return L

def AVERAGE(L):
    average=0
    for x in range (len(L)):
        average+=L[x]
    average/=len(L)
    return average

#__main__
no_elements=int(input("Enter number of elements you want in list : "))
L=[]
for i in range(no_elements):
    L.append(int(input(f"Enter {i+1} element : ")))

sorted_L=SORT(L)
print("The sorted list is : ",sorted_L)
print("The minimum element in list is :",sorted_L[0])
print("The maximum element in list is :",sorted_L[-1])
print("The average of the list is :",AVERAGE(sorted_L))


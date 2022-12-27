def selection_sort(marks):
    for i in range(len(marks)):
        min_idx = i
        for j in range(i+1, len(marks)):
            if marks[min_idx] > marks[j]:
                min_idx = j
        marks[i], marks[min_idx] = marks[min_idx], marks[i]
    print("Marks after performing selection sort:",marks)
    for i in range(len(marks)):
        print(marks[i])


def bubble_sort(marks):
    n = len(marks)
    for i in range(n-1):
        for j in range(0, n-i-1):
            if marks[j] > marks[j+1]:
                marks[j], marks[j+1] = marks[j+1], marks[j]
    print("Marks after performing bubble sort:")
    for i in range(len(marks)):
        print(marks[i])


def top_five_marks(marks):
    for i in marks:
        #highest = max(marks)
        #last = marks[-1]
        m = (sorted(marks, reverse=True))
        print(m[0:5])
        break


marks = []
n = int(input("Enter number of students whoes marks are to be displayed:"))
print("Enter marks for", n, "students(press ENTER after every students marks):")
for i in range(0, n):
    ele = int(input())
    marks.append(ele)
print("The marks of", n, "students are:")
print(marks)
print("Menu:\n1.Selection sort\n2.Bubble sort\n3.Exit")
while (1):
    s = int(input("\nChoose your option:"))
    if (s == 1):
        print("\nSelection sort:")
        selection_sort(marks)
        print("\nTop five marks:")
        top_five_marks(marks)
    elif (s == 2):
        print("\nBubble sort:")
        bubble_sort(marks)
        print("\nTop five marks:")
        top_five_marks(marks)
    elif (s == 3):
        print("Exit")
        break
    else:
        print("Invalid Option!")

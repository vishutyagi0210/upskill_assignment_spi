import sys

def main():
    lst = [1,2,3,4,5,1.2,2.3,2.3,2.4,4.5,6.7,'1','3','a','l','f','vishal','tushar','shlok','shivani','riya']

    int_lst = []
    float_lst = []
    cahr_lst = []
    string_lst = []

    for i in range(0,5):
        int_lst.append(lst[i])

    for i in range(5,10):
        int_lst.append(lst[i])


    for i in range(10,15):
        int_lst.append(lst[i])


    for i in range(15,20):
        int_lst.append(lst[i])




sys.exit(main())
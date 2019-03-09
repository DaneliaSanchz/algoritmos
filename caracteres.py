def reverseString(string):
    if string == "":
        return string
    else:
        return reverseString(string[1:]) + string[0]
        

if __name__ == '__main__':
    string = "Algorithms are love"
    result = reverseString(string)
    print(result)
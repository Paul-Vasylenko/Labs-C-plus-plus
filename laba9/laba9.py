str1=input("Enter first: ")
str2=input("Enter second: ")
str1=str1.split(" ")
str2=str2.split(" ")
i=0
for word1 in str1:
    for word2 in str2:
        if word1==word2:
            str1.remove(word1)
            str1.insert(i,"")
            i=i+1
            break
str1=(" ".join(str1)).strip()
print(str1)

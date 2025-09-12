"""FORMAT METHOD (STRINGS) 
Formats the values inside the string into a desired output. 
template.format(p1,p2...) """

print("{} is a {} boy".format("harry", "good")) #by default the first {} is 0 and so on

print("{1} is a {0} boy".format("harry", "good")) # we can set that to reorder the output\


##but this is and old method now we use f-string
name="harry"
quality="good"
print(f"{name} is a {quality} boy") 

#in javascript we use backticks and $(dollarsign)
#console.log(`${name} is a ${quality} boy`) 
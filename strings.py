name='shashwat'
age=21
print('hello i am'+name+' and my age is '+str(age))

#arguments by position
print('{},{},{}'.format('a','b','c'))
print('{2},{0},{1}'.format('a','b','c'))

#arguments by name
print('My name is {name} and my age is {age}'.format(name='chillu',age=13))
print('My name is {name} and my age is {age}'.format(name=name,age=age))

#f-strings
print(f'my name is {name} and i am {age} years old')

# String Methods
 s= 'hI thEre HoW aRe yoU'
 
 print(s.capitalize())
 print(s.upper())
 print(s.lower())
 print(s.swapcase())
 print(s.replace('yoU','YOU'))
 #count any thing in string
 print(s.lower().count('e'))
 
 print(s.startswith('hI'))
 print(s.startswith('HI'))
 print(s.endswith('hI'))
 print(s.endswith('yoU'))
 print(s.endswith('U'))
 
 print(s.split())

https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/decimal-to-any-base-official/ojquestion#

n = int(input())
base = int(input())
li = []
while n > 0:
    rem = n % base
    n //= base
    li.append(rem)
li.reverse()
print(''.join(map(str, li)))

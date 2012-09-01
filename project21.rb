#Project 21 from projecteuler.net
#Evaluate the sum of all the amicable numbers under 10000
#Coded by: James Standeven

#!/usr/bin/env ruby

arr = [0, 1]
sum = 0
top = 10000

def divisors n
  list = []
  m = 1 
  while m <= n/2
    if n % m == 0
      list << m
    end
    m += 1
  end
  list
end

0.upto(top){|c| arr[c] = divisors(c).inject(0, :+)}
2.upto(top) do |x| 
  if x == arr[arr[x]] && x != arr[x]
    sum += x  
  end
end
puts sum

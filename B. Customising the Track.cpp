eg n = 5     [a1,a2,a3,a4,a5]
we need to minimize
|a1-a2| + |a1-a3| + |a1-a4| + |a1-a5| + |a2-a3| + |a2-a4| + |a2-a5| + |a3-a4| + |a3-a5| + |a4-a5|
which can only be minimized if all above a1 and a2 are equal

to do this consider array of 10 ele => [8,3,6,11,5,2,1,7,10,4] , sum = 57
so 57/10 = 5 
ie 5,5,5,5,5,5,5,5,5,5
but we need to add 57%10 ie 7 cars as well in array
=> 5,5,5,6,6,6,6,6,6,6 for which inconvinience -> 21 (calculate using function given in ques)
  Now the inconvinience is minimized
to find inconvinicence -> 57%10 * 10-(57%10)

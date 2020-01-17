# String Permutation in C Language

e.g. 

​	permutation string: "abc"

​	print:

​		abc

​		acb

​		bac

​		bca 

​		cba

​		cab 

---

How to implement?

​	By  recursive strategy:

​	&emsp;&emsp; $$ permutation("abc") = \left\{  \begin{array}{c} a+permutation("bc") \\  b+permutation("ac") \\  c+permutation("ab") \end{array} \right.  $$ 


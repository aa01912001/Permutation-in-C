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

​	    permutation("abc") :

​		－"a" + permutation("bc")  

​		－"b" + permutation("ac")

​		－"c" + permutation("ab")
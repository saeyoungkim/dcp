/**
Given an arithmetic expression in Reverse Polish Notation, write a program to evaluate it.

The expression is given as a list of numbers and operands. For example: [5, 3, '+'] should return 5 + 3 = 8.

For example, [15, 7, 1, 1, '+', '-', '/', 3, '*', 2, 1, 1, '+', '+', '-'] should return 5, since it is equivalent to ((15 / (7 - (1 + 1))) * 3) - (2 + (1 + 1)) = 5.

You can assume the given expression is always valid.
*/

object P163 extends App {
    val list = List(15,7,1,1,"+","-","/",3,"*",2,1,1,"+","+","-")

    val stk = scala.collection.mutable.Stack[Int]()

    for(v <- list) {
        if(v.isInstanceOf[String]) {
            val b = stk.pop()
            val a = stk.pop()

            v match {
                case "+" => stk.push(a+b)
                case "-" => stk.push(a-b)
                case "/" => stk.push(a/b)
                case "*" => stk.push(a*b)
                case _ => throw new RuntimeException("invalid op")
            }
        } else stk.push(v.asInstanceOf[Int])
    }

    println(stk.top)
}
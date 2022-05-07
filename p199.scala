/**
This problem was asked by Facebook.

Given a string of parentheses, find the balanced string that can be produced from it using the minimum number of insertions and deletions. If there are multiple solutions, return any of them.

For example, given "(()", you could return "(())". Given "))()(", you could return "()()()()".
*/

object P199 extends App {
    val parentheses1 = "(()"
    val parentheses2 = "))()("

    def getBalancedParentheses(parentheses: String): String = {
        val stk = scala.collection.mutable.Stack[Char]()

        val sb = new StringBuilder

        for(ch <- parentheses) {
            if(ch == '(') {
                sb += ch
                stk.push(ch)
            } else if(stk.isEmpty) {
                sb ++= "()"
            } else {
                sb += ch
                stk.pop()
            }
        }

        sb ++= (")" * stk.size)

        sb.result
    }

    println(getBalancedParentheses(parentheses1))
    println(getBalancedParentheses(parentheses2))
}
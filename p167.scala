/**
This problem was asked by Airbnb.

Given a list of words, find all pairs of unique indices such that the concatenation of the two words is a palindrome.

For example, given the list ["code", "edoc", "da", "d"], return [(0, 1), (1, 0), (2, 3)].
*/

class Node(_idx: Int = -1) {
self=>
    var idx = _idx
    var nexts = scala.collection.mutable.Map[Char, Node]()

    def insert(str: String, i: Int = 0, rootIdx: Int): Unit = {
        if(i < str.length) {
            nexts += (str(i) -> (nexts.getOrElse(str(i), new Node())))
            nexts(str(i)).insert(str, i+1, rootIdx)
        }
        else {
            idx = rootIdx
        }
    }

    def add(substr: String, idx: Int = 0, redundantChar: Char, rootIdx: Int, buf: scala.collection.mutable.ListBuffer[List[Int]]): Unit = {
        
        if(substr.length == idx) {
            if(self.idx != -1 && self.idx != rootIdx) buf += List(rootIdx, self.idx)

            nexts.get(redundantChar) match {
                case None => ()
                case Some(node) => node.add(substr, idx, redundantChar, rootIdx, buf)
            }
        } else {
            nexts.get(substr(idx)) match {
                case None => ()
                case Some(node) => node.add(substr, idx+1, redundantChar, rootIdx, buf)
            }
        }
    }
};

object P167 extends App {
    val root = new Node()

    val list = List("code", "edoc", "da", "d")
    val buf = scala.collection.mutable.ListBuffer.empty[List[Int]]

    for {
        i <- 0 until list.length
    } {
        root.insert(str = list(i).reverse, rootIdx = i)
    }

    for {
        i <- 0 until list.length
    } {
        var tmp = list(i)
        var ch = tmp.last

        while(tmp.length > 0 && tmp.last == ch) {
            tmp = tmp.dropRight(1)
        }

        root.add(substr = tmp, redundantChar = ch, rootIdx = i, buf = buf);
    }

    buf.toList.foreach(println)
}
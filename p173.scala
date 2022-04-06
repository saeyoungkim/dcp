/**
Good morning! Here's your coding interview problem for today.

This problem was asked by Stripe.

Write a function to flatten a nested dictionary. Namespace the keys with a period.

For example, given the following dictionary:

{
    "key": 3,
    "foo": {
        "a": 5,
        "bar": {
            "baz": 8
        }
    }
}
it should become:

{
    "key": 3,
    "foo.a": 5,
    "foo.bar.baz": 8
}
*/

object P173 extends App {
    import scala.collection.mutable._
    val m = Map[String, Any]()
    m += (("key" -> 3))
    m += (("foo" -> Map[String, Any](("a" -> 5), ("bar" -> Map[String, Any](("baz" -> 8))))))

    def flatten(m: Map[String, Any]): Map[String, Int] = {
        val ret = Map[String, Int]()
        m.foreach { case (k,v) => 
            if(!(v.isInstanceOf[Int]))
                flatten(v.asInstanceOf[Map[String, Any]]).foreach { case(inner_k, inner_v) =>
                    ret += ((k + "." + inner_k) -> inner_v)
                }
            else
                ret += ((k -> v.asInstanceOf[Int]))
        }
        ret
    }

    flatten(m).foreach(println)
}
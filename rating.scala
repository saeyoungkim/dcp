/**
You have a data structure of employee information, including the employee's unique ID, performance rating, and direct subordinates' IDs.
You are given an array of employees employees where:
employees[i].id is the ID of the ith employee.
employees[i].rating is the individual rating value of the ith employee. (0-5)
employees[i].subordinates is a list of the IDs of the direct subordinates of the ith employee.
Given an string id that represents an employee's ID, return the rating value of the employee/manager.
The rating of a manager is the average of the ratings of his/her subordinates (both direct & indirect) and his individual rating
E(A)
/
E(B) E(C)
/ \
E(D) E(E)

R(A) = (R(B) + R(C) + R(D) + R(E) + R(A))/5

Input:         
[{"employeeA", 4, ["employeeB", "employeeC"]}, {"employeeB", 3, ["employeeD", "employeeE"]}, {"employeeC", 3, []}, {"employeeD", 5, []}, {"employeeE", 4, []}]  

*/

case class Employee(val id: String, val rating: Int, val subordinates: List[String])

object Rating extends App {
    val employeeList = List(Employee("employeeA", 4, List("employeeB", "employeeC")), Employee("employeeB", 3, List("employeeD", "employeeE")), Employee("employeeC", 3, Nil), Employee("employeeD",5,Nil), Employee("employeeE",4,Nil))
    import scala.collection.mutable._
    val mapping = Map[String, Employee]()

    employeeList.foreach { e =>
        mapping += ((e.id -> e))
    }

    def calcSumAndCount(e: Employee): (Int, Int) = {
        e.subordinates.foldLeft((e.rating, 1)) { case (acc, subordinate) =>
            val subordinateResult = calcSumAndCount(mapping(subordinate))

            (acc._1 + subordinateResult._1, acc._2 + subordinateResult._2)
        }
    }


    val (sum, count) = calcSumAndCount(mapping("employeeA"))

    println(sum.toDouble / count)
}
/**
This problem was asked by Facebook.

A graph is minimally-connected if it is connected and there is no edge that can be removed while still leaving the graph connected. For example, any binary tree is minimally-connected.

Given an undirected graph, check if the graph is minimally-connected. You can choose to represent the graph as either an adjacency matrix or adjacency list.
*/

object P182 extends App {
    // 0 -- 1 -- 2 -> minimally-connected
    // 0 -- 1 -- 2 -> no minimally-connected
    // |---------|

    // minimally-connected 
    // 1. we dont't have any cyclic graph
    // 2. if we travel from any one node, and all of node will be visited

    // dfs

    val n = 3

    val adjacencyMat1 = Array.fill[Array[Boolean]](n)(Array.fill[Boolean](n)(false))

    adjacencyMat1(0)(1) = true
    adjacencyMat1(1)(0) = true
    adjacencyMat1(1)(2) = true
    adjacencyMat1(2)(1) = true

    val adjacencyMat2 = Array.fill[Array[Boolean]](n)(Array.fill[Boolean](n)(false))

    adjacencyMat2(0)(1) = true
    adjacencyMat2(1)(0) = true
    adjacencyMat2(1)(2) = true
    adjacencyMat2(2)(1) = true
    adjacencyMat2(0)(2) = true
    adjacencyMat2(2)(0) = true

    def checkMinimallyConnected(mat: Array[Array[Boolean]]): Boolean = {
        // dont't have any cyclic graph
        val isVisited = Array.fill[Boolean](n)(false)
        def traversal(curr: Int, parent: Int): Boolean = {
            // current node
            isVisited(curr) = true

            Range(0,n).forall{ next =>
                if(mat(curr)(next)) {
                    if(next == parent)
                        true
                    else if(isVisited(next))
                        false
                    else 
                        traversal(next, curr)
                } else
                    true
            }
        }

        traversal(0, -1) && isVisited.forall(_ == true)
    }

    println(checkMinimallyConnected(adjacencyMat1))
    println(checkMinimallyConnected(adjacencyMat2))
}
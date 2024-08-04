import Foundation

func solution(_ ineq:String, _ eq:String, _ n:Int, _ m:Int) -> Int {
    if ineq == ">" && eq == "=" { return n >= m ? 1 : 0 }
    if ineq == ">" && eq == "!" { return n > m ? 1 : 0 }
    if ineq == "<" && eq == "=" { return n <= m ? 1 : 0 }
    if ineq == "<" && eq == "!" { return n < m ? 1 : 0 }
    return 0
}

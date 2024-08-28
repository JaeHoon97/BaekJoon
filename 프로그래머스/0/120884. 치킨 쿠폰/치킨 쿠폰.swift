import Foundation

func solution(_ chicken:Int) -> Int {
    var chicken = chicken
    var result = 0
    
    while chicken >= 10 {
        let share = chicken / 10
        let remain = chicken % 10
        chicken = share + remain
        result += share
    }
    
    return result
}
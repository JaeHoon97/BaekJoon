import Foundation

func solution(_ cards1:[String], _ cards2:[String], _ goal:[String]) -> String {
    var cardArr1 = cards1
    var cardArr2 = cards2
    var goalArr = goal
    
    while !goalArr.isEmpty {
        let word = goalArr.removeFirst()
        
        if let first = cardArr1.first, first == word {
            cardArr1.removeFirst()
        } else if let first = cardArr2.first, first == word {
            cardArr2.removeFirst()
        } else {
            return "No"
        }
    }
    
    return "Yes"
}
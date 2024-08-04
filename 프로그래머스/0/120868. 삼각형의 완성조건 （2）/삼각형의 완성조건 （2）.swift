import Foundation

func solution(_ sides:[Int]) -> Int {
    
    var sidesArr = sides.sorted()
    
    return (1...2000).filter {
        (sidesArr[1] - sidesArr[0]) < $0 && $0 < (sidesArr[1] + sidesArr[0])
    }.count
}
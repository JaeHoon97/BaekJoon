import Foundation

func solution(_ balls:Int, _ share:Int) -> Int {
    if share == 0 || balls == share { return 1 } // 0개를 선택하거나 모두 선택할 경우
    let r = balls - share
    let m = share
    let smaller = min(r, m) // 더 작은 값을 사용하여 범위 최적화
    let larger = max(r, m)
    
    let numerator = (larger+1...balls).reduce(1.0) { $0 * Double($1) }
    let denominator = (1...smaller).reduce(1.0) { $0 * Double($1) }
    
    return Int(numerator / denominator)
}
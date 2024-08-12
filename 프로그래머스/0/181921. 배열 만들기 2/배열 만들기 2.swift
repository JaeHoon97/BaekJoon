import Foundation

func solution(_ l:Int, _ r:Int) -> [Int] {
    var result: [Int] = []
    let size = String(r).count
    
    for i in 0..<Int(pow(2.0, Double(size))) {
        let num = String(i, radix: 2).map { return $0 == "0" ? "0" :"5" }.joined()
        if (l...r).contains(Int(num)!) { result.append(Int(num)!) }
    }
    
    return result.isEmpty ? [-1] : result
}
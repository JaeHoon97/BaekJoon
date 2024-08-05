import Foundation

func solution(_ numlist:[Int], _ n:Int) -> [Int] {
    // 튜플 배열로 변환
    let tupleArray = numlist.map { (abs($0 - n), $0) }
    
    // 정렬
    let sortedArray = tupleArray.sorted {
        if $0.0 != $1.0 {
            return $0.0 < $1.0
        } else {
            return $0.1 > $1.1
        }
    }
    
    // 원래 숫자만 추출하여 반환
    return sortedArray.map { $0.1 }
}
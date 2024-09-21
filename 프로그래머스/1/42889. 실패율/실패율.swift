import Foundation

func solution(_ N:Int, _ stages:[Int]) -> [Int] {
    var arr: [Int] = Array(repeating: 0, count: N + 1) // 인덱스는 0번부터 N번까지
    var failure: [Double] = Array(repeating: (0.0), count: N + 1) // 실패율 배열
    var total = stages.count // 전체 회원의 수
    
    for stage in stages {
        if stage <= N { // 스테이지가 인덱스 범위안에 있을 때
            arr[stage] += 1
        }
    }
    
    for i in 1...N {
        failure[i] = Double(arr[i]) / Double(total)
        total -= arr[i]
    }
    
    failure.removeFirst()
    
    return failure.enumerated()
        .sorted { ($0.element != $1.element) ? ($0.element > $1.element) : ($0.offset <= $1.offset) }
        .map{ $0.offset + 1}
}
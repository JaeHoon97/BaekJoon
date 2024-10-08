import Foundation

final class FileIO {
    private let buffer:[UInt8]
    private var index: Int = 0

    init(fileHandle: FileHandle = FileHandle.standardInput) {
        
        buffer = Array(try! fileHandle.readToEnd()!)+[UInt8(0)] // 인덱스 범위 넘어가는 것 방지
    }

    @inline(__always) private func read() -> UInt8 {
        defer { index += 1 }

        return buffer[index]
    }

    @inline(__always) func readInt() -> Int {
        var sum = 0
        var now = read()
        var isPositive = true

        while now == 10
                || now == 32 { now = read() } // 공백과 줄바꿈 무시
        if now == 45 { isPositive.toggle(); now = read() } // 음수 처리
        while now >= 48, now <= 57 {
            sum = sum * 10 + Int(now-48)
            now = read()
        }

        return sum * (isPositive ? 1:-1)
    }

    @inline(__always) func readString() -> String {
        var now = read()

        while now == 10 || now == 32 { now = read() } // 공백과 줄바꿈 무시

        let beginIndex = index-1

        while now != 10,
              now != 32,
              now != 0 { now = read() }

        return String(bytes: Array(buffer[beginIndex..<(index-1)]), encoding: .ascii)!
    }

    @inline(__always) func readByteSequenceWithoutSpaceAndLineFeed() -> [UInt8] {
        var now = read()

        while now == 10 || now == 32 { now = read() } // 공백과 줄바꿈 무시

        let beginIndex = index-1

        while now != 10,
              now != 32,
              now != 0 { now = read() }

        return Array(buffer[beginIndex..<(index-1)])
    }
}

struct Deque<T> {
    
    var enqueue: [T]
    var dequeue: [T] = []
    
    init(enqueue: [T]) {
        self.enqueue = enqueue
    }
    
    var count: Int {
        return enqueue.count + dequeue.count
    }
    
    var isEmpty: Bool {
        return enqueue.isEmpty && dequeue.isEmpty
    }
    
    var first: T? {
        return dequeue.isEmpty ? enqueue.first : dequeue.last
    }
    var last: T? {
        return enqueue.isEmpty ? dequeue.first : enqueue.last
    }
    
    mutating func pushFront(_ element: T) {
        dequeue.append(element)
    }
    
    mutating func popFront() -> T? {
        if dequeue.isEmpty {
            dequeue = enqueue.reversed()
            enqueue.removeAll()
        }
        return dequeue.popLast()
    }
    
    mutating func pushBack(_ element: T) {
        enqueue.append(element)
    }
    
    mutating func popBack() -> T? {
        if enqueue.isEmpty {
            enqueue = dequeue.reversed()
            dequeue.removeAll()
        }
        return enqueue.popLast()
    }
    
    mutating func removeAll() {
        enqueue.removeAll()
        dequeue.removeAll()
    }
    
}

let fIO = FileIO()
let N: Int = fIO.readInt()
let L: Int = fIO.readInt()
var arr: [Int] = Array(repeating: 0, count: N)
var result: String = ""
var deque: Deque<(Int, Int)> = Deque(enqueue: [])

for i in 0..<N{
    arr[i] = fIO.readInt()
}

for index in 0..<N {
    
    while !deque.isEmpty && deque.last!.1 > arr[index] {
        deque.popBack()
    }
    
    deque.pushBack((index, arr[index]))
    
    if deque.first!.0 < (deque.last!.0 - L + 1) {
        deque.popFront()
    }
    
    result += String(deque.first!.1) + " "
}

result.removeLast()
print(result)

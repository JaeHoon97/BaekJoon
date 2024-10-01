import Foundation

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

let N = Int(readLine()!)!
var deque = Deque<Int>.init(enqueue: [])

for i in 1...N {
    deque.pushBack(i)
}

while deque.count > 1 {
    deque.popFront()
    deque.pushBack(deque.popFront()!)
}

print(deque.first!)
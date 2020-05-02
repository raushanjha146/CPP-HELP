# STL (Standard Template Library)
C++ STL (Standard Template Library) is a powerful set of C++ template classes to provide general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures like vectors, lists, queues, and stacks.
</br> It is a library of container classes, algorithms, and iterators.

**STL has four components**
* Algorithms
* Containers
* Functions
* Iterators

![](FlowchartOfContainers.png?raw=true "How templates work")

## Containers
</br>Containers are used to manage collections of objects of a certain kind. There are several different types of containers like deque, list, vector, map etc.

* Sequence Containers: implement data structures which can be accessed in a sequential manner.
  * vector
  * list
  * deque
  * arrays
  * forward_list (In C++11)
  
* Container Adaptors : provide a different interface for sequential containers.
  * queue
  * priority_queue
  * stack
  
* Associative Containers : implement sorted data structures that can be quickly searched (O(log n) complexity).
  * set
  * multiset
  * map
  * multimap
  
* Unordered Associative Containers : implement unordered data structures that can be quickly searched
  * unordered_set (In C++11)
  * unordered_multiset (In C++11)
  * unordered_map (In C++11)
  * unordered_multimap (In C++11)
  
### Container class templates
#### Sequence containers:
| Name | Description |
| --- | --- |
| array | Array class (class template ) |
| vector | Vector (class template ) |
| deque | Double ended queue (class template )  |
| forward_list	| Forward list (class template )  |
| list | List (class template ) |

#### Container adaptors:
| Name | Description |
| --- | --- |
| stack | LIFO stack (class template ) |
| queue | FIFO queue (class template ) |
| priority_queue | Priority queue (class template )  |

#### Associative containers:
| Name  | Description |
| --- | --- |
| set | Set (class template ) |
| multiset | Multiple-key set (class template ) |
| map | Map (class template )  |
| multimap	| Multiple-key map (class template ) |
| list | List (class template ) |

#### Unordered associative containers:

| Name | Description |
| --- | --- |
| unordered_set | Unordered Set (class template ) |
| unordered_multiset | Unordered Multiset (class template ) |
| unordered_map | Unordered Map (class template )  |
| unordered_multimap	| Unordered Multimap (class template ) |


[comparison chart with the different member functions present on each of the different containers](STL_Member_Map_List.pdf)



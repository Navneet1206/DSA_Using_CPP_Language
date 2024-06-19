# Stacks in C++

## Table of Contents
1. [Introduction](#introduction)
2. [Definition](#definition)
3. [Operations](#operations)
   - [Push](#push)
   - [Pop](#pop)
   - [Peek/Top](#peektop)
   - [Empty](#empty)
   - [Size](#size)
4. [Types of Stacks](#types-of-stacks)
   - [Static Stack](#static-stack)
   - [Dynamic Stack](#dynamic-stack)
5. [Applications](#applications)
6. [Advantages of Stacks](#advantages-of-stacks)
7. [Disadvantages of Stacks](#disadvantages-of-stacks)
8. [Conclusion](#conclusion)

## Introduction
A stack is a fundamental data structure that follows the Last In, First Out (LIFO) principle. It allows operations at one end only, typically referred to as the top. Elements can be added (pushed) onto the stack or removed (popped) from the stack.

## Definition
A stack is a collection of elements with two primary operations:
- **Push:** Adds an element onto the top of the stack.
- **Pop:** Removes and returns the top element of the stack.

## Operations

### Push
- **Description:** Adds an element onto the top of the stack.
- **Complexity:** O(1)
- **Illustration:** ![Push Operation](stack_push.png)

### Pop
- **Description:** Removes and returns the top element of the stack.
- **Complexity:** O(1)
- **Illustration:** ![Pop Operation](stack_pop.png)

### Peek/Top
- **Description:** Returns the top element of the stack without removing it.
- **Complexity:** O(1)

### Empty
- **Description:** Checks if the stack is empty.
- **Complexity:** O(1)

### Size
- **Description:** Returns the number of elements in the stack.
- **Complexity:** O(1)

## Types of Stacks

### Static Stack
A static stack is implemented using a fixed-size array. Once the stack reaches its maximum capacity, it cannot accommodate additional elements.

### Dynamic Stack
A dynamic stack is implemented using a linked list or a resizable array (vector in C++). It can grow or shrink in size based on the number of elements it contains.

## Applications
- **Function Call Stack:** Used by compilers and interpreters to manage function calls, local variables, and return addresses during program execution.
- **Expression Evaluation:** Used in evaluating expressions, particularly those involving parentheses, where stacks help in managing nested structures.
- **Backtracking:** Algorithms like Depth-First Search (DFS) utilize stacks to manage backtracking efficiently.
- **Undo Mechanisms:** Used in applications to implement undo operations where the last action can be reversed by popping from the stack.

## Advantages of Stacks
- **Simple Operations:** Push and pop operations are efficient and straightforward.
- **Memory Management:** Efficient memory allocation and deallocation, especially in dynamic stacks.
- **Support for Functionality:** Supports recursive function calls and backtracking mechanisms in algorithms.

## Disadvantages of Stacks
- **Limited Access:** Limited access to elements, as only the top element can be accessed or removed.
- **Fixed Size (Static Stack):** Static stacks have a fixed maximum size, leading to overflow if exceeded.
- **Stack Overflow/Underflow:** Risk of overflow when pushing elements beyond capacity and underflow when popping from an empty stack.

## Conclusion
Stacks are essential data structures known for their simplicity and efficiency in managing data according to the Last In, First Out (LIFO) principle. Understanding their operations, types, applications, advantages, disadvantages, and considerations helps in leveraging stacks effectively in various computational tasks and algorithmic designs.

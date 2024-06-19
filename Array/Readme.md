# Arrays and Vectors in C++

## Table of Contents
1. [Introduction](#introduction)
2. [Arrays](#arrays)
   - [Declaration and Initialization](#declaration-and-initialization)
   - [Accessing Elements](#accessing-elements)
   - [Iterating Through Elements](#iterating-through-elements)
   - [Advantages and Disadvantages](#advantages-and-disadvantages)
3. [Vectors](#vectors)
   - [Declaration and Initialization](#declaration-and-initialization-1)
   - [Accessing Elements](#accessing-elements-1)
   - [Adding Elements](#adding-elements)
   - [Removing Elements](#removing-elements)
   - [Iterating Through Elements](#iterating-through-elements-1)
   - [Resizing Vectors](#resizing-vectors)
   - [Clearing Vectors](#clearing-vectors)
   - [Sorting and Finding Elements](#sorting-and-finding-elements)
   - [Advantages and Disadvantages](#advantages-and-disadvantages-1)
4. [Differences Between Arrays and Vectors](#differences-between-arrays-and-vectors)
5. [Conclusion](#conclusion)

## Introduction
Arrays and vectors are fundamental data structures in C++ used to store collections of elements. Arrays have a fixed size, while vectors are dynamic and can grow or shrink as needed. This guide covers the essential topics, operations, and differences between these two data structures.

## Arrays

### Declaration and Initialization
```cpp
int arr[5];              // Declaration of an array with 5 elements
int arr[5] = {1, 2, 3, 4, 5};  // Declaration and initialization

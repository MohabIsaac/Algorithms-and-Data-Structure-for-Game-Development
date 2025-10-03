# Gameplay Systems – DS&A and problem-solving (C++)

This repository contains small examples demonstrating data structures & algorithms applied to game development.

## 1. Nearest Enemy Finder

A simple system for finding the nearest enemy to a player.

Data Structure: Linear scan through a vector (O(n)).

Use Case: Target locking, AI decision making, AoE checks.

Trade-offs: Simple but not scalable for very large worlds.


## 2. Inventory System with Hash Map

A minimal inventory system using unordered_map for O(1) lookups of items by name.

Data Structure: unordered_map hash table.

Use Case: Unordered inventories where items need fast access.

Trade-offs: Very fast lookups, but no guaranteed order.

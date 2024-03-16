# 0x1A-hash_tables
This directory tests understanding of hash tables in `C`.
1. **0-hash_table_create.c** - `C` function that creates a hash table.
2. **1-djb2.c** - an hash function implementing the `djb2` algorithm.
3. **2-key_index.c** - `C` function that takes in a key and size of the array. It returns the index where the `key-value` pair gets stored in the array.
4. **3-hash_table_set.c** - `C` function that adds an element to the hash table. It adds or update the `key/value` to the hash table. It handles collisions by adding a new node(key/value) at the beginning of the list. It uses the chaining collision method to handle collisions.
5. **4-hash_table_get.c** - `C` function that retrieves a value associated with a key.
6. **5-hash_table_print.c** - `C` function that prints a hash table. It prints the `key/value` in the order that they appear in the array of hash table.
**6-hash_table_delete.c** - `C` function that deletes a hash table.

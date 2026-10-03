# Remove Duplicates While Preserving Order in C

## Problem

Remove duplicate characters from a string while preserving the first occurrence of each character.

## Examples

Input: `programming`
Output: `progamin`

Input: `banana`
Output: `ban`

## Concepts Used

* Strings
* Character arrays
* Character tracking
* Order preservation

## Approach

Use a fixed-size array to track previously encountered characters. Traverse the string from left to right and keep only the first occurrence of each character.

## Complexity

* Time Complexity: O(n)
* Auxiliary Space Complexity: O(1)

## Language

C

#!/usr/bin/python3
# 0-square.py
"""Define a class Square."""


class Square:
    """Represent a square."""
    def area(self):
        return self.__size ** 2
    def __init__(self, size=0):
        """Initialize a new Square.
        Args:
            size (int): The size of the new square.
    
        Raises: TypeError: If size is not an integer.
        Raises: ValueError: If size is less than zero        
        """
        if not isinstance(size, int):
            raise TypeError("size must be an integer")
        if (size < 0):
            raise ValueError("size must be >= 0 ")
        self.__size = size
    

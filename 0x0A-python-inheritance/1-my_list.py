#!/usr/bin/python3
"""
Contains the MyList class
"""

class MyList(list):
    """a subclass of the list"""
    def __init__(self):
        """initializes the object"""
        super().__init__()

    def print_sorted(self):
        """prints the sorted list"""
        print(sorted(self))

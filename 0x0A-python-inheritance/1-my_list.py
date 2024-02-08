#!/usr/bin/python3
# 1-my_list.py
"""List class MyList."""

class MyList(list):
    """Printing for the built-in list class."""

    def print_sorted(self):
        """List in sorted ascending order."""
        print(sorted(self))

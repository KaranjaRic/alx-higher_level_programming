#!/usr/bin/python3
"""
contains the JSON string
"""

import json

def to_json_string(my_obj):
    """returns JSON representation of an object (string)"""
    return json.dumps(my_obj)

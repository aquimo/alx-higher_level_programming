#!/usr/bin/python3
"""0x11. Python - Network #1
"""

import urllib.request

url = 'https://alx-intranet.hbtn.io/status'

try:
    with urllib.request.urlopen(url) as response:
        html = response.read().decode('utf-8')
        print("- Body response:")
        print("\t- type:", type(html))
        print("\t- content:", html)
except urllib.error.URLError as e:
    print("Error accessing the URL:", e.reason)
    # charset can be gained with response.headers.get_content_charset()

#!/usr/bin/python3
"""0x11. Python - Network #1
"""

if __name__ == "__main__":
    from requests import get

    response = get('https://alx-intranet.hbtn.io/status')
    print('Body response:\n\t- type: {}\n\t- content: {}'.format(
        type(response.text), response.text))

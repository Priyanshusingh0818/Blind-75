import requests

WEBKEY = "f5f380520823c419a0585a95d16011477e77e53f"
DOT = "99689"

url = f"https://mobile.fmcsa.dot.gov/qc/services/carriers/{DOT}?webKey={WEBKEY}"

proxies = {
    "http": "http://your-residential-proxy:port",
    "https": "http://your-residential-proxy:port",
}

session = requests.Session()
session.headers.update({
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/125.0.0.0 Safari/537.36",
    "Accept": "application/json, text/plain, */*",
    "Referer": "https://mobile.fmcsa.dot.gov/",
})

response = session.get(url, proxies=proxies)
print(response.status_code)
print(response.json())
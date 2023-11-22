url = input()

username = url[url.find("username=") + 9: url.find("&pwd")]
pwd = url[url.find("pwd=") + 4: url.find("&profile")]
profile = url[url.find("profile=") + 8: url.find("&role")]
role = url[url.find("role=") + 5: url.find("&key")]
key = url[url.find("key=") + 4:]

print(f"username: {username}")
print(f"pwd: {pwd}")
print(f"profile: {profile}")
print(f"role: {role}")
print(f"key: {key}")

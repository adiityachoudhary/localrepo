"""MATCH CASE 
Python 3.10 introduced the match statement, which is similar to the switch statement 
found in other programming languages.   
The basic syntax of the match statement involves matching a variable against several 
cases using the case keyword."""

# 2xx = Success
# 3xx = Redirection
# 4xx = Client Error (your mistake)
# 5xx = Server Error (server’s fault)

def http_status(status):
    match status:
        case 200: return "OK"
        case 400: return "Bad request"
        case 401: return "Unauthorized"
        case 403: return "Forbidden"
        case 404: return "Not found"
        case 408: return "Request Timeout"
        case 429: return "Too many request"
        case 500: return "Internal Server Error"
        case 502: return "Bad Gateway"
        case 503: return "Service Unavailable"
        case 504: return "Gateway Timeout"

        # (case _ : ) this is like a default case in other programming languages if the above case doesn't match this will trigger
        case _ : return "Unknown status"  

print(http_status(404))
print(http_status(504))
print(http_status(502))
print(http_status(200))
print(http_status(75))
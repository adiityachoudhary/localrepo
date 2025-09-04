# detect "Harry in a post"
#we have used string.lower() to do a fair comparison between strings so that it wont't be case sensitive

post1="""Harry is the owner of Code with Harry youtube channel.
He teaches programming on his channel.
He is from West Bengal
He studied from IIT Kharagpur"""

post2="""Khapra is the owner of Apna College youtube channel.
She teaches programming on his channel.
She is from Haryana
She had worked in Microsoft"""

if ("Harry".lower() in  post1.lower()):
    print("YES, The post is talking about Harry")
else:
    print("NO, The post is NOT talking about Harry")

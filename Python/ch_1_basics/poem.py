#to print multilines at once use  triple single quotes """
import pyttsx3

#object creation
engine=pyttsx3.init()

poem="""Twinkle, twinkle, little star,
How I wonder what you are!
Up above the world so high,
Like a diamond in the sky.

When the blazing sun is gone,
When he nothing shines upon,
Then you show your little light,
Twinkle, twinkle, all the night.

Then the trav'ller in the dark,
Thanks you for your tiny spark,
He could not see which way to go,
If you did not twinkle so.

In the dark blue sky you keep,
And often thro' my curtains peep,
For you never shut your eye,
Till the sun is in the sky.

'Tis your bright and tiny spark,
Lights the trav'ller in the dark:
Tho' I know not what you are,
Twinkle, twinkle, little star."""

print(poem)

# changing rate of voice
rate=engine.getProperty('rate')
engine.setProperty('rate', 200)   

#voice change to female
voices=engine.getProperty('voices')
engine.setProperty('voice', voices[1].id)   # changing index, changes voices. 1 for female

#saving this poem to a file
engine.save_to_file('Twinkle, twinkle, little star, How I wonder what you are!', 'Python\CHAPTER_1\poem.mp3')

engine.say('Whatever you put in this engine.say I will say it out loud like this - Twinkle, twinkle, little star, How I wonder what you are!')
engine.runAndWait()
engine.stop()
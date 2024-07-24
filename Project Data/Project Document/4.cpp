Project Document for ConnectNow-62922
Project Overview
Project Name: ConnectNow-62922

Description: ConnectNow-62922 is a basic social networking application implemented in C++. The application allows users to create profiles, establish friendships, send messages, and manage social groups. It provides functionalities to display all users, friendships, and mutual friends between users.

Features
User Management:

Add new users with details like first name, last name, age, and gender.
Display all registered users.
Friendship Management:

Establish friendships between users.
Display all friendships.
Display mutual friends between two users.
Messaging System:

Send messages between users.
Display sent messages with a timestamp.
Social Group Management:

Create and manage social groups.
Add members to groups.
Display all messages in a group.
Class Descriptions
1. User Class
Attributes:

string firstName
string lastName
int age
string gender
Methods:

User()
User(string firstName, string lastName, int age, string gender)
2. Message Class
Attributes:

string sender
string receiver
string content
time_t timestamp
Methods:

Message()
Message(string sender, string receiver, string content)
void displayMessage()
3. SocialGroup Class
Attributes:

string groupName
vector<pair<string, string>> messages
set<string> members
Methods:

SocialGroup()
SocialGroup(string groupName)
void addMember(string userName)
void addMessage(string userName, string content)
void displayMessages()
Global Variables
map<string, User> mapUserName - Stores users with their usernames.
map<string, set<string>> Friends - Stores friendships between users.
Functions
void addUser(string userName, User user)
void makeThemFriend(string userName1, string userName2)
void displayAllUsers()
void displayAllFriendships()
void displayMutualFriends(string userName1, string userName2)
Usage Instructions
Add User:

Select option 1 and enter the user's details to add a new user.
Make Friends:

Select option 2 and enter the usernames of two users to establish a friendship.
Display All Users:

Select option 3 to display all registered users.
Display All Friendships:

Select option 4 to display all established friendships.
Display Mutual Friends:

Select option 5 and enter the usernames of two users to display their mutual friends.
Send Message:

Select option 6 to send a message from one user to another.
Add Group Member:

Select option 7 and enter a username to add the user to a social group.
Display Group Messages:

Select option 8 to display all messages in the social group.
Exit:

Select option 9 to exit the application.
Example Usage
Add User:

plaintext
Copy code
1. Add User
Enter Username: john_doe
Enter First Name: John
Enter Last Name: Doe
Enter Age: 25
Enter Gender: Male
Make Friends:

plaintext
Copy code
2. Make Friends
Enter First Username: john_doe
Enter Second Username: jane_smith
Send Message:

plaintext
Copy code
6. Send Message
Enter Sender Username: john_doe
Enter Receiver Username: jane_smith
Enter Message Content: Hello, Jane!
Display Group Messages:

plaintext
Copy code
8. Display Group Messages


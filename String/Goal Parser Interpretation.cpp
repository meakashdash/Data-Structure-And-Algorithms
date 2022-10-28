/*You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.

 

Example 1:

Input: command = "G()(al)"
Output: "Goal"
Explanation: The Goal Parser interprets the command as follows:
G -> G
() -> o
(al) -> al
The final concatenated result is "Goal".
Example 2:

Input: command = "G()()()()(al)"
Output: "Gooooal"
Example 3:

Input: command = "(al)G(al)()()G"
Output: "alGalooG"*/
class Solution {
public:
    string interpret(string command) 
    {
        string s;
        int n=command.size();
        for(int i=0;i<n;i++)
        {
            if(command[i]=='G')
            {
                s=s+'G';
            }
            if(command[i]=='(')
            {
                if(command[i+1]==')')
                {
                    s=s+'o';
                }
                else if(command[i+1]=='a')
                {
                    s=s+'a';
                    s=s+'l';
                }
            }
        }
        return s;
    }
};

https://leetcode.com/problems/unique-email-addresses/description/
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        for(auto& email:emails){
            auto at_location=find(email.begin(),email.end(),'@');
            auto end_after_removing_dots=remove(email.begin(),at_location,'.');
            auto plus_location=find(email.begin(),end_after_removing_dots,'+');
            email.erase(plus_location,at_location);
        }
         return unordered_set(emails.begin(),emails.end()).size();
    }
};
/*
First, we loop over the string emails. 
The find function finds the @ for the domain name. After, the end_after_location stops when it gets '.' in the string and removes chars from where the find function stopped. 
email.erase has an internal find function which finds the '+' character and then erases the string after the + char. 
The final string after these operations is stored in the set and returned.
*/

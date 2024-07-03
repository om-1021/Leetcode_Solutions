# Write your MySQL query statement below
-- Select tweet_id from Tweets where Length(content) >15;
select tweet_id from tweets where char_length(content) > 15;
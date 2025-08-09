-- this is a comment
ALTER TABLE users ADD COLUMN salary INT DEFAULT 0;
SELECT *FROM users;

-- ALTER TABLE users DROP created_at; 
-- this deletes the column created_at  
-- SELECT *FROM users;
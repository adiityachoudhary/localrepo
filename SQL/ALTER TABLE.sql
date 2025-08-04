-- this is a comment
ALTER TABLE users ADD COLUMN is_active BOOLEAN DEFAULT TRUE;
SELECT *FROM users;

ALTER TABLE users DROP created_at; 
-- this deletes the column created_at  
SELECT *FROM users;
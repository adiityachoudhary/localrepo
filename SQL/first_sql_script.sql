CREATE DATABASE startersql;
USE startersql;

CREATE TABLE users(
	id INT AUTO_INCREMENT PRIMARY KEY,
	name VARCHAR(30) NOT NULL,
	email VARCHAR(50) UNIQUE,
    gender ENUM('Male', 'Female','Others'),
    dob DATE,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

SELECT *FROM users;
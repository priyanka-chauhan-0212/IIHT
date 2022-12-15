CREATE DATABASE book_db;

CREATE TABLE
    `book_db`.`tbl_book` (
        `book_id` INT NOT NULL AUTO_INCREMENT,
        `book_name` VARCHAR(255) NOT NULL,
        `book_author` VARCHAR(255) NOT NULL,
        `book_category` ENUM ("Sci-Fi", "Novel") NOT NULL DEFAULT 'Novel',
        `book_price` DOUBLE (10, 2) NOT NULL,
        PRIMARY KEY (`book_id`),
        INDEX (`book_author`),
        UNIQUE (`book_name`)
    );

CREATE TABLE
    tbl_book (
        book_id INT (10) NOT NULL AUTO_INCREMENT,
        book_name VARCHAR(255) NOT NULL,
        book_author VARCHAR(255) NOT NULL,
        book_category ENUM ("Sci-Fi", "Novel") NOT NULL DEFAULT "Novel",
        book_price DOUBLE (10, 2) NOT NULL,
        PRIMARY KEY (book_id),
        UNIQUE (book_name),
        INDEX (book_author)
    );

ALTER TABLE tbl_book ADD book_language ENUM ("Hindi", "English") NOT NULL DEFAULT "Hindi";

ALTER TABLE tbl_book MODIFY COLUMN `book_language` ENUM ("Hindi", "Gujarati", "English") NOT NULL DEFAULT "English";

ALTER TABLE `tbl_book`
DROP `book_language`;

INSERT INTO
    `tbl_book` (
        `book_id`,
        `book_name`,
        `book_author`,
        `book_category`,
        `book_price`,
        `book_language`
    )
VALUES
    (
        NULL,
        'Alchemist',
        'Paulo Cohelo',
        'Novel',
        '222',
        'English'
    );

INSERT INTO
    tbl_book (
        `book_name`,
        `book_author`,
        `book_category`,
        `book_language`,
        `book_price`
    )
VALUES
    (
        'Harry Potter 1',
        'J. K. Rowling',
        'Sci-Fi',
        'Hindi',
        '1234'
    );

INSERT INTO
    tbl_book (
        `book_name`,
        `book_author`,
        `book_category`,
        `book_language`,
        `book_price`
    )
VALUES
    (
        'Harry Potter 2',
        'J. K. Rowling',
        'Sci-Fi',
        'Hindi',
        '1235'
    ),
    (
        'Harry Potter 3',
        'J. K. Rowling',
        'Sci-Fi',
        'Hindi',
        '1235'
    ),
    (
        'Harry Potter 4',
        'J. K. Rowling',
        'Sci-Fi',
        'Hindi',
        '1235'
    );

UPDATE tbl_book
SET
    `book_price` = 1200
WHERE
    `book_id` = 4;

UPDATE tbl_book
SET
    `book_gst` = 18
WHERE
    1;

UPDATE tbl_book
SET
    `book_gst` = 20
WHERE
    `book_category` = 'Sci-Fi';

UPDATE tbl_book
SET
    `book_price` = 1500
WHERE
    `book_id` > 1
    AND `book_id` < 5;

UPDATE tbl_book
SET
    `book_price` = 1500,
    `book_language` = 'English'
WHERE
    `book_name` = 'Harry Potter 3';

DELETE FROM tbl_book
WHERE
    book_id = 7;

DELETE FROM tbl_book
WHERE
    `book_language` = 'English';

ALTER TABLE `tbl_book`
DROP `book_language`;

CREATE TABLE
    `book_db`.`tbl_language` (
        `lang_id` INT NOT NULL AUTO_INCREMENT,
        `lang_name` VARCHAR(255) NOT NULL,
        PRIMARY KEY (`lang_id`)
    );

INSERT INTO
    `tbl_language` (`lang_id`, `lang_name`)
VALUES
    (NULL, 'English'),
    (NULL, 'Hindi');

ALTER TABLE `tbl_book` ADD `book_language` INT (10) NOT NULL;

ALTER TABLE `tbl_book` ADD CONSTRAINT `fk_from_lang_to_book` FOREIGN KEY (`book_language`) REFERENCES `tbl_language` (`lang_id`) ON DELETE RESTRICT ON UPDATE RESTRICT;

UPDATE `tbl_book`
SET
    `book_language` = 1
WHERE
    1;

TRUNCATE TABLE `book_db`.`tbl_book`;

TRUNCATE TABLE `book_db`.`tbl_language`;

INSERT INTO
    `tbl_language` (`lang_name`)
VALUES
    ('English US'),
    ('English UK');

ALTER TABLE `tbl_language` ADD UNIQUE (`lang_name`);

SELECT
    *
FROM
    `city`;

SELECT
    `city_id`,
    `city`
FROM
    `city`
WHERE
    1;

SELECT
    `country_id`,
    `city`,
    `city_id`
FROM
    `city`
WHERE
    1;

SELECT
    `address_id`,
    `address`,
    `district`
FROM
    `address`
WHERE
    `district` = 'Abu Dhabi';

SELECT
    `address_id`,
    `address`,
    `district`
FROM
    `address`
WHERE
    `district` LIKE 'A%';

SELECT
    `address_id`,
    `address`,
    `district`
FROM
    `address`
WHERE
    `district` LIKE '_a%na%';

SELECT
    `payment_id`,
    `payment_date`,
    `amount`
FROM
    `payment`
WHERE
    `amount` >= 4;

SELECT
    `payment_id`,
    `payment_date`,
    `amount`
FROM
    `payment`
WHERE
    `amount` >= 4
    AND `amount` <= 6;

SELECT
    `payment_id`,
    `payment_date`,
    `amount`
FROM
    `payment`
WHERE
    `amount` BETWEEN 4 AND 6;

SELECT
    `address_id`,
    `address`,
    `district`
FROM
    `address`
WHERE
    `district` = 'Alberta'
    OR `district` = 'Nagasaki'
    OR `district` = 'Texas';

SELECT
    `address_id`,
    `address`,
    `district`
FROM
    `address`
WHERE
    `district` IN ('Alberta', 'Nagasaki', 'Texas');

SELECT
    `payment_id`,
    `payment_date`,
    `amount`
FROM
    `payment`
WHERE
    `amount` NOT BETWEEN 4 AND 6;

SELECT
    `address_id`,
    `address`,
    `district`
FROM
    `address`
WHERE
    `district` NOT IN ('Alberta', 'Nagasaki', 'Texas');

SELECT
    `address_id`,
    `address`,
    `district`
FROM
    `address`
WHERE
    `district` NOT IN ('Alberta', 'Nagasaki', 'Texas')
ORDER BY
    `district` ASC;

SELECT
    `address_id`,
    `address`,
    `district`
FROM
    `address`
WHERE
    `district` NOT IN ('Alberta', 'Nagasaki', 'Texas')
ORDER BY
    `district` DESC;

SELECT
    `address_id`,
    `address`,
    `district`
FROM
    `address`
WHERE
    `district` NOT IN ('Alberta', 'Nagasaki', 'Texas')
ORDER BY
    3 ASC;

SELECT
    MAX(`length`)
FROM
    `film`;

SELECT
    MAX(`length`) AS 'max_length'
FROM
    `film`;

SELECT
    MIN(`length`) AS 'max_length'
FROM
    `film`;

SELECT
    `film_id` AS 'ID',
    `title`,
    `release_year` AS 'Year'
FROM
    `film`;

SELECT
    COUNT(`film_id`)
FROM
    `film`;

SELECT
    SUM(`amount`) AS 'total_amount'
FROM
    `payment`;

SELECT
    SUM(`amount`) AS 'total_amount'
FROM
    `payment`
WHERE
    `amount` < 3;

SELECT
    AVG(`amount`) AS 'avg_amount'
FROM
    `payment`;

SELECT
    MAX(`length`) AS 'max_length',
    `rating`
FROM
    `film`
GROUP BY
    `rating`;

SELECT
    MIN(`length`) AS 'min_length',
    `rating`
FROM
    `film`
GROUP BY
    `rating`;

SELECT
    COUNT(`film_id`) AS 'total_movies',
    `rating`
FROM
    `film`
GROUP BY
    `rating`;

SELECT
    COUNT(`film_id`) AS 'total_movies',
    `rating`
FROM
    `film`
GROUP BY
    `rating`
ORDER BY
    1 ASC;

    -- changes testing
--let $query= CREATE PROCEDURE p1() BEGIN DECLARE var $type; DECLARE rec ROW(var $type); CREATE TABLE t1 AS SELECT var,rec.var FROM DUAL;END
--eval $query
CALL p1();
SHOW CREATE TABLE t1;
DROP TABLE t1;
DROP PROCEDURE p1;
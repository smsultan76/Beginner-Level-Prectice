<?php
    $servername = "localhost";
    $username = "root";
    $password = "";
    $database_name = "Myclass";
    try{
        $conn = mysqli_connect($servername,$username,$password,$database_name); // need a variable cause we use it to create or manage table.
        echo "Database Connected.<br>";
    }catch(mysqli_sql_exception){
        echo "Can't Connect!<br>";
    }
?>

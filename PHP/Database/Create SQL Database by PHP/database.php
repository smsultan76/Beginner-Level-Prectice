<?php
    $servername = "localhost";  // Replace with your MySQL server hostname
    $username = "root";         // Replace with your MySQL username
    $password = "";             // Enter your MySQL password
    $conn = new mysqli($servername,$username,$password);
    try{
    $sql = "CREATE DATABASE Myclass"; // Enter database name whatever you want. I enterd Myclass.
    $conn->query($sql);
    echo "Database Created.<br>";
    }catch(mysqli_sql_exception){
        echo("Faild. May already exist this name.<br>");
    }
?>

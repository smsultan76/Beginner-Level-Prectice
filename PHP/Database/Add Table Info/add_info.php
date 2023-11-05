<!-- First we need to connect our database to add data on a table -->
<?php
    $servername = "localhost";
    $username = "root";
    $password = "";
    $database_name = "Myclass";
    try{
        // we created same file as connect_database.php here exta need a variable.
        $conn = mysqli_connect($servername,$username,$password,$database_name);
        // echo "Database Connected.<br>";
    }catch(mysqli_sql_exception){
        // echo "Can't Connect to database!<br>";
    }
?>


<!-- You can write both code in deferent file. Then needs to include this file in bellow code -->
<?php
    // Here a code for add data in a table on selected database.
    $sql = "INSERT INTO students (Id,Name,Address,Phone)
    VALUES(100,'Mobin','Tangail',1232222)";
         //SQL Code for insert data in a table
    try{
        mysqli_query($conn,$sql);
        echo "Sql Exicuted.<br>";
    }catch(mysqli_sql_exception){
        echo "Faild to exicute.<br>";
    }
?>
      
<?php
    // Here another code for add data in a table on selected database.
    $sql = "INSERT INTO students (Id,Name,Address,Phone)
            VALUES(101,'Sultan','Dhaka',1231111)";
    	         //SQL Code for insert data in a table
    try{
        mysqli_query($conn,$sql);
        echo "Sql Exicuted.<br>";
    }catch(mysqli_sql_exception){
        echo "Faild to exicute.<br>";
    }
    mysqli_close($conn);        //Lastly close connection.
?>
<!-- We can do it in same file by changing information -->

<!-- First we need to connect our database to create table -->
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
    // Here code for creating a table on selected database.
    $sql = "CREATE TABLE students (
    	Id INT  , 
    	Name VARCHAR(20) , 
    	Address VARCHAR(35), 
    	Phone INT )";           //SQL Code for create a table
    try{
    mysqli_query($conn,$sql);
    echo "Sql Exicuted.<br>";
    }catch(mysqli_sql_exception){
        echo "Faild to exicute.<br>";
    }
    mysqli_close($conn);        //Lastly close connection.
?>

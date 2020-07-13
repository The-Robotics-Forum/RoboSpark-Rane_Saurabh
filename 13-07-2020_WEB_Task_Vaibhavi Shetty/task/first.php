<?php
session_start();
include('db.php');
if(isset($_POST['submit']))
{
    $student_id= $_POST['student_id'];
    //echo $stud_id;
    

    $query = "SELECT * FROM `student` WHERE `student_id`='$student_id'  ";
    
    $run = mysqli_query($con, $query);
    $row= mysqli_num_rows($run);

    if($row==1)
    {
        
        $stud_row= mysqli_fetch_assoc($run);   //fetching values
        
        $id= $student_id;
        $name = $stud_row['name'];
        $branch = $stud_row['branch'];
        $CGPA = $stud_row['CGPA'];

       // echo $_SESSION[student_id]. $_SESSION['name';]
    }
    else
    {
        echo "Login Unsuccessful";
    }

}

?>

<html lang="en">
    <head>
        <meta charset="UTF-8"/>
        <title>REQUIRED DETAILS</title>
        <link rel="stylesheet" href="first.css">
    </head>
    <body>
        <form  class="login-box">
            <h1>Student details</h1>
            <div class="info_box">
                <?php if($row == 1) { ?>
    
                    <h3><?php  $student_id; ?></h3>
                    <h3>NAME: <?php echo $name;?></h3>
                    <h3>BRANCH: <?php echo $branch;?></h3>
                    <h3>CGPA: <?php echo $CGPA;?></h3>
                <?php } ?>
        </form>
    </body>
</html>
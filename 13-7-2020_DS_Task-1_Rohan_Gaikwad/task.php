<?php
include('db.php');

if(isset($_POST['submit']))
{
    $user_id = $_POST['number'];
    $query = "SELECT * FROM `task` WHERE `user_id`='$user_id'";
    $run=mysqli_query($CON,$query);
    $row=mysqli_num_rows($run);
    if($row==1)
	{
        $user_row=mysqli_fetch_assoc($run);
       $name = $user_row['name'];
      $surname = $user_row['surname'];
      $year = $user_row['year'];
       $cgpa = $user_row['cgpa'];
       $email = $user_row['email'];
       $branch = $user_row['branch'];
    }
    else
    {
        echo "Sorry but selected user id doesn't belong to any candidate...";
       $name = "NA";
      $surname = "";
      $year = "NA";
       $cgpa = "NA";
       $email = "NA";
       $branch = "NA";
    }
}
?>

<html>
    <head>
        <link rel="stylesheet" href="task.css">

    </head>

    <body>
        <div class="art">
       <h2> Hi...! <?php echo $name ;?></h2>
       <h3> <?php echo "Your stored inforamtion is as : "."<br>"; ?></h3>
       <h3> Name :  <?php echo $name."  ".$surname."<br>" ;?></h3>
       <h3> Year :  <?php echo $year."<br>" ;?></h3>
       <h3> Branch :  <?php echo $branch."<br>" ;?></h3>
       <h3> CGPA :  <?php echo $cgpa."<br>" ;?></h3>
       <h3> Email :  <?php echo $email."<br>" ;?></h3>
    </body>
</html>


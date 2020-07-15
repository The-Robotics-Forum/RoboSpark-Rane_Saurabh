<?php
session_start();
include('db.php');
if(isset($_POST['submit']))
{
    $stud_name=$_POST['stud_name'];
    

    $query="SELECT * FROM `students` WHERE `stud_name`='$stud_name'";
    $run = mysqli_query($con,$query);
    $row = mysqli_num_rows($run);
    if($row==1){
        $_SESSION['stud_name']=$stud_name;
        echo "Your data :"."</br>";
        $user_row = mysqli_fetch_assoc($run);
        echo "ID :" .$user_row['stud_id']."</br>"."Name :".$user_row['stud_name']."</br>"."CGPA :".$user_row['stud_cgpa']."</br>"."Branch :".$user_row['stud_branch']."</br>";
        echo "Thanks for the search...";       
    }
    else{
        echo "You searched a wrong person...pls go through the options given...";
    }
    
}
?>

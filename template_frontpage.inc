<?php
foreach ($pages as $ind => $page) { 
    echo "<div class='work'>";
       if($page->content_page != null) {
          echo "<a href=.?" . $ind . ">";
       }
       elseif($page->ext_link != null) {
          echo "<a href='http://" . $page->ext_link . "' target='_ext_'>";
       }
             
       echo "<img src=img/pages/" . $page->square_image .  " class='media' alt=''/>";

       if($page->content_page != null || $page->ext_link != null) {
             echo "<div class='caption'>";
                echo "<div class='work_title'>";
                   echo "<h1>" . $page->link_text . "</h1>";
                echo "</div>";
             echo "</div>";
          echo "</a>";
       }
    echo "</div>";
} 
?>	

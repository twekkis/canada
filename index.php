<?php

class page {

  public $ext_link;
  public $square_image='white_square.png';
  public $link_text;
  public $content_title;
  public $content_image;
  public $content_page;
  public $link_in_sidebar;
}

$url = "http://".$_SERVER['HTTP_HOST'].$_SERVER['REQUEST_URI'];

$page_no = parse_url($url, PHP_URL_QUERY);

$pages = array();
include ('content.inc');
?>


<!DOCTYPE html>
<html lang="en">
<head>
        <title>Magnetic - Stunning Responsive HTML5/CSS3 Photography Wensite Template</title>
        <meta charset="utf-8">
        <meta name="author" content="pixelhint.com">
        <meta name="description" content="Magnetic is a stunning responsive HTML5/CSS3 photography/portfolio website template"/>
        <meta name="viewport" content="width=device-width, initial-scale=1.0, minimum-scale=1.0" />
        <link rel="stylesheet" type="text/css" href="css/reset.css">
        <link rel="stylesheet" type="text/css" href="css/main.css">
    <script type="text/javascript" src="js/jquery.js"></script>
    <script type="text/javascript" src="js/main.js"></script>
</head>
<body>

        <?php
                include('template_sidebar.inc');
        ?>
        <section class="main clearfix">
                <?php
                   if ($page_no != null && $page_no < count($pages) && $pages[$page_no]->content_page != null) {
                        require_once('template_subpage.inc');
                   }
                   else {
                        require_once('template_frontpage.inc');
                   }
                ?>
        </section><!-- end main -->
</body>
</html>


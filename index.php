<?php

class page {

  public $ext_link;
  public $square_image='transparent_square.png';
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
        <title>HIFK 05 - Pohjois-Amerikka 2017</title>
        <meta http-equiv="Content-Type">
        <meta content="text/html">
        <meta charset="utf-8">
        <meta name="author" content="">
        <meta name="description" content=""/>
        <meta name="viewport" content="width=device-width, initial-scale=1.0, minimum-scale=1.0" />
        <link rel="stylesheet" type="text/css" href="css/reset.css">
        <link rel="stylesheet" type="text/css" href="css/subpage_responsive.css">
        <link rel="stylesheet" type="text/css" href="css/frontpage_responsive.css">
    <script type="text/javascript" src="js/jquery.js"></script>
    <script type="text/javascript" src="js/carouFredSel.js"></script>
    <script type="text/javascript" src="js/main.js"></script>
    <!--[if lt IE 9]>
    <script>
      document.createElement('header');
      document.createElement('nav');
      document.createElement('section');
      document.createElement('social');
      document.createElement('footer');
    </script>
    <![endif]-->
</head>
<body>

       <header>
                <div class="wrapper">
                        <a href="."><img src="img/pages/logo.png" alt="logo" class="logo"></a>
                        <a href="." class="menu_icon" id="menu_icon"></a>
                        <nav id="nav_menu">
                                <ul>
                                    <?php
                                       foreach ($pages as $ind => $page) {
                                         if($page->link_in_sidebar != null) {
                                           echo "<li><a href=.?" . $ind . ">" . $page->link_text . "</a></li>";
                                         }
                                       }
                                    ?>
<!--
                                        <li><a href=".?0">HIFK E1 Joukkue</a></li>
                                        <li><a href=".?1">Pohjois-Amerikan matka</a></li>
                                        <li><a href=".?2">Tue meitä</a></li>
-->
                                </ul>
                        </nav>
<!--
                        <ul class="social">
                                <li><a class="fb" href="#"></a></li>
                                <li><a class="twitter" href="#"></a></li>
                                <li><a class="gplus" href="#"></a></li>
                        </ul>
-->
                </div>
        </header><!--  End Header  -->

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
    <div class=copy>
        <p class="rights">Web copyright © template: www.pixelhint.com, images: www.pixabay.com, icons: www.freepik.com, www.flaticon.com - All rights reserved</p>
    </div>
</body>
</html>



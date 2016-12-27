<?php

$pages[0] = new page();
$pages[0]->link_text = 'HIFK 05 Juniorit';
$pages[0]->square_image = "matkalogo.png";
$pages[0]->content_title = "Joukkue";
$pages[0]->content_image = "joukkuekuva_yla.jpg";
$pages[0]->content_page = 'joukkue.inc';
$pages[0]->link_in_sidebar = "yes";

$pages[1] = new page();
$pages[1]->link_text = 'Turnaus- ja pelimatka';
$pages[1]->content_title = "Pohjois-amerikka";
$pages[1]->content_page = 'matka.inc';
$pages[1]->content_image = "turnaus.jpg";
$pages[1]->link_in_sidebar = "yes";

$pages[2] = new page();
$pages[2]->link_text = 'Tue meitä';
$pages[2]->content_page = 'tue.inc';
$pages[2]->content_image = "joukkue_jaalla.jpg";
$pages[2]->link_in_sidebar = "yes";

$pages[3] = new page();
$pages[3]->link_text = 'Pysy ajantasalla vuonna 2017';


?>

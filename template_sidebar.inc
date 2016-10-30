        <header>
                <div class="logo">
                        <a href="."><img src="img/logo.png" title="Magnetic" alt="Magnetic"/></a>
                </div><!-- end logo -->

                <div id="menu_icon"></div>
                <nav>
                        <ul>
                                <!--<li><a href="." class="selected">Home</a></li>-->
                                <?php
                                foreach ($pages as $ind => $page) {
                                   if($page->link_in_sidebar != null) {
                                      echo "<li><a href=.?" . $ind . ">" . $page->link_text . "</a></li>";
                                   }
                                }
                                ?>
                        </ul>
                </nav><!-- end navigation menu -->

                <div class="footer clearfix">
                        <ul class="social clearfix">
                                <li><a href="#" class="fb" data-title="Facebook"></a></li>
                                <li><a href="#" class="google" data-title="Google +"></a></li>
                                <li><a href="#" class="behance" data-title="Behance"></a></li>
                                <!--<li><a href="#" class="twitter" data-title="Twitter"></a></li>
                                <li><a href="#" class="dribble" data-title="Dribble"></a></li>-->
                                <li><a href="#" class="rss" data-title="RSS"></a></li>
                        </ul><!-- end social -->

                        <div class="rights">
                                <p>Copyright © 2014 magnetic.</p>
                                <p>Template by <a href="">Pixelhint.com</a></p>
                        </div><!-- end rights -->
                </div ><!-- end footer -->
        </header><!-- end header -->

<?php
		echo "<section class='top' style='background: url(img/pages/" . $pages[$page_no]->content_image . ") no-repeat;'>";	
?>
			<div class="wrapper content_header clearfix">
				<div class="work_nav">
							
					<ul class="btn clearfix">
						<li><a href=<?php echo ".?" . $page_no . "";?> class="previous" data-title="Edellinen"></a></li>
						<li><a href="." class="grid" data-title="Etusivu"></a></li>
						<li><a href=<?php echo ".?" . $page_no . "";?> class="next" data-title="Seuraava"></a></li>
					</ul>							
					
				</div><!-- end work_nav -->
<?php
				echo "<h1 class='title'>" . $pages[$page_no]->link_text . "";
                                if($pages[$page_no]->content_title) {
                                    echo " - " . $pages[$page_no]->content_title . "";
                                } 
                                echo "</h1>"
?>
			</div>		
		</section><!-- end top -->

		<section class="wrapper">
			<div class="content">
<?php
                              include("pages/" . $pages[$page_no]->content_page);
?>
			</div><!-- end content -->
                </section>

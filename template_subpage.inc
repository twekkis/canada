<style type ="text/css">


.top{
    width: 100%;
    height: 350px;
    overflow: hidden;
    display: block;
    position: relative;
    background: url('img/pages/<?php echo $pages[$page_no]->content_image ?>') no-repeat;
    background-size: cover;
    -webkit-background-size: cover;
    -moz-background-size: cover;
    -o-background-size: cover;
    background-position: 50% 50%;
}

</style>
                 <section class="top">
			<div class="wrapper_sub content_header clearfix">
<!--
				<div class="work_nav">
							
					<ul class="btn clearfix">
						<li><a href=<?php echo ".?" . $page_no . "";?> class="previous" data-title="Edellinen"></a></li>
						<li><a href="." class="grid" data-title="Etusivu"></a></li>
						<li><a href=<?php echo ".?" . $page_no . "";?> class="next" data-title="Seuraava"></a></li>
					</ul>							
					
				</div>--><!-- end work_nav -->

<?php
				echo "<h1 class='title'>" . $pages[$page_no]->link_text . "";
                                if($pages[$page_no]->content_title) {
                                    echo " - " . $pages[$page_no]->content_title . "";
                                } 
                                echo "</h1>"
?>
			</div>		
		</section><!-- end top -->

		<section class="wrapper_sub">
			<div class="content">
<?php
                              include("pages/" . $pages[$page_no]->content_page);
?>
			</div><!-- end content -->
                </section>

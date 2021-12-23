/*
<div class=\"row\">
              <div class=\"col-md-4 pb-4\">
                <a href=\"goa/1.jpeg\" data-toggle=\"lightbox\">
                  <img src=\"goa/1.jpeg\" alt=\"\" class=\"img-fluid\">
                </a>
              </div>
              <div class=\"col-md-4 pb-4\">
                <a href=\"goa/2.jpeg\" data-toggle=\"lightbox\">
                <img src=\"goa/2.jpeg\" alt=\"\" class=\"img-fluid\">
                </a>
              </div>
              <div class=\"col-md-4 pb-4\">
                <a href=\"goa/3.jpeg\" data-toggle=\"lightbox\">
                  <img src=\"goa/3.jpeg\" alt=\"\" class=\"img-fluid\">
                </a>
              </div>
</div>
            */
            
            #include<stdio.h>
            int main()
            {
            	
            	for(int i=0;i<51;)
            	{
            		printf("<div class=\"row\">\n");
            		for(int j=0;j<3;j++){
            			printf("<div class=\"col-md-4 pb-4\">\n\t<a href=\"goa/%d.jpeg\" data-toggle=\"lightbox\">\n\t\t<img src=\"goa/%d.jpeg\" alt=\"\" class=\"img-fluid\">\n\t</a>\n</div>\n",i+1,i+1);
            			i++;
					}
					printf("</div>");
				}
			}

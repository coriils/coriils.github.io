[1mdiff --git a/_config.yml b/_config.yml[m
[1mindex 34187b8..58cffe8 100644[m
[1m--- a/_config.yml[m
[1m+++ b/_config.yml[m
[36m@@ -1,4 +1,4 @@[m
[31m-layout: sidebar[m
[32m+[m[32mlayout: stacked[m
 style: light[m
 [m
 plugins:[m
[36m@@ -8,51 +8,51 @@[m [mplugins:[m
 [m
 permalink: /:year/:month/:day/:title/[m
 [m
[31m-defaults:[m
[31m-  -[m
[31m-    scope:[m
[31m-      path: "" # an empty string here means all files in the project[m
[31m-      type: "posts"[m
[31m-    values:[m
[31m-      layout: "post"[m
[32m+[m[32m#defaults:[m
[32m+[m[32m#  -[m
[32m+[m[32m#    scope:[m
[32m+[m[32m#      path: "" # an empty string here means all files in the project[m
[32m+[m[32m#      type: "posts"[m
[32m+[m[32m#    values:[m
[32m+[m[32m#      layout: "post"[m
 [m
[31m-projects:[m
[31m-  sort_by: pushed[m
[32m+[m[32m#projects:[m
[32m+[m[32m#  sort_by: pushed[m
   # sort_by options:[m
   #   - pushed[m
   #   - stars[m
[31m-  limit: 9[m
[31m-  exclude:[m
[31m-    archived: false[m
[31m-    forks: true[m
[31m-    projects:[m
[32m+[m[32m#  limit: 9[m
[32m+[m[32m#  exclude:[m
[32m+[m[32m#    archived: false[m
[32m+[m[32m#    forks: true[m
[32m+[m[32m#    projects:[m
     # - repo-name[m
 [m
[31m-# social_media:[m
[32m+[m[32msocial_media:[m
   # behance: your_username[m
   # dribbble: your_username[m
   # facebook: your_username[m
   # hackerrank: your_username[m
[31m-  # instagram: your_username[m
[32m+[m[32m  instagram: omnomchaos[m
   # keybase: your_username[m
[31m-  # linkedin: your_username[m
[32m+[m[32m  linkedin: chaoserena[m
   # mastodon: your_username[m
[31m-  # medium: your_username[m
[32m+[m[32m  medium: coriils[m
   # stackoverflow: your_user_id[m
   # telegram: your_username[m
[31m-  # twitter: your_username[m
[32m+[m[32m  twitter: coriils[m
   # unsplash: your_username[m
   # vk: your_username[m
[31m-  # website: http://your_website_url[m
[32m+[m[32m  website: http://chaoserena.substack.com[m
   # youtube: your_username[m
 [m
[31m-topics:[m
[31m-  - name: CSS[m
[31m-    web_url: https://github.com/topics/css[m
[31m-    image_url: https://raw.githubusercontent.com/github/explore/6c6508f34230f0ac0d49e847a326429eefbfc030/topics/css/css.png[m
[32m+[m[32m#topics:[m
[32m+[m[32m#  - name: CSS[m
[32m+[m[32m#    web_url: https://github.com/topics/css[m
[32m+[m[32m#    image_url: https://raw.githubusercontent.com/github/explore/6c6508f34230f0ac0d49e847a326429eefbfc030/topics/css/css.png[m
 [m
[31m-  - name: Web design[m
[32m+[m[32m#  - name: Web design[m
 [m
[31m-  - name: Sass[m
[31m-    web_url: https://github.com/topics/sass[m
[31m-    image_url: https://raw.githubusercontent.com/github/explore/6c6508f34230f0ac0d49e847a326429eefbfc030/topics/sass/sass.png[m
[32m+[m[32m#  - name: Sass[m
[32m+[m[32m#    web_url: https://github.com/topics/sass[m
[32m+[m[32m#    image_url: https://raw.githubusercontent.com/github/explore/6c6508f34230f0ac0d49e847a326429eefbfc030/topics/sass/sass.png[m
[1mdiff --git a/_layouts/home.html b/_layouts/home.html[m
[1mindex 967fe11..222abd2 100644[m
[1m--- a/_layouts/home.html[m
[1m+++ b/_layouts/home.html[m
[36m@@ -8,9 +8,9 @@[m
       {{ content }}[m
     </div>[m
 [m
[31m-    <div class="my-6">[m
[32m+[m[32m<!--    <div class="my-6">[m
       {% include projects.html %}[m
[31m-    </div>[m
[32m+[m[32m    </div>  -->[m
 [m
     {% if site.topics %}[m
       <div class="my-6">[m
[36m@@ -38,7 +38,7 @@[m
           </div>[m
         {% endunless %}[m
 [m
[31m-        {% include projects.html %}[m
[32m+[m[32m<!--        {% include projects.html %} -->[m
 [m
         {% if site.topics %}[m
           {% include interests.html %}[m

# chaos(erena) personal website

## roadmap (in true pm style)
### must haves
- add static portfolio content (pm/strategy, writing (technical/blog content/research), teaching/outreach (STEM), personal (travel))
- setup blog
- import notable medium blog posts
- create custom portfolio content (project retros)

### should haves
- explore templates and add any relevant ones
- explore css file and customize colours/font

### nice to haves
- change social icons to include substack, clippings
- add custom domain properly (add it to your repository's "Custom domain" settings on github.com. And then register and/or [configure your domain with a DNS provider](https://help.github.com/articles/quick-start-setting-up-a-custom-domain/))

## Personal reference
### Quick configuration changes

Most customizations can be done in a matter of seconds, by revising your repository's `_config.yml` file. Just remember to restart your local server each time you save new changes so your Jekyll-powered website rebuilds correctly:

1. Shut down your server by entering the keyboard command <kbd>CTRL</kbd>+<kbd>c</kbd>
2. Restart your server: `bundle exec jekyll serve`


#### Social media

**Note**: This feature is supported by two files in your repository:

- `/_data/social_media.yml`: Defines each of the supported services, including variable name, display name, URL path, and SVG icon.
- `/_includes/social_media_share_url.html`: Outputs the share URL required for any of the supported social media services that support sharing URLs.

If you're interested in adding a social media service that's not already supported in this repo, you can edit these two files to build that support.

## Adding pages

To **add a page** to your website (e.g. detailed resume):

1. Create a new `.html` or `.md` file at the root of your repository.
2. Give it a filename that you want to be used in the page's URL (e.g. `http://yoursite.dev/filename`).
3. At the start of your file, include the following [front matter](https://jekyllrb.com/docs/front-matter/):

```
---
layout: default
---
```

## Adding blog posts

To **add a blog post** to your website:

1. Create a new `.md` file in your repository's `/_posts/` directory.
2. Give it a filename using the following format:

```
YEAR-MONTH-DAY-title.MARKUP
```

3. At the start of your file, include the following [front matter](https://jekyllrb.com/docs/front-matter/):

```
---
title: "The title of my blog post"
---
```

Your website comes with a placeholder blog post that you can reference. Notably, its [front matter](https://jekyllrb.com/docs/front-matter/) declares `published` as `false`, so that it won't appear on your website.

While you can define a `layout` in the front matter, your website is pre-configured to assign the `post` layout to all of the posts in your `/_posts/` directory. So you don't have to declare that in your posts.

Jekyll's conventions for authoring and managing blog posts is very flexible. You can [learn more in Jekyll's documentation for "Posts."](https://jekyllrb.com/docs/posts/)

## Content and templates

To give you a sound foundation to start your personal website, your repository includes a handful of "includes" -- dynamic `.html` files that are re-used throughout your website. They're all stored in the `/_includes/` directory.

There are the usual suspects, like `header.html` and `footer.html`. But there are few more worth pointing out:
- `thoughts.html`: A heading and dynamic list of "My Thoughts," which is populated with a listing of your latest blog posts.
- `post-card.html`: A compact, summarized presentation of a blog post, re-used to display a listing of your latest blog posts.

- `masthead.html`: A collection of your avatar, name, bio, and other metadata that's displayed prominently on all your webpages to help identify what the website is about.
- `projects.html`: A heading and dynamic list of "My Projects," which is populated with a listing of your newest GitHub repositories.
- `repo-card.html`: A compact, summarized presentation of a repository, re-used to display a listing of your GitHub repositories.
- `interests.html`: A heading and dynamic list of "My Interests," which is populated with the [topics](#topics) you list in your `_config.yml`.
- `topic-card.html`: A compact, summarized presentation of a topic (defined in your `_config.yml`), re-used to display a listing of your interests.

### Layouts

Your repository comes with three layouts:

- **default**: Not used by any of the built-in pages or posts, but useful for any new pages you create.
- **home**: Used by your `index.html` homepage to display listings of your projects, interests, and (optionally) your blog posts.
- **post**: Used by default by the posts in your `/_posts/` directory.

Jekyll's convention for defining layouts is very flexible. You can [learn more about customizing your layouts in the Jekyll "Layouts" docs.](https://jekyllrb.com/docs/layouts/)

## Styles

Your website is pre-configured to use [GitHub's very flexible CSS framework called "Primer,"](https://styleguide.github.com/primer/). It's currently referenced within your `styles.scss` file, using the CSS import at-rule:

```
@import url('https://unpkg.com/primer/build/build.css');
```

## License (thanks Github)

The theme is available as open source under the terms of the [MIT License](https://opensource.org/licenses/MIT).

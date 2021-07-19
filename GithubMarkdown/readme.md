# 마크다운 작성법 
* 참고 [Links](https://docs.github.com/en/github/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)

## 헤더 ( # )

```
# This is an <h1> tag
## This is an <h2> tag
###### This is an <h6> tag
```
# This is an h1 tag
## This is an h2 tag
###### This is an h6 tag
  
## 강조( * _ ** __ ~~ )

```
*This text will be italic*

_This will also be italic_

**This text will be bold**

__This will also be bold__

_You **can** combine them_

```

*This text will be italic*

_This will also be italic_

**This text will be bold**

__This will also be bold__

_You **can** combine them_

## 리스트 ( * 1. )

### 순서없는 ( * )
```
* Item 1
* Item 2
  * Item 2a
  * Item 2b
```
* Item 1
* Item 2
  * Item 2a
  * Item 2b

### 순서있는 ( 1. )
```
1. Item 1
1. Item 2
1. Item 3
   1. Item 3a
   1. Item 3b
```
1. Item 1
1. Item 2
1. Item 3
   1. Item 3a
   1. Item 3b

## 이미지
```
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
```
![GitHub Logo](/GithubMarkdown/images/Github_Logo.png)

## 링크
```
http://github.com - automatic!
[GitHub](http://github.com)
```
http://github.com - automatic!

[GitHub](http://github.com)

## Blockquotes
```
As Kanye West said:

> We're living the future so
> the present is our past.
```

As Kanye West said:

> We're living the future so
> the present is our past.

## Inline code ( ` )
```
I think you should use an
`<addr>` element here instead.
```
I think you should use an
`<addr>` element here instead.

# GitHub Flavored Markdown

## Syntax highlighting

````
```javascript

function fancyAlert(arg) {

  if(arg) {
  
    $.facebox({div:'#foo'})
    
  }
  
}
```
````
```javascript

function fancyAlert(arg) {

  if(arg) {
  
    $.facebox({div:'#foo'})
    
  }
  
}
```

````
```python
def foo():
    if not bar:
        return True
```
````

```python
def foo():
    if not bar:
        return True
```

## Task Lists
```
- [x] @mentions, #refs, [links](), **formatting**, and <del>tags</del> supported
- [x] list syntax required (any unordered or ordered list supported)
- [x] this is a complete item
- [ ] this is an incomplete item
```

- [x] @mentions, #refs, [links](), **formatting**, and <del>tags</del> supported
- [x] list syntax required (any unordered or ordered list supported)
- [x] this is a complete item
- [ ] this is an incomplete item

## Tables
```
First Header | Second Header
------------ | -------------
Content from cell 1 | Content from cell 2
Content in the first column | Content in the second column
```
First Header | Second Header
------------ | -------------
Content from cell 1 | Content from cell 2
Content in the first column | Content in the second column

## SHA references
```
29dc91ad383f3f08b068c8186ce147347c95c224
mojombo@29dc91ad383f3f08b068c8186ce147347c95c224
mojombo/github-flavored-markdown@29dc91ad383f3f08b068c8186ce147347c95c224
```
29dc91ad383f3f08b068c8186ce147347c95c224

mojombo@29dc91ad383f3f08b068c8186ce147347c95c224

mojombo/github-flavored-markdown@29dc91ad383f3f08b068c8186ce147347c95c224

## Issue references within a repository
```
#1
mojombo#1
mojombo/github-flavored-markdown#1
```
#1
mojombo#1
mojombo/github-flavored-markdown#1

## Username @mentions

## Automatic linking for URLs

## Strikethrough

## Emoji



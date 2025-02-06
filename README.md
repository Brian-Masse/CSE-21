# CSE-21

### **Homework**

- **_Homework 1:_** Induction, Product Rule, Sum Rule, Permutations

- **_Homework 2:_** Combinations, Inclusion/Exclusion, Binomial Identities, Stars and Bars

- **_Homework 3:_** Linearity of Expectations, Sorting, Runtimes

- **_Homework 4:_** Linearity of Expectations, Sorting, Runtimes

### **Resources**

- [**_latex (stripped package)_**](https://www.tug.org/mactex/morepackages.html)
- [**_Latex Tutorial_**](https://www.overleaf.com/learn/latex/Learn_LaTeX_in_30_minutes)

Setting up Latex for VSCode

```
  "latex-workshop.latex.tools": [
    {
      "name": "latexmk",
      "command": "latexmk",
      "args": ["-synctex=1", "-interaction=nonstopmode", "-file-line-error", "-pdf", "-outdir=%OUTDIR%", "%DOC%"],
      "env": {}
    },
    {
      "name": "xelatex",
      "command": "xelatex",
      "args": ["-synctex=1", "-interaction=nonstopmode", "-file-line-error", "%DOC%"],
      "env": {}
    },
    {
      "name": "pdflatex",
      "command": "pdflatex",
      "args": ["-synctex=1", "-interaction=nonstopmode", "-file-line-error", "%DOC%"],
      "env": {}
    },
    {
      "name": "bibtex",
      "command": "bibtex",
      "args": ["%DOCFILE%"],
      "env": {}
    }
  ],

  "latex-workshop.latex.recipes": [
    {
      "name": "pdfLaTeX",
      "tools": ["pdflatex"]
    },
    {
      "name": "latexmk 🔃",
      "tools": ["latexmk"]
    },
    {
      "name": "xelatex",
      "tools": ["xelatex"]
    },
    {
      "name": "pdflatex ➞ bibtex ➞ pdflatex`×2",
      "tools": ["pdflatex", "bibtex", "pdflatex", "pdflatex"]
    },
    {
      "name": "xelatex ➞ bibtex ➞ xelatex`×2",
      "tools": ["xelatex", "bibtex", "xelatex", "xelatex"]
    }
  ],
```

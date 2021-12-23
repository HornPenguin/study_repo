from docutils.writers.latex2e import Babel
Babel.language_codes = {'ko':'korean', 'en':'english'}

# Configuration file for the Sphinx documentation builder.

# -- Project information

project = '물리와 컴퓨터 정리와 문제 풀이'
copyright = '2021, Hyun Seong, Kim'
author = 'Hyun Seong, Kim'

release = '0.0.1'

# -- General configuration

extensions = [
    'sphinx.ext.duration',
    'sphinx.ext.doctest',
    'sphinx.ext.autodoc',
    'sphinx.ext.autosummary',
    'sphinx.ext.intersphinx'
]

source_suffix = {
    '.rst': 'restructuredtext'
}

intersphinx_mapping = {
    'python': ('https://docs.python.org/3/', None),
    'sphinx': ('https://www.sphinx-doc.org/en/master/', None),
}
intersphinx_disabled_domains = ['std']

templates_path = ['_templates']

numfig = True

# -- Options for HTML output

html_theme = 'sphinx_rtd_theme'

# -- Options for EPUB output
epub_show_urls = 'footnote'
epub_author ='Hyun Seong, Kim'
epub_publisher = 'OFPublisher'

latex_engine = 'xelatex'
latex_elements = {
    'pointsize': '9pt',
    'fontpkg': r'''
\setmainfont{Noto Serif CJK KR}
\setsansfont{Noto Sans CJK KR}
\setmonofont{Noto Sans Mono CJK KR}
    '''
}

proof_theorem_types = {
   "algorithm": "Algorithm",
   "conjecture": "Conjecture",
   "corollary": "Corollary",
   "definition": "Definition",
   "example": "Example",
   "lemma": "Lemma",
   "observation": "Observation",
   "proof": "Proof",
   "property": "Property",
   "theorem": "Theorem",
   "corollary" : "Corollary",
   "axiom" : "Axiom",
   "axiomschema" : "Axiom Schema"
}

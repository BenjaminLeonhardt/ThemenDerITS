# LaTeX Vorlage

Dies ist die Vorlage für den Praxissemesterbericht, Projektarbeiten,
Bachelorarbeiten, Seminararbeiten und Masterarbeiten.

Im Verzeichnis `pdf` befindet sich eine ausführliche Anleitung zur Benutzung der Vorlage:

- `Readme_DE.pdf` (Deutsche Version)
- `Readme_EN.pdf` (Englische Version)

Des Weiteren befinden sich dort die generierten Beispieldokumente:

- `TestDokument_DE.pdf` (Deutsch)
- `TestDocument_EN.pdf` (Englisch)

In den `Readme_*.pdf` Dateien im Abschnitt *Sprache* steht, welche Bereiche
automatisch übersetzt werden und welche nicht.

Im Verzeichnis `readme` stehen die LaTeX-Quelldateien für die Readme-Dokumentation:

- `Readme_DE.tex` (Deutsche Version)
- `Readme_EN.tex` (Englische Version)

Im Verzeichnis `vorlage` ist die Dokumentenklasse `ausarbeitung.cls` sowie
die Beispieldokumente vorhanden:

- `TestDokument_DE.tex` (Deutsch)
- `TestDocument_EN.tex` (Englisch)

## Makefile

Im Stammverzeichnis und in den Unterverzeichnissen `readme` und `vorlage` befinden sich
Makefiles mit folgenden Zielen:

- `make all` -- Erzeugt alle PDF-Dateien
- `make install` -- Erzeugt PDFs und kopiert sie ins `pdf`-Verzeichnis
- `make clean` -- Löscht Zwischendateien, behält PDFs
- `make clean-all` -- Löscht auch die PDF-Dateien

Lesen Sie bitte zunächst die Datei `/pdf/Readme_DE.pdf` oder `/pdf/Readme_EN.pdf`!

---

# LaTeX Template

This is the template for the practical-semester report, project work,
bachelor's theses, seminar papers, and master's theses.

In the `pdf` directory you will find a detailed guide to using the template:

- `Readme_DE.pdf` (German version)
- `Readme_EN.pdf` (English version)

Furthermore, the generated sample documents are located there:

- `TestDokument_DE.pdf` (German)
- `TestDocument_EN.pdf` (English)

In the `Readme_*.pdf` files, the *Language* section explains which areas
are automatically translated and which are not.

In the `readme` directory you will find the LaTeX source files for the readme documentation:

- `Readme_DE.tex` (German version)
- `Readme_EN.tex` (English version)

In the `vorlage` directory you will find the document class `ausarbeitung.cls` as well as
the example documents:

- `TestDokument_DE.tex` (German)
- `TestDocument_EN.tex` (English)

## Makefile

In the root directory and in the subdirectories `readme` and `vorlage` there are
Makefiles with the following targets:

- `make all` -- Generates all PDF files
- `make install` -- Generates PDFs and copies them to the `pdf` directory
- `make clean` -- Deletes intermediate files, keeps PDFs
- `make clean-all` -- Also deletes the PDF files

Please first read the file `/pdf/Readme_DE.pdf` or `/pdf/Readme_EN.pdf`!

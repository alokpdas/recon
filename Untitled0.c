{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyN/5TPGwbtZnSYUvB/GuYFI",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/alokpdas/recon/blob/main/Untitled0.c\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": null,
      "metadata": {
        "id": "KvrVNcKGtGk6"
      },
      "outputs": [],
      "source": [
        "#include <stdio.h>\n",
        "\n",
        "int main() {\n",
        "    int num;\n",
        "\n",
        "    // Ask the user to input a number\n",
        "    printf(\"Enter an integer: \");\n",
        "    scanf(\"%d\", &num);\n",
        "\n",
        "    // Check if the number is even or odd\n",
        "    if (num % 2 == 0) {\n",
        "        printf(\"%d is an even number.\\n\", num);\n",
        "    } else {\n",
        "        printf(\"%d is an odd number.\\n\", num);\n",
        "    }\n",
        "\n",
        "    return 0;\n",
        "}\n"
      ]
    }
  ]
}
trans[i][j];
            trans[i][j] = trans[j][i];
            trans[j][i] = temp;
        }     
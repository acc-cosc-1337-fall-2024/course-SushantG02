//add include statements
#include "func.h"
#include<iostream>
//add function code here
using std::string;


double get_gc_content(const std::string& dna) 
{
    int count = 0;
    for(char nucleotide : dna) 
    {
        if(nucleotide == 'C' or nucleotide == 'G') 
        {
            count++;
        }
    }
    return static_cast<double>(count) / dna.length();
}

std::string get_reverse_string(const std::string& dna)
{
    std::string reversed;
    for (int i = dna.length() - 1; i >= 0; --i) 
    {
        reversed += dna[i];
    }
    return reversed;
}

std::string get_dna_complement(const std::string& dna) 
{
    std::string reverse_complement = dna;
    for (char& nucleotide : reverse_complement) 
    {
        switch (nucleotide) 
        {
            case 'A':
                nucleotide = 'T';
                break;
            case 'T':
                nucleotide = 'A';
                break;
            case 'C':
                nucleotide = 'G';
                break;
            case 'G':
                nucleotide = 'C';
                break;
        }
    }
    // Reverse the complemented string before returning it
    return get_reverse_string(reverse_complement);
}
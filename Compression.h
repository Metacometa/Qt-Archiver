#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <QProgressBar>

#include "List.h"
#include "Config.h"

class Huffman {
public:

	int huffman(QProgressBar *pbar, std::string filename, int mode);
	void Compression(QProgressBar* pbar, std::string filename, std::string outputname);
	void Decompression(QProgressBar* pbar, std::string filename, std::string outputname);
};

﻿#include "headers/datastruct1.h"

using namespace DataStruct1;

DataStruct1::SettingVals::SettingVals()
{
}
DataStruct1::SettingVals::SettingVals(SettingVals ^ in)
{
	fft_num = in->fft_num;
	min_find_db = in->min_find_db;
	find_field = in->find_field;
	max_length = in->max_length;
	min_check_num = in->min_check_num;
	sub_offset = in->sub_offset;
	output_pcm = in->output_pcm;
	draw = in->draw;
	match_ass = in->match_ass;
	parallel_decode = in->parallel_decode;
	fast_match = in->fast_match;
	vol_match = in->vol_match;
}
String^ DataStruct1::SettingVals::getname(const SettingType &type)
{
	String^ name;
	switch (type) {
	case FFTNum:
		name = "FFTNum";
		break;
	case MinFinddB:
		name = "MinFinddB";
		break;
	case FindField:
		name = "FindField";
		break;
	case MaxLength:
		name = "MaxLength";
		break;
	case MinCheckNum:
		name = "MinCheckNum";
		break;
	case SubOffset:
		name = "SubOffset";
		break;
	case MatchAss:
		name = "MatchAss";
		break;
	case OutputPCM:
		name = "OutputPCM";
		break;
	case Draw:
		name = "Draw";
		break;
	case ParallelDecode:
		name = "ParallelDecode";
		break;
	case FastMatch:
		name = "FastMatch";
		break;
	case VolMatch:
		name = "VolMatch";
		break;
	default:
		break;
	}
	return name;
}
int DataStruct1::SettingVals::getval(const SettingType & type)
{
	int val;
	switch (type) {
	case FFTNum:
		val = fft_num;
		break;
	case MinFinddB:
		val = min_find_db;
		break;
	case FindField:
		val = find_field;
		break;
	case MaxLength:
		val = max_length;
		break;
	case MinCheckNum:
		val = min_check_num;
		break;
	case SubOffset:
		val = sub_offset;
		break;
	case MatchAss:
		val = static_cast<int>(match_ass);
		break;
	case OutputPCM:
		val = static_cast<int>(output_pcm);
		break;
	case Draw:
		val = static_cast<int>(draw);
		break;
	case ParallelDecode:
		val = static_cast<int>(parallel_decode);
		break;
	case FastMatch:
		val = static_cast<int>(fast_match);
		break;
	case VolMatch:
		val = static_cast<int>(vol_match);
		break;
	default:
		val = 0;
		break;
	}
	return val;
}
int DataStruct1::SettingVals::setval(const SettingType & type,int val)
{
	switch (type) {
	case FFTNum:
		val = val > 64 ? val : 64;
		val = val < 16384 ? val : 16384;
		fft_num = val;
		break;
	case MinFinddB:
		val = val > -80 ? val : -80;
		val = val < 5 ? val : 5;
		min_find_db = val;
		break;
	case FindField:
		val = val > 1 ? val : 1;
		val = val < 1000000 ? val : 1000000;
		find_field = val;
		break;
	case MaxLength:
		val = val > 20 ? val : 20;
		val = val < 1000 ? val : 1000;
		max_length = val;
		break;
	case MinCheckNum:
		val = val > 10 ? val : 10;
		val = val < 100000000 ? val : 100000000;
		min_check_num = val;
		break;
	case SubOffset:
		sub_offset = val;
		break;
	case OutputPCM:
		output_pcm = static_cast<bool>(val);
		break;
	case Draw:
		draw = static_cast<bool>(val);
		break;
	case MatchAss:
		match_ass = static_cast<bool>(val);
		break;
	case ParallelDecode:
		parallel_decode = static_cast<bool>(val);
		break;
	case FastMatch:
		fast_match = static_cast<bool>(val);
		break;
	case VolMatch:
		vol_match = static_cast<bool>(val);
		break;
	default:
		break;
	}
	return 0;
}


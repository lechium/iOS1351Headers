/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct SMPTETime {
	short mSubframes;
	short mSubframeDivisor;
	unsigned mCounter;
	unsigned mType;
	unsigned mFlags;
	short mHours;
	short mMinutes;
	short mSeconds;
	short mFrames;
} SMPTETime;

typedef struct AudioTimeStamp {
	double mSampleTime;
	unsigned long long mHostTime;
	double mRateScalar;
	unsigned long long mWordClockTime;
	SMPTETime mSMPTETime;
	unsigned mFlags;
	unsigned mReserved;
} AudioTimeStamp;

typedef struct {
	BOOL shouldBypassLowPassFilter;
	float volumeForLowPassFilterGlobalGain;
	float effectMix;
} SCD_Struct_TL2;

typedef struct __CFString* CFStringRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _NSZone* NSZoneRef;


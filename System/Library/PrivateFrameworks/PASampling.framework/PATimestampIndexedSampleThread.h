/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PASampleThreadData;

@interface PATimestampIndexedSampleThread : NSObject {

	unsigned long long _lastTimestampIndex;
	PASampleThreadData* _sampleThread;

}

@property (assign) unsigned long long lastTimestampIndex;              //@synthesize lastTimestampIndex=_lastTimestampIndex - In the implementation block
@property (readonly) PASampleThreadData * sampleThread;                //@synthesize sampleThread=_sampleThread - In the implementation block
-(id)debugDescription;
-(unsigned long long)lastTimestampIndex;
-(void)setLastTimestampIndex:(unsigned long long)arg1 ;
-(id)initWithSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(PASampleThreadData *)sampleThread;
@end

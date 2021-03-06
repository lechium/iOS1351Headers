/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMFUnfairLock, NSMutableArray;

@interface MovingAverage : NSObject {

	double _movingAverage;
	HMFUnfairLock* _lock;
	NSMutableArray* _queue;
	unsigned long long _windowSize;

}

@property (nonatomic,readonly) HMFUnfairLock * lock;                       //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableArray * queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) unsigned long long windowSize;              //@synthesize windowSize=_windowSize - In the implementation block
@property (assign) double movingAverage;                                   //@synthesize movingAverage=_movingAverage - In the implementation block
-(void)setQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)queue;
-(HMFUnfairLock *)lock;
-(id)initWithWindowSize:(unsigned long long)arg1 ;
-(unsigned long long)windowSize;
-(void)addNumber:(id)arg1 ;
-(double)movingAverage;
-(void)setMovingAverage:(double)arg1 ;
-(double)movingAverageForInterval:(double)arg1 defaultValue:(double)arg2 ;
@end


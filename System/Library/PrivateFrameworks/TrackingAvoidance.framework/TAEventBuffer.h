/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TAEventBufferSettings, TACircularBuffer, NSMutableDictionary;

@interface TAEventBuffer : NSObject {

	TAEventBufferSettings* _settings;
	TACircularBuffer* _eventBuffer;
	NSMutableDictionary* _latestExpiredElements;

}
+(id)getExpiredElementKeyForClass:(Class)arg1 andEventSubtype:(unsigned long long)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(void)ingestTAEvent:(id)arg1 ;
-(void)updateLatestExpiredElements:(id)arg1 ;
-(id)getAllTAEventsMatchingCompoundPredicate:(id)arg1 ;
-(void)purgeWithClock:(id)arg1 ;
-(id)getAllTAEventsOf:(Class)arg1 ;
-(id)getAllTAEventsOf:(Class)arg1 andEventSubtype:(unsigned long long)arg2 ;
-(id)getAllTAEventsOf:(Class)arg1 between:(id)arg2 ;
-(id)getAllTAEventsOf:(Class)arg1 andEventSubtype:(unsigned long long)arg2 between:(id)arg3 ;
-(id)getAllTAEventsBetween:(id)arg1 ;
@end


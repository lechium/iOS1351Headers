/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface CalStopwatch : NSObject {

	BOOL _isRunning;
	unsigned long long _lastStartTime;
	unsigned long long _elapsedTime;
	BOOL _hasValidElapsedTime;
	NSMutableDictionary* _events;
	BOOL _usesSignalFlags;

}

@property (assign) BOOL usesSignalFlags;              //@synthesize usesSignalFlags=_usesSignalFlags - In the implementation block
-(id)init;
-(id)description;
-(void)stop;
-(void)start;
-(void)reset;
-(unsigned long long)elapsedTimeInNanoseconds;
-(unsigned long long)elapsedTimeAsNumber:(int)arg1 ;
-(BOOL)usesSignalFlags;
-(id)elapsedTimeAsString:(int)arg1 ;
-(void)markEventStart:(id)arg1 ;
-(double)markEventSplit:(id)arg1 ;
-(double)markEventEnd:(id)arg1 ;
-(void)setUsesSignalFlags:(BOOL)arg1 ;
@end


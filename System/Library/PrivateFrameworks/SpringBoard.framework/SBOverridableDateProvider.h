/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBDateTimeOverrideObserver.h>
#import <libobjc.A.dylib/SBFDateProviding.h>

@protocol SBFDateProviding;
@class SBDateTimeController, NSMutableDictionary, NSDate, NSString;

@interface SBOverridableDateProvider : NSObject <SBDateTimeOverrideObserver, SBFDateProviding> {

	SBDateTimeController* _dateTimeController;
	id<SBFDateProviding> _underlyingProvider;
	NSMutableDictionary* _minuteHandlers;
	unsigned long long _nextToken;
	id _underlyingToken;
	NSDate* _overrideDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)date;
-(id)initWithDateProvider:(id)arg1 ;
-(id)observeMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)removeMinuteUpdateHandler:(id)arg1 ;
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(void)_updateForOverrides;
-(void)_updateUnderlyingProvider;
-(void)_fireHandlersForDate:(id)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class NSDate, CLKComplicationTimelineEntry, CLKComplicationTemplate;

@interface NTKTimelineSetupOperation : NTKTimelineDataOperation {

	unsigned long long _directions;
	NSDate* _startDate;
	NSDate* _endDate;
	unsigned long long _privacyBehavior;
	unsigned long long _timelineAnimationBehavior;
	CLKComplicationTimelineEntry* _currentEntry;
	CLKComplicationTemplate* _alwaysOnTemplate;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)_start;
-(void)_cancel;
-(void)_getTimeTravelDirections;
-(void)_getStartDate;
-(void)_getEndDate;
-(void)_getCurrentEntry;
-(void)_getPrivacyBehavior;
-(void)_getTimelineAnimationBehavior;
-(void)_getAlwaysOnTemplate;
-(void)_invokeHandler;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ATEventScheduler : NSObject {

	NSMutableDictionary* _events;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _eventAccessQueue;
	BOOL _started;

}
+(id)sharedInstance;
-(id)init;
-(void)start;
-(void)removeEvent:(id)arg1 ;
-(void)_scheduleNextEvent;
-(void)_postExpiredEvents;
-(void)scheduleEvent:(id)arg1 afterDelay:(double)arg2 withUserData:(id)arg3 ;
-(void)scheduleRecurringEvent:(id)arg1 withInterval:(double)arg2 afterDelay:(double)arg3 withUserData:(id)arg4 ;
-(BOOL)hasScheduledEvent:(id)arg1 ;
@end


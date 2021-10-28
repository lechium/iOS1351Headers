/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableSet, NSObject;

@interface HIDAnalyticsReporter : NSObject {

	NSMutableSet* _events;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;

}
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)logAnalyticsEvent:(id)arg1 ;
-(id)createBucketData:(id)arg1 fieldvalue:(id)arg2 fieldDescription:(id)arg3 ;
-(void)logAnalyticsEvent:(id)arg1 eventDescription:(id)arg2 eventValue:(id)arg3 ;
-(void)registerEvent:(id)arg1 ;
-(void)unregisterEvent:(id)arg1 ;
-(void)dispatchAnalyticsForEvent:(id)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MTSnapshotScheduler : NSObject {

	NSString* _bundleID;

}
+(double)_quiescingWindow;
-(id)initWithBundleID:(id)arg1 ;
-(void)scheduleSnapshot;
-(void)_performScheduleSnapshot;
@end


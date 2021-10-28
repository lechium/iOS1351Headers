/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>
#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@protocol NAScheduler;
@class NSString;

@interface MTDeviceListener : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener> {

	BOOL _internalHasBeenUnlockedSinceBoot;
	id<NAScheduler> _workScheduler;

}

@property (nonatomic,retain) id<NAScheduler> workScheduler;                      //@synthesize workScheduler=_workScheduler - In the implementation block
@property (assign,nonatomic) BOOL internalHasBeenUnlockedSinceBoot;              //@synthesize internalHasBeenUnlockedSinceBoot=_internalHasBeenUnlockedSinceBoot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasBeenUnlockedSinceBoot;
+(id)sharedDeviceListener;
+(BOOL)_latestKeyBagValueForHasBeenUnlockedSinceBoot;
-(id)init;
-(void)setInternalHasBeenUnlockedSinceBoot:(BOOL)arg1 ;
-(BOOL)internalHasBeenUnlockedSinceBoot;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)printDiagnostics;
-(id)gatherDiagnostics;
-(id<NAScheduler>)workScheduler;
-(BOOL)_hasBeenUnlockedSinceBoot;
-(void)setWorkScheduler:(id<NAScheduler>)arg1 ;
@end

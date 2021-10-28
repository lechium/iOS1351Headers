/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBSLockScreenServiceConnection, NSString;

@interface SBSLockScreenService : NSObject <BSInvalidatable> {

	os_unfair_lock_s _lock;
	SBSLockScreenServiceConnection* _lock_connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)launchEmergencyDialerWithCompletion:(/*^block*/id)arg1 ;
-(void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)preventPasscodeLockWithReason:(id)arg1 ;
-(id)preventSpuriousScreenUndimWithReason:(id)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBDeviceApplicationSceneStatusBarStateObserver;
#import <SpringBoard/SpringBoard-Structs.h>
@interface _SBDeviceApplicationSceneStatusBarStateProviderObserverRecord : NSObject {

	struct {
		unsigned wantsDidChangeStatusBarStyleTo : 1;
		unsigned wantsDidChangeStatusBarPartStylesTo : 1;
		unsigned wantsDidChangeStatusBarAlphaTo : 1;
		unsigned wantsDidChangeStatusBarHiddenTo_withAnimation : 1;
		unsigned wantsDidChangeStatusBarOrientationTo : 1;
		unsigned wantsDidInvalidateStatusBarDescriptionForSceneWithIdentifier : 1;
		unsigned wantsDidChangeStatusBarStyleOverridesToSuppressTo : 1;
		unsigned wantsDidChangeStatusBarAvoidanceFrameTo : 1;
		unsigned wantsDidChangeSceneInterfaceOrientationTo : 1;
	}  _flags;
	id<SBDeviceApplicationSceneStatusBarStateObserver> _observer;

}

@property (nonatomic,__weak,readonly) id<SBDeviceApplicationSceneStatusBarStateObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) SBDeviceApplicationSceneStatusBarStateObserverFlags flags;                       //@synthesize flags=_flags - In the implementation block
-(id<SBDeviceApplicationSceneStatusBarStateObserver>)observer;
-(SBDeviceApplicationSceneStatusBarStateObserverFlags)flags;
-(id)initWithObserver:(id)arg1 andFlags:(SBDeviceApplicationSceneStatusBarStateObserverFlags)arg2 ;
@end


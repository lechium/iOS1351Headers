/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBSStatusBarStyleOverridesCoordinatorDelegate.h>

@class SBSStatusBarStyleOverridesAssertion, SBSStatusBarStyleOverridesCoordinator, MPMediaControls, NSString;

@interface MPMediaControlsStatusBarStyleOverridesCoordinator : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate> {

	SBSStatusBarStyleOverridesAssertion* _statusBarStyleOverride;
	SBSStatusBarStyleOverridesCoordinator* _coordinator;
	MPMediaControls* _mediaControls;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2 ;
-(void)presentMediaControls;
@end

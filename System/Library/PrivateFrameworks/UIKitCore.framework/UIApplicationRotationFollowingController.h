/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@interface UIApplicationRotationFollowingController : UIViewController {

	BOOL _sizesWindowToScene;

}

@property (assign,nonatomic) BOOL sizesWindowToScene;              //@synthesize sizesWindowToScene=_sizesWindowToScene - In the implementation block
-(void)setSizesWindowToScene:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1 ;
-(void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2 ;
-(id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2 ;
-(id)_topMostWindow;
-(BOOL)sizesWindowToScene;
@end


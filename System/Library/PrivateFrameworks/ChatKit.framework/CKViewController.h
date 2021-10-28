/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@interface CKViewController : UIViewController {

	BOOL _appeared;
	BOOL _deferredAppeared;
	BOOL _appearing;
	BOOL _dissapearing;

}

@property (assign,nonatomic) BOOL appeared;                      //@synthesize appeared=_appeared - In the implementation block
@property (assign,nonatomic) BOOL deferredAppeared;              //@synthesize deferredAppeared=_deferredAppeared - In the implementation block
@property (assign,nonatomic) BOOL appearing;                     //@synthesize appearing=_appearing - In the implementation block
@property (assign,nonatomic) BOOL dissapearing;                  //@synthesize dissapearing=_dissapearing - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)significantTimeChange;
-(void)systemApplicationWillEnterForeground;
-(void)setAppearing:(BOOL)arg1 ;
-(void)viewDidAppearDeferredSetup;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)parentControllerDidBecomeActive;
-(void)performResumeDeferredSetup;
-(BOOL)deferredAppeared;
-(BOOL)appeared;
-(BOOL)appearing;
-(void)setDissapearing:(BOOL)arg1 ;
-(void)setAppeared:(BOOL)arg1 ;
-(void)setDeferredAppeared:(BOOL)arg1 ;
-(void)childViewControllersPerform:(SEL)arg1 ;
-(BOOL)dissapearing;
@end

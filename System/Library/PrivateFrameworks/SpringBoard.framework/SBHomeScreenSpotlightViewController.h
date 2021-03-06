/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBSpotlightMultiplexingViewController.h>

@protocol SBHomeScreenSpotlightDismissalDelegate;
@class FBDisplayLayoutElement;

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController {

	id<SBHomeScreenSpotlightDismissalDelegate> _homescreenSpotlightDelegate;
	FBDisplayLayoutElement* _displayLayoutElement;

}

@property (nonatomic,__weak,readonly) id<SBHomeScreenSpotlightDismissalDelegate> homescreenSpotlightDelegate;              //@synthesize homescreenSpotlightDelegate=_homescreenSpotlightDelegate - In the implementation block
@property (nonatomic,readonly) FBDisplayLayoutElement * displayLayoutElement;                                              //@synthesize displayLayoutElement=_displayLayoutElement - In the implementation block
-(unsigned long long)level;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(FBDisplayLayoutElement *)displayLayoutElement;
-(unsigned long long)remoteSearchViewPresentationSource;
-(id<SBHomeScreenSpotlightDismissalDelegate>)homescreenSpotlightDelegate;
@end


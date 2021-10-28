/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class MPAVRoutingViewController, UIView;

@interface MediaControlsPanelViewController : UIViewController {

	id _delegate;
	MPAVRoutingViewController* _routingViewController;
	UIView* _backgroundView;

}

@property (assign,nonatomic,__weak) id delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVRoutingViewController * routingViewController;              //@synthesize routingViewController=_routingViewController - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                        //@synthesize backgroundView=_backgroundView - In the implementation block
+(id)panelViewControllerForCoverSheet;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(UIView *)backgroundView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(MPAVRoutingViewController *)routingViewController;
-(void)setRoutingViewController:(MPAVRoutingViewController *)arg1 ;
@end

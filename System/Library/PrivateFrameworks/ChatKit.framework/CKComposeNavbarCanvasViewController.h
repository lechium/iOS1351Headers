/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKNavigationBarCanvasViewDelegate.h>

@protocol CKNavbarCanvasViewControllerDelegate;
@class UIButton, UILabel, CKNavigationBarCanvasView, NSString;

@interface CKComposeNavbarCanvasViewController : UIViewController <CKNavigationBarCanvasViewDelegate> {

	id<CKNavbarCanvasViewControllerDelegate> _delegate;
	UIButton* _cancelButton;
	UILabel* _titleLabel;
	CKNavigationBarCanvasView* _canvasView;

}

@property (nonatomic,retain) UIButton * cancelButton;                                               //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) CKNavigationBarCanvasView * canvasView;                                //@synthesize canvasView=_canvasView - In the implementation block
@property (assign,nonatomic,__weak) id<CKNavbarCanvasViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CKNavbarCanvasViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CKNavbarCanvasViewControllerDelegate>)arg1 ;
-(void)loadView;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCanvasView:(CKNavigationBarCanvasView *)arg1 ;
-(CKNavigationBarCanvasView *)canvasView;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)updateTitle:(id)arg1 animated:(BOOL)arg2 ;
-(id)_windowTraitCollection;
-(double)_preferredHeightForTraitCollection:(id)arg1 ;
-(void)_initializeForTraitCollection:(id)arg1 ;
-(NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForView:(id)arg1 ;
-(void)_setupDefaultCanvasView;
-(BOOL)_shouldUseRTL;
@end


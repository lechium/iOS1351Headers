/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol CNAvatarCaptureViewControllerDelegate, AVTAvatarRecord;
@class AVTView, NSLayoutConstraint, UILabel, CNCaptureButtonView, UIButton, UIView, UIImage;

@interface CNAvatarCaptureViewController : UIViewController {

	id<CNAvatarCaptureViewControllerDelegate> _delegate;
	AVTView* _avtView;
	NSLayoutConstraint* _avtViewHeightConstraint;
	UILabel* _promptLabel;
	id<AVTAvatarRecord> _avatarRecord;
	CNCaptureButtonView* _captureButtonView;
	UIButton* _cancelButton;
	UIView* _captureFooter;
	UIImage* _capturedImage;

}

@property (nonatomic,retain) AVTView * avtView;                                                      //@synthesize avtView=_avtView - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * avtViewHeightConstraint;                           //@synthesize avtViewHeightConstraint=_avtViewHeightConstraint - In the implementation block
@property (nonatomic,retain) UILabel * promptLabel;                                                  //@synthesize promptLabel=_promptLabel - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                                       //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) CNCaptureButtonView * captureButtonView;                                //@synthesize captureButtonView=_captureButtonView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIView * captureFooter;                                                 //@synthesize captureFooter=_captureFooter - In the implementation block
@property (nonatomic,retain) UIImage * capturedImage;                                                //@synthesize capturedImage=_capturedImage - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarCaptureViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CNAvatarCaptureViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNAvatarCaptureViewControllerDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UILabel *)promptLabel;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setPromptLabel:(UILabel *)arg1 ;
-(id)initWithAvatarRecord:(id)arg1 ;
-(void)loadAvatarView;
-(void)addPromptLabel;
-(void)updateAvtViewAspectRatioConstraint;
-(BOOL)shouldUseLandscapeLayout;
-(void)layoutFooterView;
-(void)setupFooterView;
-(void)dismissCaptureController;
-(void)didTapCancelButton:(id)arg1 ;
-(void)didTapCaptureButton:(id)arg1 ;
-(AVTView *)avtView;
-(void)setAvtView:(AVTView *)arg1 ;
-(NSLayoutConstraint *)avtViewHeightConstraint;
-(void)setAvtViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(CNCaptureButtonView *)captureButtonView;
-(void)setCaptureButtonView:(CNCaptureButtonView *)arg1 ;
-(UIView *)captureFooter;
-(void)setCaptureFooter:(UIView *)arg1 ;
-(UIImage *)capturedImage;
-(void)setCapturedImage:(UIImage *)arg1 ;
@end


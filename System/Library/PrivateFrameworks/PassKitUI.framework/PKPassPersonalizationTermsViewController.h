/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol PKPassPersonalizationTermsViewControllerDelegate;
@class UITextView, NSString;

@interface PKPassPersonalizationTermsViewController : UIViewController {

	UITextView* _textView;
	NSString* _termsAndConditions;
	id<PKPassPersonalizationTermsViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) NSString * termsAndConditions;                                              //@synthesize termsAndConditions=_termsAndConditions - In the implementation block
@property (assign,nonatomic) id<PKPassPersonalizationTermsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<PKPassPersonalizationTermsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPassPersonalizationTermsViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSString *)termsAndConditions;
-(void)setTermsAndConditions:(NSString *)arg1 ;
-(id)initWithTermsAndConditions:(id)arg1 ;
-(void)_declineButtonPressed:(id)arg1 ;
-(void)_acceptButtonPressed:(id)arg1 ;
-(void)_applyTermsAndConditions;
@end

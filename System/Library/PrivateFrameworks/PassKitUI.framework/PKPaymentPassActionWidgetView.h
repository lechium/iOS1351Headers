/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKPaymentPassActionWidgetViewDelegate;
@class NSArray, NSString, PKPeerPaymentAccount, PKPaymentPass;

@interface PKPaymentPassActionWidgetView : UIView {

	NSArray* _displayableWidgets;
	NSString* _phoneNumber;
	NSString* _website;
	NSString* _email;
	unsigned long long _widgetViewStyle;
	BOOL _usesAccessibilityLayout;
	unsigned long long _numberOfWidgetsPerRow;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKPaymentPass* _paymentPass;
	id<PKPaymentPassActionWidgetViewDelegate> _delegate;

}

@property (nonatomic,retain) PKPeerPaymentAccount * peerPaymentAccount;                              //@synthesize peerPaymentAccount=_peerPaymentAccount - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                                            //@synthesize paymentPass=_paymentPass - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentPassActionWidgetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PKPaymentPassActionWidgetViewDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentPassActionWidgetViewDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)numberOfRows;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(PKPeerPaymentAccount *)peerPaymentAccount;
-(void)setPeerPaymentAccount:(PKPeerPaymentAccount *)arg1 ;
-(id)initWithWidgetViewStyle:(unsigned long long)arg1 ;
-(void)cleanUpExistingWidgets;
-(id)_createButtonForTitle:(id)arg1 image:(id)arg2 ;
-(id)_titleForAddMoneyWidgetForActions:(id)arg1 ;
-(void)updateUseAccessibilityLayout;
-(void)_determineWidgetContentWithAvailableWidgets;
-(void)updateNumberOfWidgetsPerRow;
@end


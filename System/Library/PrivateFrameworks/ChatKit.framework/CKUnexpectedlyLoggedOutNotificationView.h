/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKTwoButtonInlineNotificationViewDelegate.h>

@protocol CKUnexpectedlyLoggedOutNotificationViewDelegate;
@class CKTwoButtonInlineNotificationView, NSString;

@interface CKUnexpectedlyLoggedOutNotificationView : UIView <CKTwoButtonInlineNotificationViewDelegate> {

	id<CKUnexpectedlyLoggedOutNotificationViewDelegate> _delegate;
	CKTwoButtonInlineNotificationView* _inlineNotificationView;

}

@property (nonatomic,retain) CKTwoButtonInlineNotificationView * inlineNotificationView;                       //@synthesize inlineNotificationView=_inlineNotificationView - In the implementation block
@property (assign,nonatomic,__weak) id<CKUnexpectedlyLoggedOutNotificationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL visible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CKUnexpectedlyLoggedOutNotificationViewDelegate>)delegate;
-(void)setDelegate:(id<CKUnexpectedlyLoggedOutNotificationViewDelegate>)arg1 ;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)inlineNotificationView:(id)arg1 didChangeRequestedHeight:(double)arg2 ;
-(CKTwoButtonInlineNotificationView *)inlineNotificationView;
-(void)inlineNotificationViewDidReceiveLeftButtonTap:(id)arg1 ;
-(void)inlineNotificationViewDidReceiveRightButtonTap:(id)arg1 ;
-(void)setInlineNotificationView:(CKTwoButtonInlineNotificationView *)arg1 ;
@end


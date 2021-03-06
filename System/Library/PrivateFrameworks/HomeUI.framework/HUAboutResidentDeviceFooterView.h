/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol HUAboutResidentDeviceFooterViewDelegate;
@class UITextView, NSMutableArray, NSString;

@interface HUAboutResidentDeviceFooterView : UITableViewHeaderFooterView <UITextViewDelegate> {

	id<HUAboutResidentDeviceFooterViewDelegate> _delegate;
	UITextView* _messageView;
	NSMutableArray* _constraints;
	UIEdgeInsets _messageInsets;

}

@property (nonatomic,retain) UITextView * messageView;                                                 //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                                             //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic,__weak) id<HUAboutResidentDeviceFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets messageInsets;                                               //@synthesize messageInsets=_messageInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id<HUAboutResidentDeviceFooterViewDelegate>)delegate;
-(void)setDelegate:(id<HUAboutResidentDeviceFooterViewDelegate>)arg1 ;
-(NSMutableArray *)constraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateConstraints;
-(id)_textAttributes;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(id)_linkTextAttributes;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)_setupViews;
-(UITextView *)messageView;
-(void)setMessageView:(UITextView *)arg1 ;
-(void)setMessageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)messageInsets;
@end


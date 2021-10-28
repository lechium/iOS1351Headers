/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WFComposeSegmentedControlDelegate;
@class UIToolbar, NSArray;

@interface WFComposeSegmentedControl : UIView {

	unsigned long long _selectedSegment;
	id<WFComposeSegmentedControlDelegate> _delegate;
	UIToolbar* _toolbar;
	NSArray* _buttons;

}

@property (nonatomic,readonly) UIToolbar * toolbar;                                              //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,readonly) NSArray * buttons;                                                //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) unsigned long long selectedSegment;                                 //@synthesize selectedSegment=_selectedSegment - In the implementation block
@property (assign,nonatomic,__weak) id<WFComposeSegmentedControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFComposeSegmentedControlDelegate>)delegate;
-(void)setDelegate:(id<WFComposeSegmentedControlDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(UIToolbar *)toolbar;
-(void)setSelectedSegment:(unsigned long long)arg1 ;
-(unsigned long long)selectedSegment;
-(NSArray *)buttons;
-(void)segmentPressed:(id)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewHeaderFooterView.h>

@protocol HUToggleSectionHeaderDelegate;
@class UIButton;

@interface HUToggleSectionHeader : UITableViewHeaderFooterView {

	unsigned long long _toggleState;
	id<HUToggleSectionHeaderDelegate> _delegate;
	UIButton* _toggleButton;

}

@property (nonatomic,retain) UIButton * toggleButton;                                        //@synthesize toggleButton=_toggleButton - In the implementation block
@property (assign,nonatomic) unsigned long long toggleState;                                 //@synthesize toggleState=_toggleState - In the implementation block
@property (assign,nonatomic,__weak) id<HUToggleSectionHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL toggleButtonHidden; 
-(id<HUToggleSectionHeaderDelegate>)delegate;
-(void)setDelegate:(id<HUToggleSectionHeaderDelegate>)arg1 ;
-(void)prepareForReuse;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(unsigned long long)toggleState;
-(void)setToggleState:(unsigned long long)arg1 ;
-(UIButton *)toggleButton;
-(void)setToggleButton:(UIButton *)arg1 ;
-(void)_toggle:(id)arg1 ;
-(BOOL)toggleButtonHidden;
-(void)setToggleButtonHidden:(BOOL)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class SBSeparatorNubView;

@interface SBSeparatorView : UIView {

	unsigned long long _nubStyle;
	SBSeparatorNubView* _nubView;

}

@property (nonatomic,retain) SBSeparatorNubView * nubView;              //@synthesize nubView=_nubView - In the implementation block
@property (assign,nonatomic) unsigned long long nubStyle;               //@synthesize nubStyle=_nubStyle - In the implementation block
@property (nonatomic,readonly) CGRect nubRect; 
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(SBSeparatorNubView *)nubView;
-(void)setNubStyle:(unsigned long long)arg1 ;
-(CGRect)nubRect;
-(void)_updateNubViewFrame;
-(unsigned long long)nubStyle;
-(void)setNubView:(SBSeparatorNubView *)arg1 ;
@end


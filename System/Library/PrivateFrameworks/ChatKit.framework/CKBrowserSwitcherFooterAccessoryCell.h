/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIView;

@interface CKBrowserSwitcherFooterAccessoryCell : UICollectionReusableView {

	double _minHeight;
	double _maxHeight;
	UIView* _seperatorView;

}

@property (nonatomic,retain) UIView * seperatorView;              //@synthesize seperatorView=_seperatorView - In the implementation block
@property (assign,nonatomic) double minHeight;                    //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) double maxHeight;                    //@synthesize maxHeight=_maxHeight - In the implementation block
+(id)reuseIdentifier;
+(id)supplementryViewKind;
-(double)minHeight;
-(void)setMinHeight:(double)arg1 ;
-(double)maxHeight;
-(void)setMaxHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSeperatorView:(UIView *)arg1 ;
-(UIView *)seperatorView;
@end

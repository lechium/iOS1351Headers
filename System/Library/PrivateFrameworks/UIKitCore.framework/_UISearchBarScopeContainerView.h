/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:58 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UISearchBarScopeContainerLayout;

@interface _UISearchBarScopeContainerView : UIView {

	_UISearchBarScopeContainerLayout* _layout;

}

@property (nonatomic,retain) _UISearchBarScopeContainerLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(_UISearchBarScopeContainerLayout *)layout;
-(void)setLayout:(_UISearchBarScopeContainerLayout *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(BOOL)_isKnownUISearchBarComponentContainer;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:47 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView;

@interface SKUIRedeemResultSimpleTableViewCell : UITableViewCell {

	UIEdgeInsets _childContentInsets;
	UIView* _childContentView;

}

@property (assign,nonatomic) UIEdgeInsets childContentInsets;              //@synthesize childContentInsets=_childContentInsets - In the implementation block
@property (nonatomic,retain) UIView * childContentView;                    //@synthesize childContentView=_childContentView - In the implementation block
-(void)layoutSubviews;
-(void)setChildContentInsets:(UIEdgeInsets)arg1 ;
-(void)setChildContentView:(UIView *)arg1 ;
-(UIEdgeInsets)childContentInsets;
-(UIView *)childContentView;
@end


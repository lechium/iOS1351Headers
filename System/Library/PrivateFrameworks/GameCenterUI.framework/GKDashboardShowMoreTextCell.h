/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKRectShadowCell.h>

@class UILabel;

@interface GKDashboardShowMoreTextCell : GKRectShadowCell {

	UILabel* _label;

}

@property (assign,nonatomic) UILabel * label;              //@synthesize label=_label - In the implementation block
+(CGSize)defaultSize;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)awakeFromNib;
@end

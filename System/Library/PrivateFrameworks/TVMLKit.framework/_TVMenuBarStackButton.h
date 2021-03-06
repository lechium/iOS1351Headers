/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSDictionary;

@interface _TVMenuBarStackButton : UIButton {

	NSDictionary* _tabBarItem;

}

@property (nonatomic,retain) NSDictionary * tabBarItem;              //@synthesize tabBarItem=_tabBarItem - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_configureSubviews;
-(NSDictionary *)tabBarItem;
-(void)setTabBarItem:(NSDictionary *)arg1 ;
-(void)_updateSelectionViewForState:(unsigned long long)arg1 ;
-(void)_setSelectedOrHighlighted:(BOOL)arg1 ;
-(void)_updateImageEdgeInsets;
@end


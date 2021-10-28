/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionFocusingLayout.h>

@class NSDictionary;

@interface GKCollectionColumnLayout : GKCollectionFocusingLayout {

	NSDictionary* _itemAttributes;
	NSDictionary* _headerAttributes;
	NSDictionary* _decorationAttributes;
	NSDictionary* _footerAttributes;

}

@property (nonatomic,retain) NSDictionary * itemAttributes;                    //@synthesize itemAttributes=_itemAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * headerAttributes;                  //@synthesize headerAttributes=_headerAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * decorationAttributes;              //@synthesize decorationAttributes=_decorationAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * footerAttributes;                  //@synthesize footerAttributes=_footerAttributes - In the implementation block
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(NSDictionary *)footerAttributes;
-(void)setHeaderAttributes:(NSDictionary *)arg1 ;
-(void)setFooterAttributes:(NSDictionary *)arg1 ;
-(void)setItemAttributes:(NSDictionary *)arg1 ;
-(void)applyDefaults;
-(NSDictionary *)itemAttributes;
-(NSDictionary *)headerAttributes;
-(void)setDecorationAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)decorationAttributes;
@end

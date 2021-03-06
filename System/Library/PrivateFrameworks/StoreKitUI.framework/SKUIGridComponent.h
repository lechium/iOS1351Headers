/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIPageComponent.h>

@class NSMutableArray, NSArray;

@interface SKUIGridComponent : SKUIPageComponent {

	NSMutableArray* _children;
	SKUIEditorialStyle _editorialStyle;
	long long _gridType;
	SKUILockupStyle _lockupStyle;
	long long _missingItemCount;
	BOOL _showsIndexNumbers;

}

@property (nonatomic,readonly) long long gridType;                             //@synthesize gridType=_gridType - In the implementation block
@property (nonatomic,readonly) NSArray * children;                             //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) SKUIEditorialStyle editorialStyle;              //@synthesize editorialStyle=_editorialStyle - In the implementation block
@property (nonatomic,readonly) SKUILockupStyle lockupStyle;                    //@synthesize lockupStyle=_lockupStyle - In the implementation block
@property (nonatomic,readonly) BOOL showsIndexNumbers;                         //@synthesize showsIndexNumbers=_showsIndexNumbers - In the implementation block
-(id)description;
-(NSArray *)children;
-(long long)componentType;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isMissingItemData;
-(id)metricsElementName;
-(long long)gridType;
-(id)initWithBrickItems:(id)arg1 ;
-(id)initWithRoomContext:(id)arg1 gridType:(long long)arg2 ;
-(void)_reloadMissingItemCount;
-(void)_setChildrenWithFeaturedContextContext:(id)arg1 ;
-(id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(SKUILockupStyle)arg2 ;
-(SKUILockupStyle)lockupStyle;
-(id)initWithGridItems:(id)arg1 ;
-(id)initWithLockups:(id)arg1 ;
-(id)_updateWithInvalidItemIdentifiers:(id)arg1 ;
-(id)_updateWithMissingItems:(id)arg1 ;
-(BOOL)showsIndexNumbers;
-(SKUIEditorialStyle)editorialStyle;
@end


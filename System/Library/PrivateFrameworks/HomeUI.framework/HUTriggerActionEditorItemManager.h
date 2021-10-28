/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFSimpleItemManager.h>

@class HFStaticItem, HUInstructionsItem;

@interface HUTriggerActionEditorItemManager : HFSimpleItemManager {

	HFStaticItem* _gridItem;
	HFStaticItem* _addShortcutHeader;
	HFStaticItem* _addShortcutItem;
	HUInstructionsItem* _instructionsItem;

}

@property (nonatomic,retain) HFStaticItem * gridItem;                            //@synthesize gridItem=_gridItem - In the implementation block
@property (nonatomic,retain) HUInstructionsItem * instructionsItem;              //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * addShortcutHeader;                   //@synthesize addShortcutHeader=_addShortcutHeader - In the implementation block
@property (nonatomic,retain) HFStaticItem * addShortcutItem;                     //@synthesize addShortcutItem=_addShortcutItem - In the implementation block
-(HFStaticItem *)gridItem;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HUInstructionsItem *)instructionsItem;
-(id)initWithInstructionsItem:(id)arg1 andDelegate:(id)arg2 showShortcutItem:(BOOL)arg3 ;
-(HFStaticItem *)addShortcutHeader;
-(HFStaticItem *)addShortcutItem;
-(void)setInstructionsItem:(HUInstructionsItem *)arg1 ;
-(void)setGridItem:(HFStaticItem *)arg1 ;
-(void)setAddShortcutHeader:(HFStaticItem *)arg1 ;
-(void)setAddShortcutItem:(HFStaticItem *)arg1 ;
@end

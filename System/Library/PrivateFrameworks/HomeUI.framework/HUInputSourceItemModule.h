/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUChildServiceEditorItemModule.h>

@class HFItem;

@interface HUInputSourceItemModule : HUChildServiceEditorItemModule {

	HFItem* _chooseInputsSelectionItem;

}

@property (nonatomic,readonly) HFItem * chooseInputsSelectionItem;              //@synthesize chooseInputsSelectionItem=_chooseInputsSelectionItem - In the implementation block
+(id)supportedServiceTypes;
+(/*^block*/id)_serviceItemComparatorForTelevisionProfile:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(BOOL)canToggleConfigurationStateForItem:(id)arg1 ;
-(HFItem *)chooseInputsSelectionItem;
@end

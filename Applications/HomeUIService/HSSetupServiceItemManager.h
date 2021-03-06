//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HSSetupServiceHeaderItemManager.h"

@class HFAssociatedServiceTypeOptionItemProvider, HFItem, HFItemBuilder, HFRoomBuilder, HFStaticItemProvider, HFTransformItemProvider, HSSetupServiceSelectedRoomItemProvider, HUAccessoryServicesItemModule, HUInputSourceItemModule, HUValveItemModule, NSArray;
@protocol HFItemBuilderItem, HFServiceLikeBuilder;

@interface HSSetupServiceItemManager : HSSetupServiceHeaderItemManager
{
    _Bool _showRoomsList;	// 8 = 0x8
    _Bool _showAssociatedServiceTypeList;	// 9 = 0x9
    _Bool _shouldIncludePrimaryServiceInServicesSection;	// 10 = 0xa
    NSArray *_serviceBuilders;	// 16 = 0x10
    HFItem<HFItemBuilderItem> *_builderItem;	// 24 = 0x18
    HFItemBuilder<HFServiceLikeBuilder> *_serviceLikeBuilder;	// 32 = 0x20
    HFItem *_nameAndIconItem;	// 40 = 0x28
    HFItem *_roomItem;	// 48 = 0x30
    HFItem *_associatedServiceTypeItem;	// 56 = 0x38
    HFItem *_createNewRoomItem;	// 64 = 0x40
    HFItem *_favoriteItem;	// 72 = 0x48
    HFItem *_roomListItem;	// 80 = 0x50
    HFTransformItemProvider *_existingRoomItemProvider;	// 88 = 0x58
    HFTransformItemProvider *_suggestedRoomItemProvider;	// 96 = 0x60
    HUValveItemModule *_valveItemModule;	// 104 = 0x68
    HUInputSourceItemModule *_inputItemModule;	// 112 = 0x70
    HUAccessoryServicesItemModule *_accessoryServicesEditorItemModule;	// 120 = 0x78
    HFRoomBuilder *_prepopulatedRoomBuilder;	// 128 = 0x80
    HFStaticItemProvider *_staticItemProvider;	// 136 = 0x88
    HSSetupServiceSelectedRoomItemProvider *_selectedRoomItemProvider;	// 144 = 0x90
    HFAssociatedServiceTypeOptionItemProvider *_associatedServiceTypeOptionItemProvider;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000100014120
@property(nonatomic) _Bool shouldIncludePrimaryServiceInServicesSection; // @synthesize shouldIncludePrimaryServiceInServicesSection=_shouldIncludePrimaryServiceInServicesSection;
@property(retain, nonatomic) HFAssociatedServiceTypeOptionItemProvider *associatedServiceTypeOptionItemProvider; // @synthesize associatedServiceTypeOptionItemProvider=_associatedServiceTypeOptionItemProvider;
@property(retain, nonatomic) HSSetupServiceSelectedRoomItemProvider *selectedRoomItemProvider; // @synthesize selectedRoomItemProvider=_selectedRoomItemProvider;
@property(retain, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(retain, nonatomic) HFRoomBuilder *prepopulatedRoomBuilder; // @synthesize prepopulatedRoomBuilder=_prepopulatedRoomBuilder;
@property(nonatomic) _Bool showAssociatedServiceTypeList; // @synthesize showAssociatedServiceTypeList=_showAssociatedServiceTypeList;
@property(nonatomic) _Bool showRoomsList; // @synthesize showRoomsList=_showRoomsList;
@property(retain, nonatomic) HUAccessoryServicesItemModule *accessoryServicesEditorItemModule; // @synthesize accessoryServicesEditorItemModule=_accessoryServicesEditorItemModule;
@property(retain, nonatomic) HUInputSourceItemModule *inputItemModule; // @synthesize inputItemModule=_inputItemModule;
@property(retain, nonatomic) HUValveItemModule *valveItemModule; // @synthesize valveItemModule=_valveItemModule;
@property(retain, nonatomic) HFTransformItemProvider *suggestedRoomItemProvider; // @synthesize suggestedRoomItemProvider=_suggestedRoomItemProvider;
@property(retain, nonatomic) HFTransformItemProvider *existingRoomItemProvider; // @synthesize existingRoomItemProvider=_existingRoomItemProvider;
@property(retain, nonatomic) HFItem *roomListItem; // @synthesize roomListItem=_roomListItem;
@property(retain, nonatomic) HFItem *favoriteItem; // @synthesize favoriteItem=_favoriteItem;
@property(retain, nonatomic) HFItem *createNewRoomItem; // @synthesize createNewRoomItem=_createNewRoomItem;
@property(retain, nonatomic) HFItem *associatedServiceTypeItem; // @synthesize associatedServiceTypeItem=_associatedServiceTypeItem;
@property(retain, nonatomic) HFItem *roomItem; // @synthesize roomItem=_roomItem;
@property(retain, nonatomic) HFItem *nameAndIconItem; // @synthesize nameAndIconItem=_nameAndIconItem;
@property(readonly, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder; // @synthesize serviceLikeBuilder=_serviceLikeBuilder;
@property(readonly, nonatomic) HFItem<HFItemBuilderItem> *builderItem; // @synthesize builderItem=_builderItem;
@property(retain, nonatomic) NSArray *serviceBuilders; // @synthesize serviceBuilders=_serviceBuilders;
- (id)_itemsToHideInSet:(id)arg1;	// IMP=0x0000000100013c14
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x0000000100013084
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x0000000100010f40
- (void)setHome:(id)arg1;	// IMP=0x0000000100010ee8
- (_Bool)_isMultiServiceAccessory;	// IMP=0x0000000100010e3c
- (id)_primaryService;	// IMP=0x0000000100010d88
- (_Bool)_shouldShowFavoriteSection;	// IMP=0x0000000100010d3c
- (void)_createServiceBuilders;	// IMP=0x0000000100010ad4
- (_Bool)isRoomItem:(id)arg1;	// IMP=0x00000001000108ac
- (void)selectRoom:(id)arg1;	// IMP=0x0000000100010700
- (void)updateBuilderUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000104ec
@property(readonly, nonatomic) NSArray *orderedRoomSectionItems;
@property(readonly, nonatomic) HFItem *selectedAssociatedServiceTypeItem;
@property(readonly, nonatomic) HFItem *selectedRoomItem;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x000000010000f980
- (id)initWithDelegate:(id)arg1 builderItem:(id)arg2 serviceLikeBuilder:(id)arg3;	// IMP=0x000000010000f8b0

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EFLoggable-Protocol.h"

@class NSArray, NSString;

@interface FavoritesCollectionState : NSObject <EFLoggable>
{
    _Bool _editing;	// 8 = 0x8
    NSArray *_visibleItems;	// 16 = 0x10
    NSArray *_selectedItems;	// 24 = 0x18
    NSArray *_items;	// 32 = 0x20
    unsigned long long _type;	// 40 = 0x28
}

+ (id)displayOrder;	// IMP=0x000000010002228c
+ (id)log;	// IMP=0x0000000100021e04
- (void).cxx_destruct;	// IMP=0x0000000100023910
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (unsigned long long)countOfVisibleItems;	// IMP=0x000000010002385c
- (void)invalidateVisibleItems;	// IMP=0x0000000100023754
@property(readonly, nonatomic) NSArray *visibleItems; // @synthesize visibleItems=_visibleItems;
@property(readonly, nonatomic) NSArray *selectedItems; // @synthesize selectedItems=_selectedItems;
- (id)orderedAccountIds;	// IMP=0x000000010002326c
- (id)dictionaryRepresentations;	// IMP=0x00000001000230b8
- (id)removeItem:(id)arg1;	// IMP=0x0000000100022ff4
- (void)_addAccountsCollectionVisibleItemsToArray:(id)arg1;	// IMP=0x0000000100022cdc
- (void)_addMailboxCollectionVisibleItemsToArray:(id)arg1;	// IMP=0x0000000100022b30
- (void)_addVisibleItem:(id)arg1 toArray:(id)arg2;	// IMP=0x0000000100022988
- (void)_addSubitems:(id)arg1 toArray:(id)arg2;	// IMP=0x0000000100022808
- (id)removeItemWithSyncKey:(id)arg1;	// IMP=0x0000000100022738
- (id)itemWithSyncKey:(id)arg1;	// IMP=0x00000001000225d0
- (long long)_indexForNewItem:(id)arg1;	// IMP=0x0000000100022388
- (id)addOrUpdateItem:(id)arg1 didAdd:(out _Bool *)arg2 didReplace:(out _Bool *)arg3;	// IMP=0x00000001000220b4
- (_Bool)addItem:(id)arg1 ordered:(_Bool)arg2;	// IMP=0x0000000100021fb0
- (_Bool)isAccountsCollection;	// IMP=0x0000000100021fa0
- (_Bool)isMailboxesCollection;	// IMP=0x0000000100021f90
- (id)mutableItems;	// IMP=0x0000000100021f88
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x0000000100021ef4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


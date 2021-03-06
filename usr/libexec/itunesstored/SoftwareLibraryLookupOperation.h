//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface SoftwareLibraryLookupOperation : ISOperation
{
    NSArray *_bundleIDs;	// 96 = 0x60
    NSArray *_itemIDs;	// 104 = 0x68
    NSArray *_softwareLibraryItems;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000001001c542c
- (id)_newSoftwareLibraryItemWithContainerPath:(id)arg1;	// IMP=0x00000001001c537c
- (id)_newSoftwareLibraryItemWithApplication:(id)arg1;	// IMP=0x00000001001c50b4
- (void)_loadFromItemIdentifiers;	// IMP=0x00000001001c4e7c
- (void)_loadFromBundleIdentifiers;	// IMP=0x00000001001c485c
- (void)run;	// IMP=0x00000001001c4804
@property(readonly) NSArray *softwareLibraryItems;
@property(readonly) NSArray *itemIdentifiers;
@property(readonly) NSArray *bundleIdentifiers;
- (id)initWithItemIdentifiers:(id)arg1;	// IMP=0x00000001001c470c
- (id)initWithBundleIdentifiers:(id)arg1;	// IMP=0x00000001001c4684

@end


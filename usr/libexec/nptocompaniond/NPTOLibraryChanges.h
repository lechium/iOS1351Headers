//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPTOLibrary, NSArray;

@interface NPTOLibraryChanges : NSObject
{
    NPTOLibrary *_masterLibrary;	// 8 = 0x8
    NPTOLibrary *_clientLibrary;	// 16 = 0x10
    NSArray *_deletedAssets;	// 24 = 0x18
    NSArray *_updatedAssets;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010001be70
@property(readonly, nonatomic) NSArray *updatedAssets; // @synthesize updatedAssets=_updatedAssets;
@property(readonly, nonatomic) NSArray *deletedAssets; // @synthesize deletedAssets=_deletedAssets;
- (id)_initWithMasterLibrary:(id)arg1 clientLibrary:(id)arg2;	// IMP=0x000000010001b4a4

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UpdateMigratorOperation.h"

@class NSArray, NSDictionary;

@interface UpdateMigratorPromotionOperation : UpdateMigratorOperation
{
    NSArray *_bundleIDs;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000c8820
- (void)performMigration;	// IMP=0x00000001000c83f0
- (id)initWithBundleIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x00000001000c8320

@end

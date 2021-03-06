//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, WhitelistChecker;

@interface MSDDemoManifestCheck : NSObject
{
    NSDictionary *_segmentedManifestWithRigorousFlag;	// 8 = 0x8
    NSMutableDictionary *_allowedSymLinks;	// 16 = 0x10
    WhitelistChecker *_whitelistChecker;	// 24 = 0x18
    NSDictionary *_itemBeingInstalled;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010000d194
- (void).cxx_destruct;	// IMP=0x0000000100010680
@property(retain) NSDictionary *itemBeingInstalled; // @synthesize itemBeingInstalled=_itemBeingInstalled;
@property(retain) WhitelistChecker *whitelistChecker; // @synthesize whitelistChecker=_whitelistChecker;
@property(retain) NSMutableDictionary *allowedSymLinks; // @synthesize allowedSymLinks=_allowedSymLinks;
@property(retain) NSDictionary *segmentedManifestWithRigorousFlag; // @synthesize segmentedManifestWithRigorousFlag=_segmentedManifestWithRigorousFlag;
- (_Bool)checkFileForEntitlements:(id)arg1 forCorrespondingManifestEntry:(id)arg2;	// IMP=0x0000000100010018
- (void)registerEntitlementNotificationHandler;	// IMP=0x000000010000fdf0
- (_Bool)runAppLayoutSecurityCheck:(id)arg1;	// IMP=0x000000010000f28c
- (_Bool)runSecurityChecksForSection:(id)arg1 dataType:(id)arg2;	// IMP=0x000000010000e9b8
- (_Bool)runSecurityCheck;	// IMP=0x000000010000e174
- (_Bool)secureManifestCheckForSegmentedManifest:(id)arg1;	// IMP=0x000000010000e014
- (_Bool)secureManifestCheckForUnsegmentedManifest:(id)arg1;	// IMP=0x000000010000de18
- (_Bool)unsegmentedToSegmentedWithRigorousFlag:(id)arg1;	// IMP=0x000000010000d6fc
- (id)init;	// IMP=0x000000010000d200

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DRProcessInfo : NSObject
{
    NSString *_teamID;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    CDStruct_4c969caf _auditToken;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000ca4c
@property(nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x000000010000c8f8

@end

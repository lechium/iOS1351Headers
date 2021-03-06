//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ResourceArbiterClientDelegate-Protocol.h"

@class NSString, ResourceArbiterClient;

@interface FlickerResourceArbiterClientDelegate : NSObject <ResourceArbiterClientDelegate>
{
    ResourceArbiterClient *_arbiterClient;	// 8 = 0x8
    struct H10ISPFlickerDetectorContext *_flickerContext;	// 16 = 0x10
}

@property(nonatomic) struct H10ISPFlickerDetectorContext *flickerContext; // @synthesize flickerContext=_flickerContext;
@property(readonly, nonatomic) ResourceArbiterClient *arbiterClient; // @synthesize arbiterClient=_arbiterClient;
- (void)resourceAccessRevoked;	// IMP=0x000000010002cd40
- (void)resourceAccessResult:(_Bool)arg1;	// IMP=0x000000010002c370
- (void)releaseResourceAccess;	// IMP=0x000000010002c334
- (void)requestResourceAccess;	// IMP=0x000000010002c2d8
- (void)cleanup;	// IMP=0x000000010002c288
- (id)init;	// IMP=0x000000010002c20c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


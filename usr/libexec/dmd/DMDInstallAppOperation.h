//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDAppOperation.h"

@class DMDAppMetadata;

@interface DMDInstallAppOperation : DMDAppOperation
{
    DMDAppMetadata *_metadata;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x00000001000567bc
+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100056780
+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100056624
- (void).cxx_destruct;	// IMP=0x0000000100056f44
@property(retain, nonatomic) DMDAppMetadata *metadata; // @synthesize metadata=_metadata;
- (void)_resumeInstallationForRequest:(id)arg1;	// IMP=0x0000000100056e24
- (void)_runWithRequest:(id)arg1;	// IMP=0x0000000100056bd4
- (void)installAppForRequest:(id)arg1;	// IMP=0x00000001000569c0
- (void)runWithRequest:(id)arg1;	// IMP=0x0000000100056828

@end

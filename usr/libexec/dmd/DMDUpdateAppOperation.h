//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDAppOperation.h"

@interface DMDUpdateAppOperation : DMDAppOperation
{
    _Bool _didPromptUser;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x0000000100081458
+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100081390
@property(nonatomic) _Bool didPromptUser; // @synthesize didPromptUser=_didPromptUser;
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x00000001000828a4
- (void)_setState:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000100082790
- (void)_showUpdateFailurePromptIfNeededForRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000100082490
- (void)_startUpdateAppForRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x00000001000820d8
- (void)_promptIfNeededAndUpdateAppForRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000100081ad8
- (void)_resumeUpdateForBundleIdentifier:(id)arg1;	// IMP=0x0000000100081960
- (void)_runWithRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000100081704
- (void)runWithRequest:(id)arg1;	// IMP=0x000000010008159c
- (void)endOperationWithError:(id)arg1;	// IMP=0x0000000100081530
- (void)endOperationWithResultObject:(id)arg1;	// IMP=0x00000001000814c4

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SDPromptDelegate : NSObject
{
    _Bool _isEarlyPrompt;	// 8 = 0x8
    _Bool _didPartnerTimeout;	// 9 = 0x9
    _Bool _isCosysdiagnoseResponse;	// 10 = 0xa
    long long _openIssueFiler;	// 16 = 0x10
    NSString *_diagnosticID;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100026864
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSString *diagnosticID; // @synthesize diagnosticID=_diagnosticID;
@property long long openIssueFiler; // @synthesize openIssueFiler=_openIssueFiler;
@property _Bool isCosysdiagnoseResponse; // @synthesize isCosysdiagnoseResponse=_isCosysdiagnoseResponse;
@property _Bool didPartnerTimeout; // @synthesize didPartnerTimeout=_didPartnerTimeout;
@property _Bool isEarlyPrompt; // @synthesize isEarlyPrompt=_isEarlyPrompt;
- (id)copy;	// IMP=0x0000000100026680
- (id)description;	// IMP=0x000000010002655c

@end


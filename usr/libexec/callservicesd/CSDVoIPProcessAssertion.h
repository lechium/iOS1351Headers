//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;

@interface CSDVoIPProcessAssertion : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    BKSProcessAssertion *_processAssertion;	// 16 = 0x10
}

+ (id)processAssertionNameForBundleIdentifier:(id)arg1;	// IMP=0x00000001000070c4
+ (id)processAssertionWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100007028
- (void).cxx_destruct;	// IMP=0x00000001000072d8
@property(retain, nonatomic) BKSProcessAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (unsigned long long)hash;	// IMP=0x000000010000726c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000071ac
- (id)name;	// IMP=0x0000000100007140
- (void)acquireWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006f4c
- (void)dealloc;	// IMP=0x0000000100006e44
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100006dcc

@end

//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNCache, NSLocale;

@interface CRMailAccountAnalyzer : NSObject
{
    CNCache *_cache;	// 8 = 0x8
    NSLocale *_locale;	// 16 = 0x10
}

- (id)normalizeAddress:(id)arg1;	// IMP=0x0000000100013e50
- (id)allAddresses;	// IMP=0x0000000100013e40
- (_Bool)isAddressRestricted:(id)arg1;	// IMP=0x0000000100013dec
- (void)addAddress:(id)arg1 isRestricted:(_Bool)arg2;	// IMP=0x0000000100013d04
- (void)dealloc;	// IMP=0x0000000100013cbc
- (id)initWithLocale:(id)arg1;	// IMP=0x0000000100013c54
- (id)init;	// IMP=0x0000000100013c14

@end


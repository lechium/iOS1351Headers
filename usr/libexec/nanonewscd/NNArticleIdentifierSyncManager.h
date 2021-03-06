//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface NNArticleIdentifierSyncManager : NSObject
{
    NSSet *_synchronizedKeys;	// 8 = 0x8
    NSString *_readonlyResetKey;	// 16 = 0x10
    NSString *_readonlyKey;	// 24 = 0x18
    NSString *_readwriteResetKey;	// 32 = 0x20
    NSString *_readwriteKey;	// 40 = 0x28
}

+ (id)seenManager;	// IMP=0x000000010000be74
+ (id)savedManager;	// IMP=0x000000010000bddc
- (void).cxx_destruct;	// IMP=0x000000010000d1c0
@property(readonly, nonatomic) NSString *readwriteKey; // @synthesize readwriteKey=_readwriteKey;
@property(readonly, nonatomic) NSString *readwriteResetKey; // @synthesize readwriteResetKey=_readwriteResetKey;
@property(readonly, nonatomic) NSString *readonlyKey; // @synthesize readonlyKey=_readonlyKey;
@property(readonly, nonatomic) NSString *readonlyResetKey; // @synthesize readonlyResetKey=_readonlyResetKey;
@property(readonly, nonatomic) NSSet *synchronizedKeys; // @synthesize synchronizedKeys=_synchronizedKeys;
- (id)_readwriteResetDate;	// IMP=0x000000010000d0c0
- (id)_readonlyResetDate;	// IMP=0x000000010000cfe8
- (id)_lookupIdentifiersForKey:(id)arg1;	// IMP=0x000000010000cce0
- (id)_readwriteArticleStateLookup;	// IMP=0x000000010000cc80
- (id)_readonlyArticleStateLookup;	// IMP=0x000000010000cc20
- (void)_makeIdentifier:(id)arg1 active:(_Bool)arg2;	// IMP=0x000000010000cad8
@property(readonly, nonatomic) NSSet *readonlyArticleIdentifiers;
@property(readonly, nonatomic) NSSet *articleIdentifiers;
- (void)removeIdentifier:(id)arg1;	// IMP=0x000000010000c2d8
- (void)addIdentifier:(id)arg1;	// IMP=0x000000010000c2c8
- (void)synchronize;	// IMP=0x000000010000c244
- (void)clearAllIdentifiers;	// IMP=0x000000010000c0f0
- (id)init;	// IMP=0x000000010000c0d0
- (id)initWithReadonlyResetKey:(id)arg1 readwriteResetKey:(id)arg2 readonlyKey:(id)arg3 readwriteKey:(id)arg4;	// IMP=0x000000010000bf0c

@end


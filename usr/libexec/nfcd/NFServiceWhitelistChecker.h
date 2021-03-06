//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSMutableOrderedSet, NSOrderedSet, NSString;

@interface NFServiceWhitelistChecker : NSObject <NSCopying>
{
    NSMutableArray *_iso15693TagAccessFilters;	// 8 = 0x8
    NSString *_clientName;	// 16 = 0x10
    _Bool _iso15693ReaderAccess;	// 24 = 0x18
    _Bool _vasReaderAccess;	// 25 = 0x19
    _Bool _ndefReaderAccess;	// 26 = 0x1a
    _Bool _tagReaderAccess;	// 27 = 0x1b
    NSMutableOrderedSet *_permissibleISO7816AidSet;	// 32 = 0x20
    int _clientProcessIdentifier;	// 40 = 0x28
    _Bool _internalAccess;	// 44 = 0x2c
    _Bool _seshatAccess;	// 45 = 0x2d
    _Bool _miniNVWriteAccess;	// 46 = 0x2e
    _Bool _lpmFactoryTest;	// 47 = 0x2f
    _Bool _remoteAdminAccess;	// 48 = 0x30
    _Bool _allowBackgroundedSession;	// 49 = 0x31
    _Bool _useUnfilteredApplets;	// 50 = 0x32
    _Bool _singleUserAccess;	// 51 = 0x33
    _Bool _purpleTrustAccess;	// 52 = 0x34
    _Bool _surfSessionAccess;	// 53 = 0x35
    _Bool _eCommerceAccess;	// 54 = 0x36
    _Bool _seSessionAccess;	// 55 = 0x37
    _Bool _readerInternalAccess;	// 56 = 0x38
    _Bool _cardModeAccess;	// 57 = 0x39
    _Bool _hceAccess;	// 58 = 0x3a
    NSString *_readerPurposeString;	// 64 = 0x40
    NSString *_applicationIdentifier;	// 72 = 0x48
}

@property(readonly, nonatomic) _Bool hceAccess; // @synthesize hceAccess=_hceAccess;
@property(readonly, nonatomic) _Bool cardModeAccess; // @synthesize cardModeAccess=_cardModeAccess;
@property(readonly, nonatomic) _Bool readerInternalAccess; // @synthesize readerInternalAccess=_readerInternalAccess;
@property(readonly, nonatomic) _Bool seSessionAccess; // @synthesize seSessionAccess=_seSessionAccess;
@property(readonly, nonatomic) _Bool eCommerceAccess; // @synthesize eCommerceAccess=_eCommerceAccess;
@property(readonly, nonatomic) _Bool surfSessionAccess; // @synthesize surfSessionAccess=_surfSessionAccess;
@property(readonly, nonatomic) _Bool purpleTrustAccess; // @synthesize purpleTrustAccess=_purpleTrustAccess;
@property(readonly, nonatomic) _Bool singleUserAccess; // @synthesize singleUserAccess=_singleUserAccess;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(readonly, nonatomic) _Bool useUnfilteredApplets; // @synthesize useUnfilteredApplets=_useUnfilteredApplets;
@property(readonly, retain, nonatomic) NSString *readerPurposeString; // @synthesize readerPurposeString=_readerPurposeString;
@property(readonly, nonatomic) _Bool allowBackgroundedSession; // @synthesize allowBackgroundedSession=_allowBackgroundedSession;
@property(readonly, nonatomic) _Bool remoteAdminAccess; // @synthesize remoteAdminAccess=_remoteAdminAccess;
@property(readonly, nonatomic) _Bool lpmFactoryTest; // @synthesize lpmFactoryTest=_lpmFactoryTest;
@property(readonly, nonatomic) _Bool miniNVWriteAccess; // @synthesize miniNVWriteAccess=_miniNVWriteAccess;
@property(readonly, nonatomic) _Bool seshatAccess; // @synthesize seshatAccess=_seshatAccess;
@property(readonly, nonatomic) _Bool internalAccess; // @synthesize internalAccess=_internalAccess;
- (id)description;	// IMP=0x00000001000aa79c
- (id)_stringFromISO15693AccessFilterList;	// IMP=0x00000001000aa648
- (id)_stringFromArray:(id)arg1;	// IMP=0x00000001000aa4c8
@property(readonly, retain, nonatomic) NSOrderedSet *permissibleISO7816AidList;
@property(readonly, nonatomic) _Bool nfcTagReaderAccess;
@property(readonly, nonatomic) _Bool externalReaderAccessAllow;
@property(readonly, nonatomic) _Bool nfcNDEFReaderAccess;
@property(readonly, nonatomic) _Bool nfcVASReaderAccess;
@property(readonly, nonatomic) _Bool nfcISO15693ReaderAccess;
@property(readonly, nonatomic) double sessionTimeLimit;
- (id)getAppInfoDictionary;	// IMP=0x00000001000aa27c
@property(readonly, copy, nonatomic) NSString *clientName;
- (unsigned int)validateISO15693TagAccessWithManufacturerCode:(unsigned long long)arg1;	// IMP=0x00000001000aa128
- (unsigned int)validateISO15693TagAccessWithManufacturerCode:(unsigned long long)arg1 serialNumber:(id)arg2;	// IMP=0x00000001000a9e0c
- (unsigned int)validateISO15693TagAcesssWithUID:(id)arg1;	// IMP=0x00000001000a9d10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000a9bf8
- (void)dealloc;	// IMP=0x00000001000a9b90
- (id)initWithConnection:(id)arg1 coreNFCConnection:(_Bool)arg2;	// IMP=0x00000001000a9690
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000a9680
- (void)_initISO7816PermissibleAIDListWithSecTask:(struct __SecTask *)arg1 infoPlist:(id)arg2;	// IMP=0x00000001000a94f8
- (void)_initCoreNFCEntitlements:(id)arg1 secTask:(struct __SecTask *)arg2;	// IMP=0x00000001000a9294
- (_Bool)_isAIDStringValid:(id)arg1;	// IMP=0x00000001000a8f8c
- (void)_initTagSpecifier:(id)arg1 maximumFilterStringLength:(unsigned long long)arg2;	// IMP=0x00000001000a8c9c
- (void)_initISO15693TagSpecifier:(id)arg1;	// IMP=0x00000001000a8c8c
- (id)_createAccessDictionaryFromICCode:(id)arg1 serialNumber:(id)arg2 maximumFilterStringLength:(unsigned long long)arg3;	// IMP=0x00000001000a8a18
- (id)_stringValueOfEntitlement:(id)arg1 secTask:(struct __SecTask *)arg2;	// IMP=0x00000001000a89ac
- (id)_arrayValueOfEntitlement:(id)arg1 secTask:(struct __SecTask *)arg2;	// IMP=0x00000001000a894c
- (_Bool)_boolValueOfEntitlement:(id)arg1 secTask:(struct __SecTask *)arg2;	// IMP=0x00000001000a88e0
- (void *)_copyValueOfEntitlement:(id)arg1 secTask:(struct __SecTask *)arg2;	// IMP=0x00000001000a86c4

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface NFHardwareControllerInfo : NSObject <NSSecureCoding>
{
    _Bool _hasAntenna;	// 8 = 0x8
    _Bool _hasBooster;	// 9 = 0x9
    _Bool _hasIcfResistor;	// 10 = 0xa
    _Bool _hasMFW;	// 11 = 0xb
    _Bool _hasExpressFelicaTransitMode;	// 12 = 0xc
    _Bool _hasExpressECPAccessMode;	// 13 = 0xd
    _Bool _hasExpressGenericAMode;	// 14 = 0xe
    _Bool _hasExpressSinglePollMode;	// 15 = 0xf
    _Bool _hasLPCDSupport;	// 16 = 0x10
    _Bool _hasHLMSupport;	// 17 = 0x11
    _Bool _hasLPEMSupport;	// 18 = 0x12
    unsigned long long _siliconVersion;	// 24 = 0x18
    unsigned long long _siliconName;	// 32 = 0x20
    unsigned long long _ROMVersion;	// 40 = 0x28
    unsigned long long _firmwareVersion;	// 48 = 0x30
    unsigned long long _firmwareRevision;	// 56 = 0x38
    unsigned long long _middlewareVersion;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000ab9b4
@property(readonly, nonatomic) _Bool hasLPEMSupport; // @synthesize hasLPEMSupport=_hasLPEMSupport;
@property(readonly, nonatomic) _Bool hasHLMSupport; // @synthesize hasHLMSupport=_hasHLMSupport;
@property(readonly, nonatomic) _Bool hasLPCDSupport; // @synthesize hasLPCDSupport=_hasLPCDSupport;
@property(readonly, nonatomic) _Bool hasExpressSinglePollMode; // @synthesize hasExpressSinglePollMode=_hasExpressSinglePollMode;
@property(readonly, nonatomic) _Bool hasExpressGenericAMode; // @synthesize hasExpressGenericAMode=_hasExpressGenericAMode;
@property(readonly, nonatomic) _Bool hasExpressECPAccessMode; // @synthesize hasExpressECPAccessMode=_hasExpressECPAccessMode;
@property(readonly, nonatomic) _Bool hasExpressFelicaTransitMode; // @synthesize hasExpressFelicaTransitMode=_hasExpressFelicaTransitMode;
@property(readonly, nonatomic) _Bool hasMFW; // @synthesize hasMFW=_hasMFW;
@property(readonly, nonatomic) _Bool hasIcfResistor; // @synthesize hasIcfResistor=_hasIcfResistor;
@property(readonly, nonatomic) _Bool hasBooster; // @synthesize hasBooster=_hasBooster;
@property(readonly, nonatomic) _Bool hasAntenna; // @synthesize hasAntenna=_hasAntenna;
@property(readonly, nonatomic) unsigned long long middlewareVersion; // @synthesize middlewareVersion=_middlewareVersion;
@property(readonly, nonatomic) unsigned long long firmwareRevision; // @synthesize firmwareRevision=_firmwareRevision;
@property(readonly, nonatomic) unsigned long long firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, nonatomic) unsigned long long ROMVersion; // @synthesize ROMVersion=_ROMVersion;
@property(readonly, nonatomic) unsigned long long siliconName; // @synthesize siliconName=_siliconName;
@property(readonly, nonatomic) unsigned long long siliconVersion; // @synthesize siliconVersion=_siliconVersion;
- (id)asDictionary;	// IMP=0x00000001000ab9bc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000ab7e8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000ab5ec
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001000ab360

@end


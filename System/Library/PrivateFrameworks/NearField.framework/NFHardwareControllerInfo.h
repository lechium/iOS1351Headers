/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NFHardwareControllerInfo : NSObject <NSSecureCoding> {

	BOOL _hasAntenna;
	BOOL _hasBooster;
	BOOL _hasIcfResistor;
	BOOL _hasMFW;
	BOOL _hasExpressFelicaTransitMode;
	BOOL _hasExpressECPAccessMode;
	BOOL _hasExpressGenericAMode;
	BOOL _hasExpressSinglePollMode;
	BOOL _hasLPCDSupport;
	BOOL _hasHLMSupport;
	BOOL _hasLPEMSupport;
	unsigned long long _siliconVersion;
	unsigned long long _siliconName;
	unsigned long long _ROMVersion;
	unsigned long long _firmwareVersion;
	unsigned long long _firmwareRevision;
	unsigned long long _middlewareVersion;

}

@property (nonatomic,readonly) unsigned long long siliconVersion;                 //@synthesize siliconVersion=_siliconVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long siliconName;                    //@synthesize siliconName=_siliconName - In the implementation block
@property (nonatomic,readonly) unsigned long long ROMVersion;                     //@synthesize ROMVersion=_ROMVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long firmwareVersion;                //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long firmwareRevision;               //@synthesize firmwareRevision=_firmwareRevision - In the implementation block
@property (nonatomic,readonly) unsigned long long middlewareVersion;              //@synthesize middlewareVersion=_middlewareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAntenna;                                   //@synthesize hasAntenna=_hasAntenna - In the implementation block
@property (nonatomic,readonly) BOOL hasBooster;                                   //@synthesize hasBooster=_hasBooster - In the implementation block
@property (nonatomic,readonly) BOOL hasIcfResistor;                               //@synthesize hasIcfResistor=_hasIcfResistor - In the implementation block
@property (nonatomic,readonly) BOOL hasMFW;                                       //@synthesize hasMFW=_hasMFW - In the implementation block
@property (nonatomic,readonly) BOOL hasExpressFelicaTransitMode;                  //@synthesize hasExpressFelicaTransitMode=_hasExpressFelicaTransitMode - In the implementation block
@property (nonatomic,readonly) BOOL hasExpressECPAccessMode;                      //@synthesize hasExpressECPAccessMode=_hasExpressECPAccessMode - In the implementation block
@property (nonatomic,readonly) BOOL hasExpressGenericAMode;                       //@synthesize hasExpressGenericAMode=_hasExpressGenericAMode - In the implementation block
@property (nonatomic,readonly) BOOL hasExpressSinglePollMode;                     //@synthesize hasExpressSinglePollMode=_hasExpressSinglePollMode - In the implementation block
@property (nonatomic,readonly) BOOL hasLPCDSupport;                               //@synthesize hasLPCDSupport=_hasLPCDSupport - In the implementation block
@property (nonatomic,readonly) BOOL hasHLMSupport;                                //@synthesize hasHLMSupport=_hasHLMSupport - In the implementation block
@property (nonatomic,readonly) BOOL hasLPEMSupport;                               //@synthesize hasLPEMSupport=_hasLPEMSupport - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)firmwareVersion;
-(id)asDictionary;
-(unsigned long long)firmwareRevision;
-(unsigned long long)siliconVersion;
-(unsigned long long)siliconName;
-(unsigned long long)ROMVersion;
-(unsigned long long)middlewareVersion;
-(BOOL)hasAntenna;
-(BOOL)hasBooster;
-(BOOL)hasIcfResistor;
-(BOOL)hasMFW;
-(BOOL)hasExpressFelicaTransitMode;
-(BOOL)hasExpressECPAccessMode;
-(BOOL)hasExpressGenericAMode;
-(BOOL)hasExpressSinglePollMode;
-(BOOL)hasLPCDSupport;
-(BOOL)hasHLMSupport;
-(BOOL)hasLPEMSupport;
@end


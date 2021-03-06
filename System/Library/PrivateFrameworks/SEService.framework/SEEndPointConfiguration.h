/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SEEndPointConfiguration : NSObject <NSSecureCoding> {

	BOOL _enabledOnWire;
	BOOL _enabledOnContactless;
	BOOL _standardFlowAllowedOnWire;
	BOOL _standardFlowAllowedOnContactless;
	BOOL _fastFlowAllowedOnWire;
	BOOL _fastFlowAllowedOnContactless;
	BOOL _exchangeAllowedOnWire;
	BOOL _exchangeAllowedInFastFlow;
	BOOL _authorizeEndPointAllowed;
	BOOL _authorizeEndPointWithAuthorizeAllowed;
	BOOL _signAllowed;
	BOOL _exportEraseConfidentialMailBox;
	BOOL _confidentialDataAllowed;
	unsigned short _lengthConfidentialMailBox;
	unsigned short _offsetConfidentialMailBox;
	unsigned short _lengthPrivateMailBox;
	unsigned short _offsetPrivateMailBox;

}

@property (assign) BOOL enabledOnWire;                                      //@synthesize enabledOnWire=_enabledOnWire - In the implementation block
@property (assign) BOOL enabledOnContactless;                               //@synthesize enabledOnContactless=_enabledOnContactless - In the implementation block
@property (assign) BOOL standardFlowAllowedOnWire;                          //@synthesize standardFlowAllowedOnWire=_standardFlowAllowedOnWire - In the implementation block
@property (assign) BOOL standardFlowAllowedOnContactless;                   //@synthesize standardFlowAllowedOnContactless=_standardFlowAllowedOnContactless - In the implementation block
@property (assign) BOOL fastFlowAllowedOnWire;                              //@synthesize fastFlowAllowedOnWire=_fastFlowAllowedOnWire - In the implementation block
@property (assign) BOOL fastFlowAllowedOnContactless;                       //@synthesize fastFlowAllowedOnContactless=_fastFlowAllowedOnContactless - In the implementation block
@property (assign) BOOL exchangeAllowedOnWire;                              //@synthesize exchangeAllowedOnWire=_exchangeAllowedOnWire - In the implementation block
@property (assign) BOOL exchangeAllowedInFastFlow;                          //@synthesize exchangeAllowedInFastFlow=_exchangeAllowedInFastFlow - In the implementation block
@property (assign) BOOL authorizeEndPointAllowed;                           //@synthesize authorizeEndPointAllowed=_authorizeEndPointAllowed - In the implementation block
@property (assign) BOOL authorizeEndPointWithAuthorizeAllowed;              //@synthesize authorizeEndPointWithAuthorizeAllowed=_authorizeEndPointWithAuthorizeAllowed - In the implementation block
@property (assign) BOOL signAllowed;                                        //@synthesize signAllowed=_signAllowed - In the implementation block
@property (assign) BOOL exportEraseConfidentialMailBox;                     //@synthesize exportEraseConfidentialMailBox=_exportEraseConfidentialMailBox - In the implementation block
@property (assign) BOOL confidentialDataAllowed;                            //@synthesize confidentialDataAllowed=_confidentialDataAllowed - In the implementation block
@property (assign) unsigned short lengthConfidentialMailBox;                //@synthesize lengthConfidentialMailBox=_lengthConfidentialMailBox - In the implementation block
@property (assign) unsigned short offsetConfidentialMailBox;                //@synthesize offsetConfidentialMailBox=_offsetConfidentialMailBox - In the implementation block
@property (assign) unsigned short lengthPrivateMailBox;                     //@synthesize lengthPrivateMailBox=_lengthPrivateMailBox - In the implementation block
@property (assign) unsigned short offsetPrivateMailBox;                     //@synthesize offsetPrivateMailBox=_offsetPrivateMailBox - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)configurationWithOpt1:(unsigned char)arg1 opt2:(unsigned char)arg2 ;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabledOnWire:(BOOL)arg1 ;
-(void)setEnabledOnContactless:(BOOL)arg1 ;
-(void)setStandardFlowAllowedOnWire:(BOOL)arg1 ;
-(void)setStandardFlowAllowedOnContactless:(BOOL)arg1 ;
-(void)setFastFlowAllowedOnWire:(BOOL)arg1 ;
-(void)setFastFlowAllowedOnContactless:(BOOL)arg1 ;
-(void)setExchangeAllowedOnWire:(BOOL)arg1 ;
-(void)setExchangeAllowedInFastFlow:(BOOL)arg1 ;
-(void)setAuthorizeEndPointAllowed:(BOOL)arg1 ;
-(void)setAuthorizeEndPointWithAuthorizeAllowed:(BOOL)arg1 ;
-(void)setSignAllowed:(BOOL)arg1 ;
-(void)setExportEraseConfidentialMailBox:(BOOL)arg1 ;
-(void)setConfidentialDataAllowed:(BOOL)arg1 ;
-(void)setLengthConfidentialMailBox:(unsigned short)arg1 ;
-(void)setOffsetConfidentialMailBox:(unsigned short)arg1 ;
-(void)setLengthPrivateMailBox:(unsigned short)arg1 ;
-(void)setOffsetPrivateMailBox:(unsigned short)arg1 ;
-(unsigned char)opt1;
-(unsigned char)opt2;
-(BOOL)enabledOnWire;
-(BOOL)enabledOnContactless;
-(BOOL)standardFlowAllowedOnWire;
-(BOOL)standardFlowAllowedOnContactless;
-(BOOL)fastFlowAllowedOnWire;
-(BOOL)fastFlowAllowedOnContactless;
-(BOOL)exchangeAllowedOnWire;
-(BOOL)exchangeAllowedInFastFlow;
-(BOOL)authorizeEndPointAllowed;
-(BOOL)authorizeEndPointWithAuthorizeAllowed;
-(BOOL)signAllowed;
-(BOOL)exportEraseConfidentialMailBox;
-(BOOL)confidentialDataAllowed;
-(unsigned short)lengthConfidentialMailBox;
-(unsigned short)offsetConfidentialMailBox;
-(unsigned short)lengthPrivateMailBox;
-(unsigned short)offsetPrivateMailBox;
@end


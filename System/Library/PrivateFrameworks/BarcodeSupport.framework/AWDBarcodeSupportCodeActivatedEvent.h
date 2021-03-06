/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BarcodeSupport/BarcodeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBarcodeSupportCodeActivatedEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _appLinkActivationOpenStrategy;
	int _barcodeDataType;
	int _barcodeSourceType;
	int _barcodeURLType;
	int _clientType;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasClientType; 
@property (assign,nonatomic) int clientType;                                     //@synthesize clientType=_clientType - In the implementation block
@property (assign,nonatomic) BOOL hasBarcodeDataType; 
@property (assign,nonatomic) int barcodeDataType;                                //@synthesize barcodeDataType=_barcodeDataType - In the implementation block
@property (assign,nonatomic) BOOL hasBarcodeURLType; 
@property (assign,nonatomic) int barcodeURLType;                                 //@synthesize barcodeURLType=_barcodeURLType - In the implementation block
@property (assign,nonatomic) BOOL hasAppLinkActivationOpenStrategy; 
@property (assign,nonatomic) int appLinkActivationOpenStrategy;                  //@synthesize appLinkActivationOpenStrategy=_appLinkActivationOpenStrategy - In the implementation block
@property (assign,nonatomic) BOOL hasBarcodeSourceType; 
@property (assign,nonatomic) int barcodeSourceType;                              //@synthesize barcodeSourceType=_barcodeSourceType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)clientType;
-(void)setClientType:(int)arg1 ;
-(void)setHasClientType:(BOOL)arg1 ;
-(BOOL)hasClientType;
-(id)clientTypeAsString:(int)arg1 ;
-(int)StringAsClientType:(id)arg1 ;
-(int)barcodeDataType;
-(void)setBarcodeDataType:(int)arg1 ;
-(void)setHasBarcodeDataType:(BOOL)arg1 ;
-(BOOL)hasBarcodeDataType;
-(id)barcodeDataTypeAsString:(int)arg1 ;
-(int)StringAsBarcodeDataType:(id)arg1 ;
-(int)barcodeURLType;
-(void)setBarcodeURLType:(int)arg1 ;
-(void)setHasBarcodeURLType:(BOOL)arg1 ;
-(BOOL)hasBarcodeURLType;
-(id)barcodeURLTypeAsString:(int)arg1 ;
-(int)StringAsBarcodeURLType:(id)arg1 ;
-(int)appLinkActivationOpenStrategy;
-(void)setAppLinkActivationOpenStrategy:(int)arg1 ;
-(void)setHasAppLinkActivationOpenStrategy:(BOOL)arg1 ;
-(BOOL)hasAppLinkActivationOpenStrategy;
-(id)appLinkActivationOpenStrategyAsString:(int)arg1 ;
-(int)StringAsAppLinkActivationOpenStrategy:(id)arg1 ;
-(int)barcodeSourceType;
-(void)setBarcodeSourceType:(int)arg1 ;
-(void)setHasBarcodeSourceType:(BOOL)arg1 ;
-(BOOL)hasBarcodeSourceType;
-(id)barcodeSourceTypeAsString:(int)arg1 ;
-(int)StringAsBarcodeSourceType:(id)arg1 ;
@end


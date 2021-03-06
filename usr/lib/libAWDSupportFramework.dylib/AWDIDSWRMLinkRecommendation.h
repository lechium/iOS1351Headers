/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIDSWRMLinkRecommendation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _infraWiFiState;
	unsigned _magnetState;
	unsigned _primaryLinkType;
	unsigned _recommendedLinkType;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRecommendedLinkType; 
@property (assign,nonatomic) unsigned recommendedLinkType;              //@synthesize recommendedLinkType=_recommendedLinkType - In the implementation block
@property (assign,nonatomic) BOOL hasPrimaryLinkType; 
@property (assign,nonatomic) unsigned primaryLinkType;                  //@synthesize primaryLinkType=_primaryLinkType - In the implementation block
@property (assign,nonatomic) BOOL hasMagnetState; 
@property (assign,nonatomic) unsigned magnetState;                      //@synthesize magnetState=_magnetState - In the implementation block
@property (assign,nonatomic) BOOL hasInfraWiFiState; 
@property (assign,nonatomic) unsigned infraWiFiState;                   //@synthesize infraWiFiState=_infraWiFiState - In the implementation block
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
-(unsigned)recommendedLinkType;
-(void)setRecommendedLinkType:(unsigned)arg1 ;
-(void)setHasRecommendedLinkType:(BOOL)arg1 ;
-(BOOL)hasRecommendedLinkType;
-(void)setPrimaryLinkType:(unsigned)arg1 ;
-(void)setHasPrimaryLinkType:(BOOL)arg1 ;
-(BOOL)hasPrimaryLinkType;
-(void)setMagnetState:(unsigned)arg1 ;
-(void)setHasMagnetState:(BOOL)arg1 ;
-(BOOL)hasMagnetState;
-(void)setInfraWiFiState:(unsigned)arg1 ;
-(void)setHasInfraWiFiState:(BOOL)arg1 ;
-(BOOL)hasInfraWiFiState;
-(unsigned)primaryLinkType;
-(unsigned)magnetState;
-(unsigned)infraWiFiState;
@end


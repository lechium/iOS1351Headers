/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BLTPBWillSendLightsAndSirensResponse : PBCodable <NSCopying> {

	unsigned _additionalWait;
	BOOL _willSend;
	SCD_Struct_BL3 _has;

}

@property (assign,nonatomic) BOOL hasWillSend; 
@property (assign,nonatomic) BOOL willSend;                        //@synthesize willSend=_willSend - In the implementation block
@property (assign,nonatomic) BOOL hasAdditionalWait; 
@property (assign,nonatomic) unsigned additionalWait;              //@synthesize additionalWait=_additionalWait - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setWillSend:(BOOL)arg1 ;
-(void)setAdditionalWait:(unsigned)arg1 ;
-(void)setHasWillSend:(BOOL)arg1 ;
-(BOOL)hasWillSend;
-(void)setHasAdditionalWait:(BOOL)arg1 ;
-(BOOL)hasAdditionalWait;
-(BOOL)willSend;
-(unsigned)additionalWait;
@end


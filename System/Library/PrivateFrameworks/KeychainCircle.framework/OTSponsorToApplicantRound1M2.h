/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OTSponsorToApplicantRound1M2 : PBCodable <NSCopying> {

	unsigned long long _epoch;
	SCD_Struct_OT2 _has;

}

@property (assign,nonatomic) BOOL hasEpoch; 
@property (assign,nonatomic) unsigned long long epoch;              //@synthesize epoch=_epoch - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)epoch;
-(void)setEpoch:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasEpoch;
-(void)setHasEpoch:(BOOL)arg1 ;
@end

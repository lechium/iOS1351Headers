/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBWidgetPersonalizationFeatureCTRPair : PBCodable <NSCopying> {

	float _ctr;
	NSString* _personalizationFeatureId;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasPersonalizationFeatureId; 
@property (nonatomic,retain) NSString * personalizationFeatureId;              //@synthesize personalizationFeatureId=_personalizationFeatureId - In the implementation block
@property (assign,nonatomic) BOOL hasCtr; 
@property (assign,nonatomic) float ctr;                                        //@synthesize ctr=_ctr - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPersonalizationFeatureId:(NSString *)arg1 ;
-(BOOL)hasPersonalizationFeatureId;
-(void)setCtr:(float)arg1 ;
-(void)setHasCtr:(BOOL)arg1 ;
-(BOOL)hasCtr;
-(NSString *)personalizationFeatureId;
-(float)ctr;
@end

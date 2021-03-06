/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WBSAnalyticsSafariVersioningEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _variant;
	NSString* _version;
	SCD_Struct_WB1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;                        //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasVariant; 
@property (assign,nonatomic) int variant;                               //@synthesize variant=_variant - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(NSString *)arg1 ;
-(unsigned long long)timestamp;
-(int)variant;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)setVariant:(int)arg1 ;
-(void)setHasVariant:(BOOL)arg1 ;
-(BOOL)hasVariant;
-(id)variantAsString:(int)arg1 ;
-(int)StringAsVariant:(id)arg1 ;
@end


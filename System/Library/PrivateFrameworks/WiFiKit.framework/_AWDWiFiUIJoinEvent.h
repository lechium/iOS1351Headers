/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WiFiKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface _AWDWiFiUIJoinEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _error;
	NSString* _process;
	NSString* _section;
	NSMutableArray* _sectionCounts;
	unsigned _securityType;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasProcess; 
@property (nonatomic,retain) NSString * process;                          //@synthesize process=_process - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                       //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) unsigned error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasSection; 
@property (nonatomic,retain) NSString * section;                          //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionCounts;              //@synthesize sectionCounts=_sectionCounts - In the implementation block
+(Class)sectionCountsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)error;
-(void)setError:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)process;
-(void)setSecurityType:(unsigned)arg1 ;
-(unsigned)securityType;
-(BOOL)hasError;
-(NSString *)section;
-(void)setSection:(NSString *)arg1 ;
-(void)setProcess:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(BOOL)hasSecurityType;
-(BOOL)hasProcess;
-(void)setHasError:(BOOL)arg1 ;
-(BOOL)hasSection;
-(NSMutableArray *)sectionCounts;
-(void)setSectionCounts:(NSMutableArray *)arg1 ;
-(void)addSectionCounts:(id)arg1 ;
-(unsigned long long)sectionCountsCount;
-(void)clearSectionCounts;
-(id)sectionCountsAtIndex:(unsigned long long)arg1 ;
@end

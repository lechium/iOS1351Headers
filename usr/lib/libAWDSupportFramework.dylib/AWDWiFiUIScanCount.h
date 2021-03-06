/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiFiUIScanCount : PBCodable <NSCopying> {

	unsigned _max;
	NSString* _section;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) BOOL hasSection; 
@property (nonatomic,retain) NSString * section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL hasMax; 
@property (assign,nonatomic) unsigned max;                    //@synthesize max=_max - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMax:(unsigned)arg1 ;
-(unsigned)max;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)section;
-(void)setSection:(NSString *)arg1 ;
-(void)setHasMax:(BOOL)arg1 ;
-(BOOL)hasMax;
-(BOOL)hasSection;
@end


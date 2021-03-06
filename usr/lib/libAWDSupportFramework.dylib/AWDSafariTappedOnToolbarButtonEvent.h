/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariTappedOnToolbarButtonEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _button;
	BOOL _usedLongTap;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasButton; 
@property (assign,nonatomic) int button;                                //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL hasUsedLongTap; 
@property (assign,nonatomic) BOOL usedLongTap;                          //@synthesize usedLongTap=_usedLongTap - In the implementation block
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
-(int)button;
-(void)setButton:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setUsedLongTap:(BOOL)arg1 ;
-(void)setHasButton:(BOOL)arg1 ;
-(BOOL)hasButton;
-(id)buttonAsString:(int)arg1 ;
-(int)StringAsButton:(id)arg1 ;
-(void)setHasUsedLongTap:(BOOL)arg1 ;
-(BOOL)hasUsedLongTap;
-(BOOL)usedLongTap;
@end


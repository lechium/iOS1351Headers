/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEORPNotification : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _localizedText;
	NSString* _localizedTitle;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_localizedText : 1;
		unsigned read_localizedTitle : 1;
		unsigned wrote_localizedText : 1;
		unsigned wrote_localizedTitle : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocalizedTitle; 
@property (nonatomic,retain) NSString * localizedTitle; 
@property (nonatomic,readonly) BOOL hasLocalizedText; 
@property (nonatomic,retain) NSString * localizedText; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readLocalizedText;
-(NSString *)localizedText;
-(void)setLocalizedText:(NSString *)arg1 ;
-(BOOL)hasLocalizedText;
-(void)_readLocalizedTitle;
-(BOOL)hasLocalizedTitle;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDPictureItemContainer, GEOPDTextItemContainer, NSString;

@interface GEOPDAnnotatedItemList : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDPictureItemContainer* _picItemContainer;
	GEOPDTextItemContainer* _textItemContainer;
	NSString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _annotatedItemStyle;
	struct {
		unsigned has_annotatedItemStyle : 1;
		unsigned read_unknownFields : 1;
		unsigned read_picItemContainer : 1;
		unsigned read_textItemContainer : 1;
		unsigned read_title : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_picItemContainer : 1;
		unsigned wrote_textItemContainer : 1;
		unsigned wrote_title : 1;
		unsigned wrote_annotatedItemStyle : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,readonly) BOOL hasPicItemContainer; 
@property (nonatomic,retain) GEOPDPictureItemContainer * picItemContainer; 
@property (nonatomic,readonly) BOOL hasTextItemContainer; 
@property (nonatomic,retain) GEOPDTextItemContainer * textItemContainer; 
@property (assign,nonatomic) BOOL hasAnnotatedItemStyle; 
@property (assign,nonatomic) int annotatedItemStyle; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)annotatedItemListForPlaceData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTitle;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readTitle;
-(GEOPDTextItemContainer *)textItemContainer;
-(int)annotatedItemStyle;
-(GEOPDPictureItemContainer *)picItemContainer;
-(void)_readPicItemContainer;
-(void)_readTextItemContainer;
-(void)setPicItemContainer:(GEOPDPictureItemContainer *)arg1 ;
-(void)setTextItemContainer:(GEOPDTextItemContainer *)arg1 ;
-(BOOL)hasPicItemContainer;
-(BOOL)hasTextItemContainer;
-(void)setAnnotatedItemStyle:(int)arg1 ;
-(void)setHasAnnotatedItemStyle:(BOOL)arg1 ;
-(BOOL)hasAnnotatedItemStyle;
-(id)annotatedItemStyleAsString:(int)arg1 ;
-(int)StringAsAnnotatedItemStyle:(id)arg1 ;
@end


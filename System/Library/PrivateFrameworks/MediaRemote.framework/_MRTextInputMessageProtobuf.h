/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MRTextInputMessageProtobuf : PBCodable <NSCopying> {

	double _timestamp;
	int _actionType;
	NSString* _text;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType;                  //@synthesize actionType=_actionType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasText;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)actionType;
-(void)setActionType:(int)arg1 ;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
@end


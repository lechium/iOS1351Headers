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

@class _MRTextEditingAttributesProtobuf, NSData;

@interface _MRKeyboardMessageProtobuf : PBCodable <NSCopying> {

	_MRTextEditingAttributesProtobuf* _attributes;
	NSData* _encryptedTextCyphertext;
	int _state;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasAttributes; 
@property (nonatomic,retain) _MRTextEditingAttributesProtobuf * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedTextCyphertext; 
@property (nonatomic,retain) NSData * encryptedTextCyphertext;                           //@synthesize encryptedTextCyphertext=_encryptedTextCyphertext - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_MRTextEditingAttributesProtobuf *)attributes;
-(id)dictionaryRepresentation;
-(int)state;
-(void)setAttributes:(_MRTextEditingAttributesProtobuf *)arg1 ;
-(void)setState:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasAttributes;
-(BOOL)hasState;
-(id)stateAsString:(int)arg1 ;
-(int)StringAsState:(id)arg1 ;
-(void)setHasState:(BOOL)arg1 ;
-(void)setEncryptedTextCyphertext:(NSData *)arg1 ;
-(BOOL)hasEncryptedTextCyphertext;
-(NSData *)encryptedTextCyphertext;
@end


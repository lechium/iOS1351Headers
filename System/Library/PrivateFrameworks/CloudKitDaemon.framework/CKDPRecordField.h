/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPRecordFieldIdentifier, CKDPRecordFieldValue;

@interface CKDPRecordField : PBCodable <NSCopying> {

	NSMutableArray* _actions;
	CKDPRecordFieldIdentifier* _identifier;
	CKDPRecordFieldValue* _value;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKDPRecordFieldValue * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;                            //@synthesize actions=_actions - In the implementation block
+(Class)actionType;
+(id)emptyFieldWithKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPRecordFieldIdentifier *)identifier;
-(CKDPRecordFieldValue *)value;
-(void)setValue:(CKDPRecordFieldValue *)arg1 ;
-(void)setIdentifier:(CKDPRecordFieldIdentifier *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addAction:(id)arg1 ;
-(NSMutableArray *)actions;
-(void)setActions:(NSMutableArray *)arg1 ;
-(BOOL)hasValue;
-(BOOL)hasIdentifier;
-(unsigned long long)actionsCount;
-(void)clearActions;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(id)actionAtIndex:(unsigned long long)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoPopToControllerType : PBCodable <NSCopying> {

	double _intendedFireDate;
	unsigned _controllerType;
	SCD_Struct_PB2 _has;

}

@property (assign,nonatomic) unsigned controllerType;               //@synthesize controllerType=_controllerType - In the implementation block
@property (assign,nonatomic) BOOL hasIntendedFireDate; 
@property (assign,nonatomic) double intendedFireDate;               //@synthesize intendedFireDate=_intendedFireDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIntendedFireDate:(double)arg1 ;
-(void)setHasIntendedFireDate:(BOOL)arg1 ;
-(BOOL)hasIntendedFireDate;
-(unsigned)controllerType;
-(void)setControllerType:(unsigned)arg1 ;
-(double)intendedFireDate;
@end

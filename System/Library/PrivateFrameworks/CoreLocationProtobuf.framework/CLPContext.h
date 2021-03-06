/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPContext : PBCodable <NSCopying> {

	NSString* _bundleCategory;
	int _type;
	int _workoutType;
	BOOL _isDriving;
	SCD_Struct_CL1 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasIsDriving; 
@property (assign,nonatomic) BOOL isDriving;                         //@synthesize isDriving=_isDriving - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutType; 
@property (assign,nonatomic) int workoutType;                        //@synthesize workoutType=_workoutType - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleCategory; 
@property (nonatomic,retain) NSString * bundleCategory;              //@synthesize bundleCategory=_bundleCategory - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)isDriving;
-(void)setWorkoutType:(int)arg1 ;
-(int)workoutType;
-(void)setBundleCategory:(NSString *)arg1 ;
-(void)setIsDriving:(BOOL)arg1 ;
-(void)setHasIsDriving:(BOOL)arg1 ;
-(BOOL)hasIsDriving;
-(void)setHasWorkoutType:(BOOL)arg1 ;
-(BOOL)hasWorkoutType;
-(BOOL)hasBundleCategory;
-(NSString *)bundleCategory;
@end


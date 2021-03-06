/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatVector, AWDProactiveModelFittingQuantizedSparseVector;

@interface AWDProactiveModelFittingLinRegObjectiveFeatures : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	float _featuresL2norm;
	float _featuresScaleFactor;
	AWDProactiveModelFittingMinibatchStats* _minibatchStats;
	AWDProactiveModelFittingModelInfo* _modelInfo;
	AWDProactiveModelFittingSparseFloatVector* _sparseFloatFeatures;
	AWDProactiveModelFittingQuantizedSparseVector* _sparseQuantizedFeatures;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasModelInfo; 
@property (nonatomic,retain) AWDProactiveModelFittingModelInfo * modelInfo;                                        //@synthesize modelInfo=_modelInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSparseFloatFeatures; 
@property (nonatomic,retain) AWDProactiveModelFittingSparseFloatVector * sparseFloatFeatures;                      //@synthesize sparseFloatFeatures=_sparseFloatFeatures - In the implementation block
@property (nonatomic,readonly) BOOL hasMinibatchStats; 
@property (nonatomic,retain) AWDProactiveModelFittingMinibatchStats * minibatchStats;                              //@synthesize minibatchStats=_minibatchStats - In the implementation block
@property (nonatomic,readonly) BOOL hasSparseQuantizedFeatures; 
@property (nonatomic,retain) AWDProactiveModelFittingQuantizedSparseVector * sparseQuantizedFeatures;              //@synthesize sparseQuantizedFeatures=_sparseQuantizedFeatures - In the implementation block
@property (assign,nonatomic) BOOL hasFeaturesScaleFactor; 
@property (assign,nonatomic) float featuresScaleFactor;                                                            //@synthesize featuresScaleFactor=_featuresScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL hasFeaturesL2norm; 
@property (assign,nonatomic) float featuresL2norm;                                                                 //@synthesize featuresL2norm=_featuresL2norm - In the implementation block
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
-(void)setModelInfo:(AWDProactiveModelFittingModelInfo *)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasModelInfo;
-(BOOL)hasMinibatchStats;
-(AWDProactiveModelFittingMinibatchStats *)minibatchStats;
-(void)setMinibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg1 ;
-(BOOL)hasSparseFloatFeatures;
-(BOOL)hasSparseQuantizedFeatures;
-(void)setFeaturesScaleFactor:(float)arg1 ;
-(void)setHasFeaturesScaleFactor:(BOOL)arg1 ;
-(BOOL)hasFeaturesScaleFactor;
-(void)setFeaturesL2norm:(float)arg1 ;
-(void)setHasFeaturesL2norm:(BOOL)arg1 ;
-(BOOL)hasFeaturesL2norm;
-(AWDProactiveModelFittingSparseFloatVector *)sparseFloatFeatures;
-(void)setSparseFloatFeatures:(AWDProactiveModelFittingSparseFloatVector *)arg1 ;
-(AWDProactiveModelFittingQuantizedSparseVector *)sparseQuantizedFeatures;
-(void)setSparseQuantizedFeatures:(AWDProactiveModelFittingQuantizedSparseVector *)arg1 ;
-(float)featuresScaleFactor;
-(float)featuresL2norm;
-(BOOL)hasObjectiveFeatures;
-(float)featuresValueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)featuresLength;
@end


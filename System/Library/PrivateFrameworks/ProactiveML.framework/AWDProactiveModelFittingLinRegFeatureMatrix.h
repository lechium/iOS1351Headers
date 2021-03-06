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

@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatMatrix, AWDProactiveModelFittingQuantizedSparseMatrix;

@interface AWDProactiveModelFittingLinRegFeatureMatrix : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	float _featureMatrixL2norm;
	float _featureMatrixScaleFactor;
	AWDProactiveModelFittingMinibatchStats* _minibatchStats;
	AWDProactiveModelFittingModelInfo* _modelInfo;
	AWDProactiveModelFittingSparseFloatMatrix* _sparseFloatFeatureMatrix;
	AWDProactiveModelFittingQuantizedSparseMatrix* _sparseQuantizedFeatureMatrix;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasModelInfo; 
@property (nonatomic,retain) AWDProactiveModelFittingModelInfo * modelInfo;                                             //@synthesize modelInfo=_modelInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSparseFloatFeatureMatrix; 
@property (nonatomic,retain) AWDProactiveModelFittingSparseFloatMatrix * sparseFloatFeatureMatrix;                      //@synthesize sparseFloatFeatureMatrix=_sparseFloatFeatureMatrix - In the implementation block
@property (nonatomic,readonly) BOOL hasMinibatchStats; 
@property (nonatomic,retain) AWDProactiveModelFittingMinibatchStats * minibatchStats;                                   //@synthesize minibatchStats=_minibatchStats - In the implementation block
@property (nonatomic,readonly) BOOL hasSparseQuantizedFeatureMatrix; 
@property (nonatomic,retain) AWDProactiveModelFittingQuantizedSparseMatrix * sparseQuantizedFeatureMatrix;              //@synthesize sparseQuantizedFeatureMatrix=_sparseQuantizedFeatureMatrix - In the implementation block
@property (assign,nonatomic) BOOL hasFeatureMatrixScaleFactor; 
@property (assign,nonatomic) float featureMatrixScaleFactor;                                                            //@synthesize featureMatrixScaleFactor=_featureMatrixScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL hasFeatureMatrixL2norm; 
@property (assign,nonatomic) float featureMatrixL2norm;                                                                 //@synthesize featureMatrixL2norm=_featureMatrixL2norm - In the implementation block
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
-(BOOL)hasSparseFloatFeatureMatrix;
-(BOOL)hasSparseQuantizedFeatureMatrix;
-(void)setFeatureMatrixScaleFactor:(float)arg1 ;
-(void)setHasFeatureMatrixScaleFactor:(BOOL)arg1 ;
-(BOOL)hasFeatureMatrixScaleFactor;
-(void)setFeatureMatrixL2norm:(float)arg1 ;
-(void)setHasFeatureMatrixL2norm:(BOOL)arg1 ;
-(BOOL)hasFeatureMatrixL2norm;
-(AWDProactiveModelFittingSparseFloatMatrix *)sparseFloatFeatureMatrix;
-(void)setSparseFloatFeatureMatrix:(AWDProactiveModelFittingSparseFloatMatrix *)arg1 ;
-(AWDProactiveModelFittingQuantizedSparseMatrix *)sparseQuantizedFeatureMatrix;
-(void)setSparseQuantizedFeatureMatrix:(AWDProactiveModelFittingQuantizedSparseMatrix *)arg1 ;
-(float)featureMatrixScaleFactor;
-(float)featureMatrixL2norm;
-(BOOL)hasFeatureMatrix;
-(float)featureMatrixValueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
@end


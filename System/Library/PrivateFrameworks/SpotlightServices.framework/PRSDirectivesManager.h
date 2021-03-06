/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SpotlightServices/SpotlightServices-Structs.h>
@class NSMutableIndexSet, NSMutableDictionary, PRSL2FeatureVectorProcessingContext;

@interface PRSDirectivesManager : NSObject {

	int indexOfAsIs;
	int indexOfAsIsRange;
	int indexOfReplaceIf;
	int indexOfReplaceThenMin;
	int indexOfIsPopulated;
	int indexOfIdMapping;
	int indexOfResultSetIdMapping;
	int indexOfResultSetIdScoreMapping;
	int indexOfValueIfNotExist;
	int indexOfOneSidedInverse;
	int indexOfQuantize;
	int indexOfFanOutValue;
	int sizeOfAsIs;
	int sizeOfAsIsRange;
	int sizeOfReplaceIf;
	int sizeOfReplaceThenMin;
	int sizeOfIsPopulated;
	int sizeOfIdMapping;
	int sizeOfResultSetIdMapping;
	int sizeOfResultSetIdScoreMapping;
	int sizeOfValueIfNotExist;
	int sizeOfOneSidedInverse;
	int sizeOfQuantize;
	int sizeOfFanOutValue;
	as_is* directive_as_is;
	as_is_range* directive_as_is_range;
	replace_if* directive_replace_if;
	replace_then_min* directive_replace_then_min;
	value_if_not_exist* directive_value_if_not_exist;
	is_populated* directive_is_populated;
	id_mapping* directive_id_mapping;
	resultset_id_mapping* directive_resultset_id_mapping;
	resultset_id_score_mapping* directive_resultset_id_score_mapping;
	one_sided_inverse* directive_one_sided_inverse;
	quantize* directive_quantize;
	fan_out_value* directive_fan_out;
	local_resultset_id_values_mapping* directive_local_resultset_id_values_mapping;
	parsec_resultset_id_values_mapping* directive_parsec_resultset_id_values_mapping;
	NSMutableIndexSet* disabledFeatureIndices;
	NSMutableDictionary* mapInflatedIndexToSize;
	PRSL2FeatureVectorProcessingContext* _processingContext;
	double _weightX;
	double _weightY;

}

@property (nonatomic,retain) PRSL2FeatureVectorProcessingContext * processingContext;              //@synthesize processingContext=_processingContext - In the implementation block
@property (assign,nonatomic) double weightX;                                                       //@synthesize weightX=_weightX - In the implementation block
@property (assign,nonatomic) double weightY;                                                       //@synthesize weightY=_weightY - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)cleanup;
-(unsigned long long)getDirectiveTypeFromString:(id)arg1 ;
-(void)setWeightX:(double)arg1 ;
-(void)setWeightY:(double)arg1 ;
-(void)setProcessingContext:(PRSL2FeatureVectorProcessingContext *)arg1 ;
-(PRSL2FeatureVectorProcessingContext *)processingContext;
-(void)getAllDirectivesArraysForTesting:(void*)arg1 ;
-(void)processDirectives:(id)arg1 ;
-(void)processResultSetValuesWithMap:(id)arg1 serverFeatures:(id)arg2 ;
-(void)processL2FeatureVector:(id)arg1 populatingValues:(float*)arg2 scoreValue:(char*)arg3 count:(int)arg4 ;
-(double)weightX;
-(double)weightY;
@end


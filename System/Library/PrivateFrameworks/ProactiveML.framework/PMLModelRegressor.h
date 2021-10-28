/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PMLDictionarySerializableProtocol.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class PMLDenseVector, NSString;

@interface PMLModelRegressor : NSObject <PMLDictionarySerializableProtocol, PMLPlistAndChunksSerializableProtocol> {

	PMLDenseVector* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int count; 
+(id)modelRegressorFromFloat:(float)arg1 ;
+(id)modelRegressorFromFloats:(id)arg1 ;
+(id)regressorVectorFrom:(id)arg1 ;
-(id)init;
-(int)count;
-(const float*)values;
-(id)toDictionary;
-(id)initFromDictionary:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1 ;
-(id)denseVector;
-(id)initModelRegressorFromFloats:(id)arg1 ;
-(id)initWithRegressorFromFloat:(float)arg1 ;
-(id)regressorFor:(int)arg1 ;
-(const float*)inverseValues;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@class NSData;

@interface PASNeuralNetwork : NSObject {

	NSData* _data;
	const char* _dataBytes;
	unsigned long long _nlayers;
	const SCD_Struct_PA9* _layers;

}

@property (nonatomic,readonly) unsigned long long inputSize; 
@property (nonatomic,readonly) unsigned long long outputSize; 
-(id)init;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)inputSize;
-(unsigned long long)outputSize;
-(double)predict:(const double*)arg1 ;
-(double)predict32:(const float*)arg1 ;
-(float*)_runOnInputs:(float*)arg1 freeInputsAfterUse:(BOOL)arg2 ;
-(double)_predict:(float*)arg1 freeInputsAfterUse:(BOOL)arg2 ;
-(void)forInputs:(const float*)arg1 computeOutputLayer:(float*)arg2 ;
@end


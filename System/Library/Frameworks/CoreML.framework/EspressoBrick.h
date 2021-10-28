/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EspressoBrick <NSObject>
@optional
-(void)setMappedWeights:(void*)arg1 sizeInBytes:(unsigned long long)arg2;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
-(void)encodeToMetalCommandBuffer:(id)arg1 inputTensors:(id)arg2 outputTensors:(id)arg3;
-(BOOL)hasDynamicOutputShape:(unsigned long long)arg1;
-(id)computeDynamicOutputShape:(id)arg1;

@required
-(id)initWithParameters:(id)arg1;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
-(BOOL)hasGPUSupport;

@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMDataRegressionModel.h>

@interface AXMDataRegressionModelLogarithmic : AXMDataRegressionModel
-(id)modelDescription;
-(/*^block*/id)modelFunction;
-(int)modelParameterCount;
-(void)getInitialParams:(double*)arg1 ;
-(id)partialDerivatives;
-(id)modelFunctionStringForParameters:(double*)arg1 significantFigures:(int)arg2 ;
@end


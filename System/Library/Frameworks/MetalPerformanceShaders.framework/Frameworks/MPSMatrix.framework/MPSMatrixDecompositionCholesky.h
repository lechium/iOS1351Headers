/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixDecompositionCholesky : MPSMatrixUnaryKernel {

	BOOL _lower;
	unsigned long long _order;

}

@property (nonatomic,readonly) BOOL lower;                            //@synthesize lower=_lower - In the implementation block
@property (nonatomic,readonly) unsigned long long order;              //@synthesize order=_order - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(unsigned long long)order;
-(BOOL)lower;
-(id)initWithDevice:(id)arg1 lower:(BOOL)arg2 order:(unsigned long long)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 resultMatrix:(id)arg3 status:(id)arg4 ;
@end


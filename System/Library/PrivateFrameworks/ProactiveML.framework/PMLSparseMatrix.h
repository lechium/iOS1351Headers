/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProactiveML/ProactiveML-Structs.h>
@interface PMLSparseMatrix : NSObject {

	BOOL _isSymmetric;
	sparse_m_floatRef _matrix;

}

@property (nonatomic,readonly) unsigned long long numberOfRows; 
@property (nonatomic,readonly) unsigned long long numberOfColumns; 
@property (assign,nonatomic) BOOL isSymmetric;                                  //@synthesize isSymmetric=_isSymmetric - In the implementation block
@property (assign,nonatomic) sparse_m_floatRef matrix;                          //@synthesize matrix=_matrix - In the implementation block
+(id)sparseMatrixWithNumberOfRows:(unsigned long long)arg1 numberOfColumns:(unsigned long long)arg2 ;
+(id)sparseMatrixFromNumbers:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(sparse_m_floatRef)matrix;
-(void)setMatrix:(sparse_m_floatRef)arg1 ;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(float)maxValue;
-(float)minValue;
-(void)enumerateNonZeroValuesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithSparseMatrix:(sparse_m_floatRef)arg1 ;
-(void)setIsSymmetric:(BOOL)arg1 ;
-(float)valueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
-(void)_enumerateSparseRowsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateNonZeroValuesForRow:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)matrixWithConstantColumn;
-(BOOL)isSymmetric;
@end


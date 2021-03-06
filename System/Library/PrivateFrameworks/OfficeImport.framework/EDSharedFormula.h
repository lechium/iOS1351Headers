/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDFormula.h>

@class EDReference;

@interface EDSharedFormula : EDFormula {

	BOOL _forceNonBaseFormula;
	int _rowBaseOrOffset;
	int _columnBaseOrOffset;
	unsigned long long _baseFormulaIndex;
	EDReference* _baseFormulaRange;

}

@property (assign,nonatomic) unsigned long long baseFormulaIndex;              //@synthesize baseFormulaIndex=_baseFormulaIndex - In the implementation block
@property (assign,nonatomic) BOOL forceNonBaseFormula;                         //@synthesize forceNonBaseFormula=_forceNonBaseFormula - In the implementation block
@property (assign,nonatomic) int rowBaseOrOffset;                              //@synthesize rowBaseOrOffset=_rowBaseOrOffset - In the implementation block
@property (assign,nonatomic) int columnBaseOrOffset;                           //@synthesize columnBaseOrOffset=_columnBaseOrOffset - In the implementation block
@property (nonatomic,readonly) EDReference * baseFormulaRange;                 //@synthesize baseFormulaRange=_baseFormulaRange - In the implementation block
-(id)init;
-(id)description;
-(void)setRowBaseOrOffset:(int)arg1 ;
-(void)setColumnBaseOrOffset:(int)arg1 ;
-(void)setBaseFormulaIndex:(unsigned long long)arg1 ;
-(id)initWithFormula:(id)arg1 ;
-(BOOL)isSharedFormula;
-(BOOL)isBaseFormula;
-(void)unarchiveFromData:(CFDataRef)arg1 offset:(unsigned long long*)arg2 ;
-(void)archiveByAppendingToMutableData:(CFDataRef)arg1 ;
-(int)rowBaseOrOffset;
-(int)columnBaseOrOffset;
-(unsigned long long)baseFormulaIndex;
-(BOOL)forceNonBaseFormula;
-(id)baseFormulaWithRowBlocks:(id)arg1 ;
-(BOOL)convertTokensToShared;
-(id)warningWithRowBlocks:(id)arg1 ;
-(void)setForceNonBaseFormula:(BOOL)arg1 ;
-(EDReference *)baseFormulaRange;
-(void)updateBaseFormulaRangeWithRow:(int)arg1 column:(int)arg2 ;
@end


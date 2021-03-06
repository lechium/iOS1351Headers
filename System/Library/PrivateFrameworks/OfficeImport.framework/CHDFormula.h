/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/EDFormula.h>

@class EDReferenceCollection, EDWorkbook;

@interface CHDFormula : EDFormula {

	EDReferenceCollection* mReferences;
	EDWorkbook* mWorkbook;

}
+(id)formulaWithReferences:(id)arg1 ;
+(id)formulaWithReference:(id)arg1 ;
-(id)initWithReference:(id)arg1 ;
-(id)references;
-(void)setReferences:(id)arg1 ;
-(void)setWorkbook:(id)arg1 ;
-(unsigned long long)countOfCellsBeingReferenced;
-(id)initWithReferences:(id)arg1 ;
-(id)referencesFromFormula;
-(BOOL)isConstantStringFormula;
-(id)constantValuesFromConstantStringFormula;
-(void)prepareTokens;
-(id)initWithWorkbook:(id)arg1 ;
@end


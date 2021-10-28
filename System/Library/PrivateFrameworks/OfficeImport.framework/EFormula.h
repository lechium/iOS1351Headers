/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EFHelper;
#import <OfficeImport/OfficeImport-Structs.h>
@class EDFormula, EFTableData, NSString;

@interface EFormula : NSObject {

	id<EFHelper> mHelper;
	EFLexer* mYylex;
	Class mFormulaClass;
	EDFormula* mFormula;
	EFTableData* mTableData;
	NSString* mErrMsg;

}
+(id)singletonEFormula;
+(id)stringToFormula:(id)arg1 formulaHelper:(id)arg2 formulaClass:(Class)arg3 ;
-(void)dealloc;
-(void)setTableData:(id)arg1 ;
-(id)tableData;
-(unsigned long long)resolveName:(const char*)arg1 ;
-(unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2 ;
-(void)setFormula:(id)arg1 ;
-(void)setFormulaClass:(Class)arg1 ;
-(void)setFormulaHelper:(id)arg1 ;
-(id)stringToTokens:(id)arg1 ;
-(id)formulaHelper;
-(Class)formulaClass;
-(unsigned long long)resolveSheet:(const char*)arg1 isCurrentSheet:(BOOL*)arg2 ;
-(id)resolveTable:(const char*)arg1 sheetIndex:(unsigned long long*)arg2 ;
@end

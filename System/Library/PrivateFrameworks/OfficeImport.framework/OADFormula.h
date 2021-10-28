/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OADFormula : NSObject {

	int mType;
	OADFormulaArg mArgs[3];
	NSString* mName;

}
-(id)description;
-(id)name;
-(int)type;
-(void)setName:(id)arg1 ;
-(OADFormulaArg)argAtIndex:(unsigned)arg1 ;
-(id)initWithType:(int)arg1 arg0:(OADFormulaArg)arg2 arg1:(OADFormulaArg)arg3 arg2:(OADFormulaArg)arg4 ;
@end

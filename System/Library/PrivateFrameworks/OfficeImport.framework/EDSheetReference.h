/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/EDReference.h>

@interface EDSheetReference : EDReference {

	unsigned long long mSheetIndex;

}
+(id)referenceWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)sheetIndex;
-(BOOL)fullyAdjacentToReference:(id)arg1 ;
-(void)unionWithReference:(id)arg1 ;
-(id)initWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5 ;
-(BOOL)isEqualToTableReference:(id)arg1 ;
-(BOOL)isSheedIndexValid;
@end


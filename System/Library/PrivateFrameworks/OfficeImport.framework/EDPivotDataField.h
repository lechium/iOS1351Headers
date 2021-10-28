/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface EDPivotDataField : NSObject {

	long long mBaseField;
	unsigned long long mBaseItem;
	unsigned long long mFieldId;
	unsigned long long mNumFmtId;
	NSString* mName;
	int mFormat;

}
+(id)pivotDataField;
-(id)init;
-(id)description;
-(id)name;
-(void)setName:(id)arg1 ;
-(unsigned long long)fieldId;
-(void)setFieldId:(unsigned long long)arg1 ;
-(unsigned long long)baseItem;
-(unsigned long long)numFmtId;
-(void)setNumFmtId:(unsigned long long)arg1 ;
-(long long)baseField;
-(void)setBaseField:(long long)arg1 ;
-(void)setBaseItem:(unsigned long long)arg1 ;
-(int)showDataAs;
-(void)setShowDataAs:(int)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/CMMapper.h>

@class EDColumnInfo;

@interface EMColumnInfoMapper : CMMapper {

	EDColumnInfo* edColumnInfo;
	double columnWidth;
	unsigned long long columnSpan;

}
-(double)columnWidth;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithEDColumnInfo:(id)arg1 maxSpan:(unsigned long long)arg2 parent:(id)arg3 ;
-(id)initWithDefaultWidth:(double)arg1 span:(unsigned long long)arg2 parent:(id)arg3 ;
@end

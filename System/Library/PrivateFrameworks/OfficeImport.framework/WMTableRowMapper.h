/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/CMMapper.h>

@class WDTableRow;

@interface WMTableRowMapper : CMMapper {

	WDTableRow* mWdTableRow;
	double mHeight;

}
+(BOOL)isTableRowDeleted:(id)arg1 ;
-(double)height;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDTableRow:(id)arg1 parent:(id)arg2 ;
-(void)setRowProperties:(id)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface EDTableFilter : NSObject {

	int mScale;
	int mOperator;
	double mValue;
	double mFilterValue;

}
+(id)edTableFilter;
-(id)description;
-(int)operatorType;
-(double)value;
-(void)setValue:(double)arg1 ;
-(int)scale;
-(void)setScale:(int)arg1 ;
-(void)setOperatorType:(int)arg1 ;
-(void)setFilterValue:(double)arg1 ;
-(double)filterValue;
@end


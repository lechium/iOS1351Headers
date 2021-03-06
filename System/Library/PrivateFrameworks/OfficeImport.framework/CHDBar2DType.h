/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/CHDChartTypeWithGrouping.h>

@interface CHDBar2DType : CHDChartTypeWithGrouping {

	int mGapWidth;
	BOOL mColumn;
	int mOverlap;

}
-(BOOL)isHorizontal;
-(BOOL)isColumn;
-(void)setOverlap:(int)arg1 ;
-(int)overlap;
-(void)setColumn:(BOOL)arg1 ;
-(id)initWithChart:(id)arg1 ;
-(void)setGapWidth:(int)arg1 ;
-(int)gapWidth;
-(int)defaultLabelPosition;
@end


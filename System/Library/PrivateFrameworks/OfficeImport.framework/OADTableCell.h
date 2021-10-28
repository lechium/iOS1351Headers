/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class OADTextBody, OADTableCellProperties;

@interface OADTableCell : NSObject {

	OADTextBody* mTextBody;
	OADTableCellProperties* mProperties;
	int mRowSpan;
	int mGridSpan;
	BOOL mHorzMerge;
	BOOL mVertMerge;
	int mTopRow;
	int mLeftColumn;

}
-(id)init;
-(id)description;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(BOOL)merge:(int)arg1 ;
-(int)rowSpan;
-(id)textBody;
-(void)setTextBody:(id)arg1 ;
-(void)setRowSpan:(int)arg1 ;
-(void)setTopRow:(int)arg1 ;
-(int)topRow;
-(BOOL)horzMerge;
-(BOOL)vertMerge;
-(int)gridSpan;
-(void)setGridSpan:(int)arg1 ;
-(void)setHorzMerge:(BOOL)arg1 ;
-(void)setVertMerge:(BOOL)arg1 ;
-(int)spanAlongDir:(int)arg1 ;
-(int)leftColumn;
-(void)setLeftColumn:(int)arg1 ;
@end

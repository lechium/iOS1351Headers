/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EDCollection, EDReference;

@interface EDPivotArea : NSObject {

	BOOL mGrandCol;
	BOOL mGrandRow;
	BOOL mOutline;
	int mType;
	EDCollection* mReferences;
	EDReference* mOffset;

}
+(id)pivotArea;
-(id)init;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setOffset:(id)arg1 ;
-(id)offset;
-(BOOL)outline;
-(void)setOutline:(BOOL)arg1 ;
-(id)references;
-(BOOL)grandRow;
-(void)setGrandRow:(BOOL)arg1 ;
-(BOOL)grandCol;
-(void)setGrandCol:(BOOL)arg1 ;
@end

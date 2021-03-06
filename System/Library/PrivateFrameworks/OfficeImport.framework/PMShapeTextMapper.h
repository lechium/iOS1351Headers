/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/CMMapper.h>

@class OADTextBody, OADOrientedBounds, CMStyle;

@interface PMShapeTextMapper : CMMapper {

	OADTextBody* mTextBody;
	OADOrientedBounds* mBounds;
	CMStyle* mStyle;
	BOOL mRectangular;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithOadTextBody:(id)arg1 bounds:(id)arg2 parent:(id)arg3 ;
-(unsigned char)textAnchor;
-(void)setRectangular:(BOOL)arg1 ;
-(BOOL)isTableCellContent;
@end


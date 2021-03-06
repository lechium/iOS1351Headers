/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADStyleMatrixReference, OADFontReference;

@interface OADShapeStyle : NSObject <NSCopying> {

	OADStyleMatrixReference* mLineReference;
	OADStyleMatrixReference* mFillReference;
	OADStyleMatrixReference* mEffectReference;
	OADFontReference* mFontReference;

}
+(id)defaultShapeStyle;
+(id)defaultOfficeShapeStyle;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2 ;
-(void)applyToTextBody:(id)arg1 ;
-(void)setLineReference:(id)arg1 ;
-(void)setFillReference:(id)arg1 ;
-(void)setEffectReference:(id)arg1 ;
-(void)setFontReference:(id)arg1 ;
-(void)applyToTextListStyle:(id)arg1 ;
-(void)applyToParagraphProperties:(id)arg1 ;
-(void)setLineMatrixIndex:(unsigned)arg1 color:(id)arg2 ;
-(void)setFillMatrixIndex:(unsigned)arg1 color:(id)arg2 ;
-(void)setEffectMatrixIndex:(unsigned)arg1 color:(id)arg2 ;
-(void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2 useNull:(BOOL)arg3 strokeWidthMultiplier:(float)arg4 ;
-(id)lineReference;
-(id)fillReference;
-(id)effectReference;
-(id)fontReference;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class OADGraphicProperties, EDCollection, EDResources, NSArray;

@interface CHDLegend : NSObject {

	int mLegendPosition;
	OADGraphicProperties* mGraphicProperties;
	unsigned long long mFontIndex;
	EDCollection* mLegendEntries;
	EDResources* mResources;
	BOOL mIsVertical;
	BOOL mIsOverlay;
	NSArray* mLabelEffects;

}
-(id)description;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setIsOverlay:(BOOL)arg1 ;
-(BOOL)isOverlay;
-(unsigned long long)fontIndex;
-(id)initWithResources:(id)arg1 ;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(id)graphicProperties;
-(int)legendPosition;
-(void)setLabelEffects:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setLegendPosition:(int)arg1 ;
-(void)setIsSingleColumnLegend:(BOOL)arg1 ;
-(id)labelEffects;
-(id)legendEntries;
-(BOOL)isSingleColumnLegend;
-(BOOL)isAutoSizeAndPosition;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
@class NFLFontCache, NSDictionary;

@interface NFLAbstractCellProperties : NSObject {

	NFLFontCache* _fontCache;
	double _scaleValue;
	long long _rowSpan;
	NSDictionary* _layout;
	NSDictionary* _columnIrrespectiveProperties;

}

@property (nonatomic,retain) NSDictionary * layout;                                    //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSDictionary * columnIrrespectiveProperties;              //@synthesize columnIrrespectiveProperties=_columnIrrespectiveProperties - In the implementation block
@property (nonatomic,retain) NFLFontCache * fontCache;                                 //@synthesize fontCache=_fontCache - In the implementation block
@property (assign,nonatomic) double scaleValue;                                        //@synthesize scaleValue=_scaleValue - In the implementation block
@property (nonatomic,readonly) long long rowSpan;                                      //@synthesize rowSpan=_rowSpan - In the implementation block
-(NSDictionary *)layout;
-(void)setLayout:(NSDictionary *)arg1 ;
-(double)scaleValue;
-(long long)rowSpan;
-(NFLFontCache *)fontCache;
-(id)initWithLayout:(id)arg1 columnIrrespectiveProperties:(id)arg2 fontCache:(id)arg3 scaleValue:(double)arg4 ;
-(CGSize)sizeForPropertyKey:(id)arg1 ;
-(id)numberForPropertyKey:(id)arg1 ;
-(id)numberForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1 ;
-(NSDictionary *)columnIrrespectiveProperties;
-(double)scaledValueForValue:(double)arg1 fontID:(id)arg2 ;
-(CGSize)scaledSizeForPropertyKey:(id)arg1 ;
-(id)scaledNumberForPropertyKey:(id)arg1 ;
-(id)scaledNumberForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1 ;
-(id)arrayForPropertyKey:(id)arg1 ;
-(id)dictionaryForPropertyKey:(id)arg1 columnSpan:(long long)arg2 ;
-(id)stringForPropertyKey:(id)arg1 ;
-(id)stringForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1 ;
-(double)fontWeightForFontID:(id)arg1 ;
-(BOOL)fontCondensedForFontID:(id)arg1 ;
-(double)scaledFontSizeForFontID:(id)arg1 ;
-(double)lineHeightForFont:(id)arg1 locale:(id)arg2 ;
-(void)setFontCache:(NFLFontCache *)arg1 ;
-(void)setScaleValue:(double)arg1 ;
-(void)setColumnIrrespectiveProperties:(NSDictionary *)arg1 ;
@end


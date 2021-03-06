/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CUINamedLookup.h>

@class NSString;

@interface CUITextStyle : CUINamedLookup {

	NSString* _fontName;
	double _fontSize;
	double _maxPointSize;
	double _minPointSize;
	long long _scalingStyle;
	long long _alignment;

}

@property (nonatomic,readonly) NSString * fontName;                 //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) double fontSize;                     //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,readonly) double maxPointSize;                 //@synthesize maxPointSize=_maxPointSize - In the implementation block
@property (nonatomic,readonly) double minPointSize;                 //@synthesize minPointSize=_minPointSize - In the implementation block
@property (nonatomic,readonly) long long scalingStyle;              //@synthesize scalingStyle=_scalingStyle - In the implementation block
@property (nonatomic,readonly) long long alignment;                 //@synthesize alignment=_alignment - In the implementation block
-(void)dealloc;
-(long long)alignment;
-(NSString *)fontName;
-(double)fontSize;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(long long)scalingStyle;
-(double)maxPointSize;
-(double)minPointSize;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NTPBTopStoriesStyleConfig, NSDictionary, NSString, FCColor;

@interface FCTopStoriesStyleConfiguration : NSObject {

	NTPBTopStoriesStyleConfig* _pbConfig;
	NSDictionary* _configDict;
	unsigned long long _storyType;
	NSString* _label;
	FCColor* _foreground_color;
	FCColor* _dark_style_foreground_color;
	FCColor* _background_color;
	FCColor* _dark_style_background_color;
	NSString* _stringType;

}

@property (nonatomic,readonly) unsigned long long storyType;                       //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,readonly) NSString * label;                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) FCColor * foreground_color;                         //@synthesize foreground_color=_foreground_color - In the implementation block
@property (nonatomic,readonly) FCColor * dark_style_foreground_color;              //@synthesize dark_style_foreground_color=_dark_style_foreground_color - In the implementation block
@property (nonatomic,readonly) FCColor * background_color;                         //@synthesize background_color=_background_color - In the implementation block
@property (nonatomic,readonly) FCColor * dark_style_background_color;              //@synthesize dark_style_background_color=_dark_style_background_color - In the implementation block
@property (nonatomic,readonly) NSString * stringType;                              //@synthesize stringType=_stringType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)label;
-(NSString *)stringType;
-(unsigned long long)storyType;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithPBTopStoriesStyleConfig:(id)arg1 ;
-(FCColor *)foreground_color;
-(FCColor *)dark_style_foreground_color;
-(FCColor *)background_color;
-(FCColor *)dark_style_background_color;
@end


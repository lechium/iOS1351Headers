/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, AVTCoreModelRowOptions, NSArray;

@interface AVTCoreModelColorPalette : NSObject {

	BOOL _alwaysShowExtended;
	NSString* _identifier;
	NSString* _title;
	AVTCoreModelRowOptions* _options;
	NSArray* _primaryColors;
	NSArray* _extendedColors;
	long long _colorCategory;

}

@property (nonatomic,copy,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) AVTCoreModelRowOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * primaryColors;                       //@synthesize primaryColors=_primaryColors - In the implementation block
@property (nonatomic,readonly) NSArray * extendedColors;                      //@synthesize extendedColors=_extendedColors - In the implementation block
@property (nonatomic,readonly) BOOL alwaysShowExtended;                       //@synthesize alwaysShowExtended=_alwaysShowExtended - In the implementation block
@property (nonatomic,readonly) long long colorCategory;                       //@synthesize colorCategory=_colorCategory - In the implementation block
-(id)description;
-(AVTCoreModelRowOptions *)options;
-(BOOL)isEmpty;
-(NSString *)identifier;
-(NSString *)title;
-(BOOL)alwaysShowExtended;
-(id)initWithTitle:(id)arg1 primaryColors:(id)arg2 extendedColors:(id)arg3 alwaysShowExtended:(BOOL)arg4 colorCategory:(long long)arg5 options:(id)arg6 ;
-(long long)colorCategory;
-(NSArray *)primaryColors;
-(NSArray *)extendedColors;
-(id)initWithTitle:(id)arg1 primaryColors:(id)arg2 extendedColors:(id)arg3 identifier:(id)arg4 alwaysShowExtended:(BOOL)arg5 colorCategory:(long long)arg6 options:(id)arg7 ;
@end


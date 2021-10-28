/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICoverSheetButton.h>

@class _UILegibilitySettings;

@interface CSQuickActionsButton : UICoverSheetButton {

	BOOL _permitted;
	long long _type;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL permitted;                                          //@synthesize permitted=_permitted - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(void)_updateStyle;
-(void)setSelected:(BOOL)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)_buttonImageNameForSelected:(BOOL)arg1 ;
-(id)_imageWithName:(id)arg1 ;
-(id)_accessoryTitleForType;
-(id)_statisticsIdentifierForType;
-(void)setPermitted:(BOOL)arg1 ;
-(BOOL)permitted;
@end

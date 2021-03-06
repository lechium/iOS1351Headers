/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/ControlCenter/Bundles/AppearanceModule.bundle/AppearanceModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUIKit/CCUIToggleModule.h>

@interface CCUIAppearanceModule : CCUIToggleModule
-(id)init;
-(void)dealloc;
-(BOOL)isSelected;
-(id)_timeFormatter;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateState;
-(id)glyphPackageDescription;
-(id)glyphState;
-(double)glyphScale;
-(void)_toggleStyleMode;
-(void)_styleModeDidChange;
-(id)_subtitleForUserInterfaceStyle:(long long)arg1 nextTransition:(id)arg2 ;
-(id)_timeStringForHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 ;
-(unsigned long long)_formattedHourForHour:(unsigned long long)arg1 ;
-(BOOL)_uses24HourTime;
-(void)_observeArbiterStyleChangeNotifications;
-(void)_unobserveArbiterStyleChangeNotifications;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>

@interface DBSExternalDisplayPreferencesController : PSListController
-(id)init;
-(void)dealloc;
-(void)viewDidLoad;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(id)valueForSpecifier:(id)arg1 ;
-(void)connectedDisplayDidUpdate:(id)arg1 ;
-(void)externalBrightnessDidUpdate:(id)arg1 ;
-(void)handleDBSExternalDisplayManagerExternalBrightnessAvailablityDidChangeNotification:(id)arg1 ;
-(void)handleDBSExternalDBSDisplayPreferencesControllerExternalDisplayManagerExternalAutoBrightnessAvailablityDidChangeNotification:(id)arg1 ;
-(void)handleDBSExternalDBSDisplayPreferencesControllerExternalDisplayManagerExternalAutoBrightnessValueDidChangeNotification:(id)arg1 ;
-(id)displayModeSpecifiers;
-(void)setMatchContentEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)matchContentEnabled:(id)arg1 ;
-(id)externalBrightnessSpecifiers;
-(void)setExternalBrightnessValue:(id)arg1 specifier:(id)arg2 ;
-(id)externalBrightnessValueForSpecifier:(id)arg1 ;
-(void)setExternalAutoBrightnessValue:(id)arg1 specifier:(id)arg2 ;
-(id)externalAutoBrightnessValueForSpecifier:(id)arg1 ;
-(void)insertExternalBrightnessSpecifiers;
-(void)removeExternalBrightnessSpecifiers;
@end

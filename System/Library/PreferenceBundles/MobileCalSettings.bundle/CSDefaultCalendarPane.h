/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileCalSettings/MobileCalSettings-Structs.h>
#import <Preferences/PSEditingPane.h>

@class EKEventStore, EKCalendarChooser;

@interface CSDefaultCalendarPane : PSEditingPane {

	EKEventStore* _store;
	EKCalendarChooser* _chooser;
	BOOL _dontSetDefaultCalendar;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)childViewControllerForHostingViewController;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(id)preferenceValue;
-(void)_updateCheckedCalendarForSource:(id)arg1 ;
-(BOOL)drawLabel;
@end


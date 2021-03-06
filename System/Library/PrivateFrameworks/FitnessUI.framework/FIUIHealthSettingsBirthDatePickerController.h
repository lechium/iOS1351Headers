/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FIUIHealthSettingsForceUpdatable.h>

@class FIUIHealthSettingsDatePicker, NSString;

@interface FIUIHealthSettingsBirthDatePickerController : NSObject <FIUIHealthSettingsForceUpdatable> {

	FIUIHealthSettingsDatePicker* _datePickerView;
	/*^block*/id _dateOfBirthUpdateHandler;

}

@property (nonatomic,retain) FIUIHealthSettingsDatePicker * datePickerView;              //@synthesize datePickerView=_datePickerView - In the implementation block
@property (nonatomic,copy) id dateOfBirthUpdateHandler;                                  //@synthesize dateOfBirthUpdateHandler=_dateOfBirthUpdateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)forceUpdate;
-(void)setDatePickerView:(FIUIHealthSettingsDatePicker *)arg1 ;
-(FIUIHealthSettingsDatePicker *)datePickerView;
-(void)setDateOfBirth:(id)arg1 ;
-(id)dateOfBirthUpdateHandler;
-(void)setDateOfBirthUpdateHandler:(id)arg1 ;
@end


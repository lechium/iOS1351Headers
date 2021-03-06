/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UITableViewDataSource.h>

@class FIUIHealthSettingsTableViewCell, FIActivitySettingsController, FIUIHealthSettingsBirthDatePickerController, FIUIHealthSettingsHeightPickerController, FIUIHealthSettingsWeightPickerController, FIUIHealthSettingsSexPickerController, FIUIHealthSettingsWheelchairUsePickerController, NSString;

@interface FIUIHealthSettingsDataSource : NSObject <UITableViewDataSource> {

	FIUIHealthSettingsTableViewCell* _birthDateCell;
	FIUIHealthSettingsTableViewCell* _biologicalSexCell;
	FIUIHealthSettingsTableViewCell* _heightCell;
	FIUIHealthSettingsTableViewCell* _weightCell;
	FIUIHealthSettingsTableViewCell* _wheelchairUseCell;
	FIActivitySettingsController* _preEditSettingsController;
	BOOL _showWheelchair;
	FIActivitySettingsController* _settingsController;
	FIUIHealthSettingsBirthDatePickerController* _birthDatePickerController;
	FIUIHealthSettingsHeightPickerController* _heightPickerController;
	FIUIHealthSettingsWeightPickerController* _weightPickerController;
	FIUIHealthSettingsSexPickerController* _sexPickerController;
	FIUIHealthSettingsWheelchairUsePickerController* _wheelchairUsePickerController;

}

@property (nonatomic,retain) FIActivitySettingsController * settingsController;                                            //@synthesize settingsController=_settingsController - In the implementation block
@property (nonatomic,retain) FIUIHealthSettingsBirthDatePickerController * birthDatePickerController;                      //@synthesize birthDatePickerController=_birthDatePickerController - In the implementation block
@property (nonatomic,retain) FIUIHealthSettingsHeightPickerController * heightPickerController;                            //@synthesize heightPickerController=_heightPickerController - In the implementation block
@property (nonatomic,retain) FIUIHealthSettingsWeightPickerController * weightPickerController;                            //@synthesize weightPickerController=_weightPickerController - In the implementation block
@property (nonatomic,retain) FIUIHealthSettingsSexPickerController * sexPickerController;                                  //@synthesize sexPickerController=_sexPickerController - In the implementation block
@property (nonatomic,retain) FIUIHealthSettingsWheelchairUsePickerController * wheelchairUsePickerController;              //@synthesize wheelchairUsePickerController=_wheelchairUsePickerController - In the implementation block
@property (nonatomic,readonly) FIActivitySettingsController * editedSettingsController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)startEditing;
-(FIActivitySettingsController *)settingsController;
-(void)setSettingsController:(FIActivitySettingsController *)arg1 ;
-(void)_updateCells;
-(FIUIHealthSettingsBirthDatePickerController *)birthDatePickerController;
-(void)_updateBirthDateCell;
-(FIUIHealthSettingsSexPickerController *)sexPickerController;
-(void)_updateBiologicalSexCell;
-(FIUIHealthSettingsHeightPickerController *)heightPickerController;
-(void)_updateHeightCell;
-(FIUIHealthSettingsWeightPickerController *)weightPickerController;
-(void)_updateWeightCell;
-(FIUIHealthSettingsWheelchairUsePickerController *)wheelchairUsePickerController;
-(void)_updateWheelchairUseCell;
-(id)birthDateCell;
-(id)biologicalSexCell;
-(id)heightCell;
-(id)weightCell;
-(id)wheelchairUseCell;
-(id)initWithActivitySettingsController:(id)arg1 showWheelchair:(BOOL)arg2 ;
-(void)cellDidBecomeFirstResponder:(id)arg1 ;
-(void)cellDidResignFirstResponder:(id)arg1 ;
-(void)endEditingAndDiscardChanges:(BOOL)arg1 ;
-(FIActivitySettingsController *)editedSettingsController;
-(void)setBirthDatePickerController:(FIUIHealthSettingsBirthDatePickerController *)arg1 ;
-(void)setHeightPickerController:(FIUIHealthSettingsHeightPickerController *)arg1 ;
-(void)setWeightPickerController:(FIUIHealthSettingsWeightPickerController *)arg1 ;
-(void)setSexPickerController:(FIUIHealthSettingsSexPickerController *)arg1 ;
-(void)setWheelchairUsePickerController:(FIUIHealthSettingsWheelchairUsePickerController *)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <libobjc.A.dylib/FIUIHealthSettingsForceUpdatable.h>

@class UIPickerView, NSString;

@interface FIUIHealthSettingsPickerController : NSObject <UIPickerViewDelegate, UIPickerViewDataSource, FIUIHealthSettingsForceUpdatable> {

	BOOL _isMetricLocale;
	UIPickerView* _pickerView;

}

@property (nonatomic,retain) UIPickerView * pickerView;              //@synthesize pickerView=_pickerView - In the implementation block
@property (assign,nonatomic) BOOL isMetricLocale;                    //@synthesize isMetricLocale=_isMetricLocale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)forceUpdate;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(UIPickerView *)pickerView;
-(void)setPickerView:(UIPickerView *)arg1 ;
-(BOOL)isMetricLocale;
-(void)setIsMetricLocale:(BOOL)arg1 ;
@end


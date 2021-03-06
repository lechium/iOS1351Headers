/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKInteractiveChartViewController.h>

@class UIColor;

@interface WDChartExperimentsMedicationDosage : HKInteractiveChartViewController {

	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)_parseDoseSpecifications:(id)arg1 ;
-(id)initMedicationName:(id)arg1 dosages:(id)arg2 profile:(id)arg3 color:(id)arg4 ;
-(id)initMedicationName:(id)arg1 specifications:(id)arg2 profile:(id)arg3 color:(id)arg4 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthToolbox/WDDisplayTypeAddDataViewController.h>

@class WDAddDataManualEntryItem;

@interface WDHeightAddDataViewController : WDDisplayTypeAddDataViewController {

	WDAddDataManualEntryItem* _heightPickerManualEntryItem;

}
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 ;
-(id)_feetUnitString;
-(id)_inchUnitString;
-(BOOL)_inputUnitIsFeetWithDisplayType:(id)arg1 unitController:(id)arg2 ;
-(id)createValueFieldManualEntryItem;
@end


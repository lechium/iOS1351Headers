/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeartRhythmUI/HRFeatureRegulatoryPanelViewController.h>

@class NSArray;

@interface HRElectrocardiogramRegulatoryPanelViewController : HRFeatureRegulatoryPanelViewController {

	NSArray* _displayableItems;
	long long _reenableFeatureSection;

}

@property (assign,nonatomic) long long reenableFeatureSection;              //@synthesize reenableFeatureSection=_reenableFeatureSection - In the implementation block
-(void)viewDidLoad;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)displayableItems;
-(void)receivedHeartRhythmAvailabilityNotification;
-(id)_displayableItemsForFeatureName;
-(id)_displayableItemsForPhone;
-(BOOL)_shouldDisplayItemsForWatch;
-(id)_displayableItemsForWatch;
-(id)_displayableItemsForInstructionManual;
-(void)setReenableFeatureSection:(long long)arg1 ;
-(id)_displayableItemsForReenableFeature;
-(id)_displayableItemsForContactSupport;
-(long long)reenableFeatureSection;
@end

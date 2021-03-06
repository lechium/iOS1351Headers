/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKDataMetadataSection.h>

@protocol HKHeartbeatSequenceListMetadataSectionDelegate;
@class HKHealthStore, HKDisplayTypeController, HKUnitPreferenceController, NSArray;

@interface HKHeartbeatSequenceListMetadataSection : HKDataMetadataSection {

	HKHealthStore* _healthStore;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitController;
	id<HKHeartbeatSequenceListMetadataSectionDelegate> _delegate;
	NSArray* _sequencesSamples;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                                     //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKDisplayTypeController * displayTypeController;                                 //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitController;                                     //@synthesize unitController=_unitController - In the implementation block
@property (assign,nonatomic,__weak) id<HKHeartbeatSequenceListMetadataSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * sequencesSamples;                                                      //@synthesize sequencesSamples=_sequencesSamples - In the implementation block
-(id<HKHeartbeatSequenceListMetadataSectionDelegate>)delegate;
-(void)setDelegate:(id<HKHeartbeatSequenceListMetadataSectionDelegate>)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)sectionTitle;
-(unsigned long long)numberOfRowsInSection;
-(HKUnitPreferenceController *)unitController;
-(HKDisplayTypeController *)displayTypeController;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithEvent:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 delegate:(id)arg5 ;
-(void)setDisplayTypeController:(HKDisplayTypeController *)arg1 ;
-(void)_startAssociatedSequenceQueryForEvent:(id)arg1 ;
-(void)setSequencesSamples:(NSArray *)arg1 ;
-(NSArray *)sequencesSamples;
@end


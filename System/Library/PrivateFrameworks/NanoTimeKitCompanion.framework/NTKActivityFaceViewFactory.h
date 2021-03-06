/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NTKUtilityComplicationFactoryDelegate.h>
#import <libobjc.A.dylib/NTKWellnessTimelineModelSubscriber.h>

@protocol OS_dispatch_source, NTKActivityFaceViewFactoryDelegate;
@class NTKWellnessEntryModel, NSObject, CLKDevice, NTKUtilityComplicationFactory, NSString;

@interface NTKActivityFaceViewFactory : NSObject <NTKUtilityComplicationFactoryDelegate, NTKWellnessTimelineModelSubscriber> {

	NTKWellnessEntryModel* _nowEntryModel;
	BOOL _wantsUpdateNowEntryModelNextLive;
	double _lastWristRaiseTime;
	double _wristRaiseTimoutDuration;
	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;
	BOOL _analog;
	BOOL _hasBeenLiveOrOnDeck;
	BOOL _isLoadingData;
	BOOL _showsCanonicalContent;
	BOOL _showsLockedContent;
	CLKDevice* _device;
	NTKUtilityComplicationFactory* _complicationFactory;
	id<NTKActivityFaceViewFactoryDelegate> _delegate;
	long long _dataMode;

}

@property (nonatomic,readonly) BOOL analog;                                                       //@synthesize analog=_analog - In the implementation block
@property (nonatomic,readonly) CLKDevice * device;                                                //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NTKUtilityComplicationFactory * complicationFactory;                 //@synthesize complicationFactory=_complicationFactory - In the implementation block
@property (assign,nonatomic) BOOL hasBeenLiveOrOnDeck;                                            //@synthesize hasBeenLiveOrOnDeck=_hasBeenLiveOrOnDeck - In the implementation block
@property (assign,nonatomic) BOOL isLoadingData;                                                  //@synthesize isLoadingData=_isLoadingData - In the implementation block
@property (assign,nonatomic) BOOL showsCanonicalContent;                                          //@synthesize showsCanonicalContent=_showsCanonicalContent - In the implementation block
@property (assign,nonatomic) BOOL showsLockedContent;                                             //@synthesize showsLockedContent=_showsLockedContent - In the implementation block
@property (assign,nonatomic,__weak) id<NTKActivityFaceViewFactoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long dataMode;                                                  //@synthesize dataMode=_dataMode - In the implementation block
@property (nonatomic,readonly) NTKWellnessEntryModel * currentEntryModel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)prelaunchApplicationIdentifiers;
+(id)userActiveEnergyUnit;
+(id)sharedRingsViewRenderer;
+(void)prewarmForDevice:(id)arg1 ;
+(BOOL)userActiveEnergyIsCalories;
-(void)dealloc;
-(id<NTKActivityFaceViewFactoryDelegate>)delegate;
-(void)setDelegate:(id<NTKActivityFaceViewFactoryDelegate>)arg1 ;
-(CLKDevice *)device;
-(long long)dataMode;
-(void)setDataMode:(long long)arg1 ;
-(long long)complicationPickerStyleForSlot:(id)arg1 ;
-(id)keylineViewForComplicationSlot:(id)arg1 ;
-(BOOL)showsCanonicalContent;
-(long long)_utilitySlotForSlot:(id)arg1 ;
-(void)prepareWristRaiseAnimation;
-(void)performWristRaiseAnimation;
-(long long)keylineStyleForComplicationSlot:(id)arg1 ;
-(id)curvedMaskForSlot:(id)arg1 ;
-(id)_utilityComplicationSlots;
-(double)_keylinePaddingForState:(long long)arg1 ;
-(double)_edgeGapForState:(long long)arg1 ;
-(double)_lisaGapForState:(long long)arg1 ;
-(BOOL)slotUsesCurvedText:(long long)arg1 ;
-(id)_colorComplicationSlots;
-(id)_slotForUtilitySlot:(long long)arg1 ;
-(id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1 ;
-(void)loadLayoutRulesForFaceView:(id)arg1 ;
-(id)_complicationSlots;
-(void)curvedCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(CGPoint*)arg4 interior:(BOOL*)arg5 forSlot:(id)arg6 ;
-(id)initForAnalog:(BOOL)arg1 forDevice:(id)arg2 ;
-(void)setShowsCanonicalContent:(BOOL)arg1 ;
-(void)launchActivityApp;
-(NTKWellnessEntryModel *)currentEntryModel;
-(NTKUtilityComplicationFactory *)complicationFactory;
-(id)faceView:(id)arg1 newLegacyViewForComplication:(id)arg2 family:(long long)arg3 slot:(id)arg4 ;
-(void)faceView:(id)arg1 configureComplicationView:(id)arg2 forSlot:(id)arg3 ;
-(long long)faceView:(id)arg1 legacyLayoutOverrideforComplicationType:(unsigned long long)arg2 slot:(id)arg3 ;
-(unsigned long long)faceView:(id)arg1 keylineLabelAlignmentForComplicationSlot:(id)arg2 ;
-(void)setShowsLockedContent:(BOOL)arg1 ;
-(double)faceView:(id)arg1 keylineCornerRadiusForComplicationSlot:(id)arg2 ;
-(id)_dateComplicationFontForStyle:(unsigned long long)arg1 ;
-(void)_configureComplicationFactory:(id)arg1 ;
-(void)_handleActiveEnergyUnitChange;
-(void)_loadCurrentEntryForce:(BOOL)arg1 ;
-(void)_updateRingsForCurrentEntryModelAnimated:(BOOL)arg1 ;
-(void)_loadCurrentEntry;
-(id)_canonicalEntryModel;
-(void)_resetWristRaiseAnimationTimeout;
-(BOOL)showsLockedContent;
-(BOOL)shouldPerformFromZeroWristRaise;
-(BOOL)_slotUsesCurvedText:(long long)arg1 ;
-(void)wellnessTimeLineModelCurrentEntryModelUpdated:(id)arg1 ;
-(id)debugStringForEntry:(id)arg1 ;
-(BOOL)analog;
-(void)setComplicationFactory:(NTKUtilityComplicationFactory *)arg1 ;
-(BOOL)hasBeenLiveOrOnDeck;
-(void)setHasBeenLiveOrOnDeck:(BOOL)arg1 ;
-(BOOL)isLoadingData;
-(void)setIsLoadingData:(BOOL)arg1 ;
@end


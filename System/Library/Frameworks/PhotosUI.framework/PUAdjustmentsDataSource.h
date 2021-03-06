/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PUAdjustmentsViewDataSource.h>

@protocol PUAdjustmentsDataSourceDelegate;
@class NSMutableArray, PICompositionController, PUAutoAdjustmentController, PUPhotoEditValuesCalculator, NSString;

@interface PUAdjustmentsDataSource : NSObject <PUAdjustmentsViewDataSource> {

	NSMutableArray* _adjustmentInfoSections;
	id<PUAdjustmentsDataSourceDelegate> _delegate;
	PICompositionController* _compositionController;
	PUAutoAdjustmentController* _autoEnhanceController;
	PUPhotoEditValuesCalculator* _valuesCalculator;
	unsigned long long _assetType;

}

@property (nonatomic,retain) NSMutableArray * adjustmentInfoSections;                          //@synthesize adjustmentInfoSections=_adjustmentInfoSections - In the implementation block
@property (nonatomic,retain) PICompositionController * compositionController;                  //@synthesize compositionController=_compositionController - In the implementation block
@property (nonatomic,retain) PUAutoAdjustmentController * autoEnhanceController;               //@synthesize autoEnhanceController=_autoEnhanceController - In the implementation block
@property (nonatomic,retain) PUPhotoEditValuesCalculator * valuesCalculator;                   //@synthesize valuesCalculator=_valuesCalculator - In the implementation block
@property (assign,nonatomic) unsigned long long assetType;                                     //@synthesize assetType=_assetType - In the implementation block
@property (assign,nonatomic,__weak) id<PUAdjustmentsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PUAdjustmentsDataSourceDelegate>)delegate;
-(void)setDelegate:(id<PUAdjustmentsDataSourceDelegate>)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(unsigned long long)assetType;
-(id)renderer;
-(void)setAssetType:(unsigned long long)arg1 ;
-(void)setCompositionController:(PICompositionController *)arg1 ;
-(PICompositionController *)compositionController;
-(PUPhotoEditValuesCalculator *)valuesCalculator;
-(void)_resetEnabledStateForAutoEnhancedInfos;
-(PUAutoAdjustmentController *)autoEnhanceController;
-(void)_modifyAdjustmentForInfo:(id)arg1 ;
-(BOOL)canModifyAdjustmentAtIndexPath:(id)arg1 ;
-(void)setAdjustmentEnabled:(BOOL)arg1 atIndexPath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)modifyValue:(double)arg1 atIndexPath:(id)arg2 ;
-(id)infoForItemAtIndexPath:(id)arg1 ;
-(void)resetInfoAtIndexPath:(id)arg1 ;
-(void)setupWithCompositionController:(id)arg1 valuesCalculator:(id)arg2 autoAdjustmentController:(id)arg3 assetType:(unsigned long long)arg4 ;
-(void)_setDefaultsForInfo:(id)arg1 ;
-(id)_newAdjustmentInfoWithIdentifier:(id)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3 attributeKey:(id)arg4 ;
-(id)_newAdjustmentInfoWithAdjustmentKey:(id)arg1 settingKey:(id)arg2 attributeKey:(id)arg3 ;
-(void)_createAdjustmentInfos;
-(id)_autoEnhanceAdjustmentInfo;
-(id)_lightAdjustmentInfos;
-(id)_colorAdjustmentInfos;
-(id)_detailAdjustmentInfos;
-(id)_vignetteAdjustmentInfos;
-(void)_enableNonAutoAjustments:(BOOL)arg1 ;
-(void)_updateAdjustmentInfos;
-(NSMutableArray *)adjustmentInfoSections;
-(void)compositionControllerDidChange;
-(void)setAdjustmentInfoSections:(NSMutableArray *)arg1 ;
-(void)setAutoEnhanceController:(PUAutoAdjustmentController *)arg1 ;
-(void)setValuesCalculator:(PUPhotoEditValuesCalculator *)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CFXEffectPickerViewDelegate.h>
#import <libobjc.A.dylib/CFXEffectPickerViewDataSource.h>
#import <libobjc.A.dylib/CFXFilterEffectPickerViewDataSource.h>
#import <libobjc.A.dylib/CFXFilterEffectPickerViewDelegate.h>
#import <libobjc.A.dylib/FunCamFilterPickerPresentationDelegate.h>

@protocol CFXEffectPickerViewControllerDelegate, OS_dispatch_queue;
@class UIImage, CFXEffectType, CFXEffectPickerView, NSArray, NSObject, NSString;

@interface CFXEffectPickerViewController : UIViewController <CFXEffectPickerViewDelegate, CFXEffectPickerViewDataSource, CFXFilterEffectPickerViewDataSource, CFXFilterEffectPickerViewDelegate, FunCamFilterPickerPresentationDelegate> {

	BOOL _previewing;
	UIImage* _previewBackgroundImage;
	CFXEffectType* _effectType;
	CFXEffectPickerView* _pickerView;
	id<CFXEffectPickerViewControllerDelegate> _delegate;
	NSArray* _effects;
	NSObject*<OS_dispatch_queue> _effectLoadingQueue;

}

@property (nonatomic,retain) NSArray * effects;                                                      //@synthesize effects=_effects - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> effectLoadingQueue;                        //@synthesize effectLoadingQueue=_effectLoadingQueue - In the implementation block
@property (nonatomic,retain) CFXEffectPickerView * pickerView;                                       //@synthesize pickerView=_pickerView - In the implementation block
@property (assign,getter=isPreviewing,nonatomic) BOOL previewing;                                    //@synthesize previewing=_previewing - In the implementation block
@property (nonatomic,retain) UIImage * previewBackgroundImage;                                       //@synthesize previewBackgroundImage=_previewBackgroundImage - In the implementation block
@property (nonatomic,retain) CFXEffectType * effectType;                                             //@synthesize effectType=_effectType - In the implementation block
@property (assign,nonatomic,__weak) id<CFXEffectPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)effectPickerViewController;
-(id<CFXEffectPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CFXEffectPickerViewControllerDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(BOOL)isPreviewing;
-(CFXEffectPickerView *)pickerView;
-(void)setPickerView:(CFXEffectPickerView *)arg1 ;
-(CFXEffectType *)effectType;
-(void)setEffectType:(CFXEffectType *)arg1 ;
-(void)startPreviewing;
-(void)stopPreviewing;
-(void)setPreviewing:(BOOL)arg1 ;
-(BOOL)shouldRotateCellsForDeviceOrientation;
-(BOOL)shouldDisplayExpandedModeForFilterPickerView:(id)arg1 ;
-(unsigned long long)numberOfEffectsInPickerView:(id)arg1 ;
-(unsigned long long)effectPickerView:(id)arg1 indexForEffectID:(id)arg2 ;
-(unsigned long long)selectedFilterIndexForFilterPickerView:(id)arg1 ;
-(id)effectPickerView:(id)arg1 effectTitleAtIndex:(long long)arg2 ;
-(NSArray *)effects;
-(void)setEffects:(NSArray *)arg1 ;
-(UIImage *)previewBackgroundImage;
-(void)effectPickerView:(id)arg1 didPickEffectAtIndex:(long long)arg2 ;
-(id)effectPickerView:(id)arg1 effectIdentifierAtIndex:(long long)arg2 ;
-(void)effectPickerView:(id)arg1 effectAtIndex:(long long)arg2 forPreviewingAtSizeInPixels:(CGSize)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setPreviewBackgroundImage:(UIImage *)arg1 ;
-(void)setEffectLoadingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)CFX_restartPreviewing;
-(void)CFX_stopPreviewing;
-(void)CFX_loadEffectsForType:(id)arg1 ;
-(id)CFX_createPickerViewForEffectType:(id)arg1 ;
-(unsigned long long)CFX_indexForEffectIdentifier:(id)arg1 ;
-(void)CFX_configureEffect:(id)arg1 previewSizeInPixels:(CGSize)arg2 ;
-(NSObject*<OS_dispatch_queue>)effectLoadingQueue;
-(void)filterPickerPresentationModeDidChange;
-(id)effectPickerView:(id)arg1 effectAtIndex:(long long)arg2 ;
@end


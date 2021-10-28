/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImagePickerController, WFCameraShutterButton, WFCameraFlashButton, UIView, UIButton, UILabel, WFVolumeButtonManager;

@interface WFCameraOverlayView : UIView {

	UIImagePickerController* _pickerController;
	WFCameraShutterButton* _shutterButton;
	long long _takenPhotos;
	long long _totalPhotos;
	WFCameraFlashButton* _flashButton;
	UIView* _flashView;
	UIButton* _flipButton;
	UILabel* _photosLabel;
	WFVolumeButtonManager* _volumeButtonManager;

}

@property (assign,nonatomic,__weak) WFCameraFlashButton * flashButton;                       //@synthesize flashButton=_flashButton - In the implementation block
@property (assign,nonatomic,__weak) UIView * flashView;                                      //@synthesize flashView=_flashView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * flipButton;                                   //@synthesize flipButton=_flipButton - In the implementation block
@property (assign,nonatomic,__weak) UILabel * photosLabel;                                   //@synthesize photosLabel=_photosLabel - In the implementation block
@property (nonatomic,retain) WFVolumeButtonManager * volumeButtonManager;                    //@synthesize volumeButtonManager=_volumeButtonManager - In the implementation block
@property (assign,nonatomic,__weak) UIImagePickerController * pickerController;              //@synthesize pickerController=_pickerController - In the implementation block
@property (assign,nonatomic,__weak) WFCameraShutterButton * shutterButton;                   //@synthesize shutterButton=_shutterButton - In the implementation block
@property (assign,nonatomic) long long takenPhotos;                                          //@synthesize takenPhotos=_takenPhotos - In the implementation block
@property (assign,nonatomic) long long totalPhotos;                                          //@synthesize totalPhotos=_totalPhotos - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)cancelPressed;
-(WFCameraShutterButton *)shutterButton;
-(void)setShutterButton:(WFCameraShutterButton *)arg1 ;
-(UIButton *)flipButton;
-(void)setFlipButton:(UIButton *)arg1 ;
-(void)setFlashButton:(WFCameraFlashButton *)arg1 ;
-(WFCameraFlashButton *)flashButton;
-(UILabel *)photosLabel;
-(UIView *)flashView;
-(void)setFlashView:(UIView *)arg1 ;
-(void)shutterPressed;
-(void)updatePhotosLabel;
-(void)setTakenPhotos:(long long)arg1 ;
-(void)setTotalPhotos:(long long)arg1 ;
-(void)flipPressed;
-(void)flashValueChanged;
-(void)setPickerController:(UIImagePickerController *)arg1 ;
-(void)updateFlipButton;
-(void)updateButtons;
-(UIImagePickerController *)pickerController;
-(long long)takenPhotos;
-(long long)totalPhotos;
-(void)setPhotosLabel:(UILabel *)arg1 ;
-(WFVolumeButtonManager *)volumeButtonManager;
-(void)setVolumeButtonManager:(WFVolumeButtonManager *)arg1 ;
@end

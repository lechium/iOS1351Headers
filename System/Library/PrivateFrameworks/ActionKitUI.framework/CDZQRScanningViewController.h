/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVCaptureMetadataOutputObjectsDelegate.h>

@class NSArray, AVCaptureSession, AVCaptureDevice, AVCaptureVideoPreviewLayer, UIButton, UILabel, NSString;

@interface CDZQRScanningViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate> {

	/*^block*/id _resultBlock;
	/*^block*/id _errorBlock;
	/*^block*/id _cancelBlock;
	NSArray* _metadataObjectTypes;
	AVCaptureSession* _avSession;
	AVCaptureDevice* _captureDevice;
	AVCaptureVideoPreviewLayer* _previewLayer;
	UIButton* _torchButton;
	UILabel* _cameraUnavailableLabel;
	NSString* _lastCapturedString;

}

@property (nonatomic,retain) AVCaptureSession * avSession;                           //@synthesize avSession=_avSession - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * captureDevice;                        //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * previewLayer;              //@synthesize previewLayer=_previewLayer - In the implementation block
@property (nonatomic,retain) UIButton * torchButton;                                 //@synthesize torchButton=_torchButton - In the implementation block
@property (assign,nonatomic,__weak) UILabel * cameraUnavailableLabel;                //@synthesize cameraUnavailableLabel=_cameraUnavailableLabel - In the implementation block
@property (nonatomic,copy) NSString * lastCapturedString;                            //@synthesize lastCapturedString=_lastCapturedString - In the implementation block
@property (nonatomic,retain) NSArray * metadataObjectTypes;                          //@synthesize metadataObjectTypes=_metadataObjectTypes - In the implementation block
@property (nonatomic,copy) id resultBlock;                                           //@synthesize resultBlock=_resultBlock - In the implementation block
@property (nonatomic,copy) id errorBlock;                                            //@synthesize errorBlock=_errorBlock - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                           //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)errorBlock;
-(void)setErrorBlock:(id)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
-(id)cancelBlock;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)sessionRuntimeError:(id)arg1 ;
-(NSArray *)metadataObjectTypes;
-(void)setMetadataObjectTypes:(NSArray *)arg1 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(AVCaptureDevice *)captureDevice;
-(void)setCaptureDevice:(AVCaptureDevice *)arg1 ;
-(id)resultBlock;
-(void)setResultBlock:(id)arg1 ;
-(void)sessionWasInterrupted:(id)arg1 ;
-(void)sessionInterruptionEnded:(id)arg1 ;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(void)setPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(void)turnTorchOn;
-(void)turnTorchOff;
-(UILabel *)cameraUnavailableLabel;
-(void)setCameraUnavailableLabel:(UILabel *)arg1 ;
-(id)initWithMetadataObjectTypes:(id)arg1 ;
-(void)setAvSession:(AVCaptureSession *)arg1 ;
-(void)cancelItemSelected:(id)arg1 ;
-(void)toggleTorch:(id)arg1 ;
-(void)handleFocusTap:(id)arg1 ;
-(AVCaptureSession *)avSession;
-(UIButton *)torchButton;
-(void)setTorchButton:(UIButton *)arg1 ;
-(NSString *)lastCapturedString;
-(void)setLastCapturedString:(NSString *)arg1 ;
@end


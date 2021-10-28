/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DSRemoteViewControllerInterface.h>

@protocol DSRemoteViewControllerDelegate;
@class DSResponder;

@interface DSRemoteViewController : _UIRemoteViewController <DSRemoteViewControllerInterface> {

	float _originalScreenBrightness;
	id<DSRemoteViewControllerDelegate> _delegate;
	DSResponder* _responder;

}

@property (nonatomic,retain) DSResponder * responder;                                         //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic) float originalScreenBrightness;                                  //@synthesize originalScreenBrightness=_originalScreenBrightness - In the implementation block
@property (assign,nonatomic,__weak) id<DSRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<DSRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<DSRemoteViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(DSResponder *)responder;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setResponder:(DSResponder *)arg1 ;
-(id)_stringForReason:(unsigned long long)arg1 ;
-(void)setOriginalScreenBrightness:(float)arg1 ;
-(id)_viewServiceInterface;
-(float)originalScreenBrightness;
-(void)viewServiceDidSuspend;
-(void)viewServiceDidFinishWithReason:(unsigned long long)arg1 ;
-(void)viewServiceDidEnableVolumeHUD:(BOOL)arg1 ;
-(void)viewServiceDidSetScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
-(void)requiredSerialNumbers:(id)arg1 ;
-(void)selectableSerialNumbers:(id)arg1 ;
-(void)sessionToken:(id)arg1 ;
@end

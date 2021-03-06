/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKStoreExtensionClientInterface.h>

@protocol SKStoreRemoteViewControllerDelegate;
@class NSString;

@interface SKStoreRemoteViewController : _UIRemoteViewController <SKStoreExtensionClientInterface> {

	id<SKStoreRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKStoreRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<SKStoreRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKStoreRemoteViewControllerDelegate>)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setNeedsTabSelection;
-(void)presentRequestedViewControllerWithIdentifier:(id)arg1 ;
@end


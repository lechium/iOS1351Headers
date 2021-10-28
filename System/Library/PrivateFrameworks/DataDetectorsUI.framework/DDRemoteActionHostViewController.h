/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>

@protocol DDRemoteActionHostViewControllerDelegate;
@interface DDRemoteActionHostViewController : _UIRemoteViewController {

	id<DDRemoteActionHostViewControllerDelegate> _delegate;

}

@property (__weak) id<DDRemoteActionHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<DDRemoteActionHostViewControllerDelegate>)delegate;
-(void)setDelegate:(id<DDRemoteActionHostViewControllerDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

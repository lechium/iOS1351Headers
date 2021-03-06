/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKCancelable.h>

@class PKPaymentProvisioningController, NSString;

@interface PKPaymentProvisioningTracker : NSObject <PKCancelable> {

	PKPaymentProvisioningController* _controller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
-(void)dealloc;
-(void)cancel;
-(BOOL)isCanceled;
-(id)initWithPaymentProvisioningController:(id)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKSubcredentialProvisioningOperation.h>

@class NSURL, PKAppletSubcredential;

@interface PKSubcredentialProvisioningDownloadPassOperation : PKSubcredentialProvisioningOperation {

	NSURL* _passURL;
	PKAppletSubcredential* _addedCredential;

}
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)performOperation;
-(void)performOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)configureExpressModeForPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updatePassMetadata:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)downloadPassAtURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end


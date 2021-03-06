/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKSubcredentialProvisioningPairingSessionOperation.h>

@class PKSubcredentialProvisioningDownloadPassOperation, PKSubcredentialProvisioningTrackCredentialOperation, NSError;

@interface PKSubcredentialProvisioningDownloadAndTrackCredentialOperation : PKSubcredentialProvisioningPairingSessionOperation {

	PKSubcredentialProvisioningDownloadPassOperation* _downloadOperation;
	PKSubcredentialProvisioningTrackCredentialOperation* _trackOperation;
	NSError* _downloadOperationError;
	NSError* _trackOperationError;

}
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)performOperation;
@end


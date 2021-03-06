/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSDownload.h>

@class ASDJob;

@interface SSSoftwareDownload : SSDownload {

	ASDJob* _job;

}

@property (nonatomic,readonly) ASDJob * job;              //@synthesize job=_job - In the implementation block
-(void)pause;
-(void)resume;
-(id)status;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(void)setStatus:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)assetsForType:(id)arg1 ;
-(id)failureError;
-(id)downloadPhaseIdentifier;
-(long long)bytesTotal;
-(long long)bytesDownloaded;
-(BOOL)addAsset:(id)arg1 forType:(id)arg2 ;
-(void)setDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithPersistentIdentifier:(long long)arg1 ;
-(double)percentComplete;
-(BOOL)removeAsset:(id)arg1 ;
-(id)initWithJob:(id)arg1 ;
-(ASDJob *)job;
-(long long)downloadSizeLimit;
-(void)setDownloadPolicy:(id)arg1 ;
-(id)downloadPolicy;
-(void)prioritizeAboveDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)restart;
-(void)_becomeManagedOnConnection:(id)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(void)setValuesWithStoreDownloadMetadata:(id)arg1 ;
-(id)backgroundNetworkingJobGroupName;
-(double)estimatedSecondsRemaining;
-(BOOL)isCancelable;
-(id)networkConstraints;
-(void)setBackgroundNetworkingJobGroupName:(id)arg1 ;
-(void)setNetworkConstraints:(id)arg1 ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLVideoResourceContext.h>
#import <libobjc.A.dylib/PLVideoChoosingAssetInformation.h>

@class NSManagedObjectContext, PLManagedAsset, NSString;

@interface PLVideoInternalResourceContext : NSObject <PLVideoResourceContext, PLVideoChoosingAssetInformation> {

	NSManagedObjectContext* _moc;
	PLManagedAsset* _asset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasAdjustments;
-(BOOL)isPhotoIris;
-(BOOL)shouldUseNonAdjustedVersion;
-(double)sizeThresholdForHighQuality;
-(id)videoResourcesMatchingVersions:(id)arg1 ;
-(id)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
-(BOOL)validateResource:(id)arg1 ;
-(void)repairResource:(id)arg1 ;
-(id)initWithManagedObjectContext:(id)arg1 assetObjectID:(id)arg2 ;
-(id)backingResourceForVideoResource:(id)arg1 ;
@end

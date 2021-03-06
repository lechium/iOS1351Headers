/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLPTPConversionSupport.h>

@class PHMediaFormatConversionManager, PFMediaCapabilities, NSString;

@interface PLPTPLegacyConversionSupport : NSObject <PLPTPConversionSupport> {

	PHMediaFormatConversionManager* _mediaFormatConversionManager;
	PFMediaCapabilities* _peerMediaCapabilities;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL penultimateIsPublic; 
@property (nonatomic,readonly) BOOL peerSupportsTranscodeChoice; 
@property (nonatomic,readonly) BOOL peerSupportsAdjustmentBaseResources; 
-(id)init;
-(id)conversionResultForAsset:(id)arg1 isVideo:(BOOL)arg2 isRender:(BOOL)arg3 forceLegacyConversion:(BOOL)arg4 ;
-(BOOL)penultimateIsPublic;
-(BOOL)peerSupportsTranscodeChoice;
-(BOOL)peerSupportsAdjustmentBaseResources;
@end


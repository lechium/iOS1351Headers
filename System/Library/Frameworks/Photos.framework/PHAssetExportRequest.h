/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol PHAssetExportRequestDelegate;
@class NSProgress, NSURL, PHAsset, NSDictionary, NSString;

@interface PHAssetExportRequest : NSObject <NSProgressReporting> {

	NSURL* _outputDirectory;
	PHAsset* _asset;
	NSProgress* _progress;
	unsigned long long _state;
	id<PHAssetExportRequestDelegate> _delegate;
	NSDictionary* _variants;

}

@property (nonatomic,readonly) PHAsset * asset;                                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                                       //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<PHAssetExportRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * variants;                                     //@synthesize variants=_variants - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportRequestForAsset:(id)arg1 error:(id*)arg2 ;
+(id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id*)arg3 ;
+(id)assetExportLog;
-(id)init;
-(NSString *)description;
-(id<PHAssetExportRequestDelegate>)delegate;
-(void)setDelegate:(id<PHAssetExportRequestDelegate>)arg1 ;
-(NSProgress *)progress;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(PHAsset *)asset;
-(id)initWithAsset:(id)arg1 variants:(id)arg2 ;
-(id)outputDirectory;
-(void)performCompletionWithFileURLs:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preflightExportWithOptions:(id)arg1 assetAvailability:(long long*)arg2 isProcessingRequired:(BOOL*)arg3 fileURLs:(id*)arg4 info:(id*)arg5 ;
-(void)exportWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)variants;
@end

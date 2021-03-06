/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NURenderJob.h>

@protocol NUPurgeableStorage, NUScalePolicy;
@class NUPurgeableStoragePool, NUImageHistogram, CIRenderTask;

@interface NUHistogramRenderJob : NURenderJob {

	NUPurgeableStoragePool* _storagePool;
	id<NUPurgeableStorage> _renderDestination;
	NUImageHistogram* _histogram;
	CIRenderTask* _renderTask;
	id<NUScalePolicy> _scalePolicy;

}
-(id)result;
-(id)cacheKey;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
-(BOOL)complete:(out id*)arg1 ;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithHistogramRequest:(id)arg1 ;
-(id)histogramRequest;
@end


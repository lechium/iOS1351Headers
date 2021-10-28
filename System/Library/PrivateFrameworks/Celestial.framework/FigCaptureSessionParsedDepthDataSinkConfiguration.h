/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FigDepthDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedDepthDataSinkConfiguration : NSObject {

	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	FigMetadataObjectCaptureConnectionConfiguration* _metadataObjectConnectionConfiguration;

}

@property (nonatomic,readonly) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;                        //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                            //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigMetadataObjectCaptureConnectionConfiguration * metadataObjectConnectionConfiguration;              //@synthesize metadataObjectConnectionConfiguration=_metadataObjectConnectionConfiguration - In the implementation block
-(void)dealloc;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(id)initWithDepthDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2 metadataObjectConnectionConfiguration:(id)arg3 ;
@end

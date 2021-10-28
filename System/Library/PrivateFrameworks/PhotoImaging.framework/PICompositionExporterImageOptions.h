/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NUImageExportFormat;

@interface PICompositionExporterImageOptions : PICompositionExporterOptions {

	BOOL _optimizeForSharing;
	NUImageExportFormat* _imageExportFormat;
	/*^block*/id _metadataProcessor;

}

@property (copy) NUImageExportFormat * imageExportFormat;              //@synthesize imageExportFormat=_imageExportFormat - In the implementation block
@property (copy) id metadataProcessor;                                 //@synthesize metadataProcessor=_metadataProcessor - In the implementation block
@property (assign) BOOL optimizeForSharing;                            //@synthesize optimizeForSharing=_optimizeForSharing - In the implementation block
-(void)setImageExportFormatJpegWithQuality:(double)arg1 ;
-(id)metadataProcessor;
-(void)setMetadataProcessor:(id)arg1 ;
-(id)imageExportFormatForURL:(id)arg1 ;
-(NUImageExportFormat *)imageExportFormat;
-(void)setImageExportFormat:(NUImageExportFormat *)arg1 ;
-(BOOL)optimizeForSharing;
-(void)setOptimizeForSharing:(BOOL)arg1 ;
@end

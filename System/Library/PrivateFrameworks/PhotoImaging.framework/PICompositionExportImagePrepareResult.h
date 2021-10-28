/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NUImageExportRequest;

@interface PICompositionExportImagePrepareResult : NSObject {

	NUImageExportRequest* _request;
	SCD_Struct_PI5 _inputSize;

}

@property (retain) NUImageExportRequest * request;              //@synthesize request=_request - In the implementation block
@property (assign) SCD_Struct_PI5 inputSize;                    //@synthesize inputSize=_inputSize - In the implementation block
-(SCD_Struct_PI5)inputSize;
-(void)setInputSize:(SCD_Struct_PI5)arg1 ;
-(void)setRequest:(NUImageExportRequest *)arg1 ;
-(NUImageExportRequest *)request;
@end

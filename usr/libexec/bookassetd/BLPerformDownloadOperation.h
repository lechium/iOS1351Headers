//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class BLDownloadPipeline, BLPrepareDownloadResponse;

__attribute__((visibility("hidden")))
@interface BLPerformDownloadOperation : ISOperation
{
    BLPrepareDownloadResponse *_response;	// 96 = 0x60
    BLDownloadPipeline *_pipeline;	// 104 = 0x68
    CDUnknownBlockType _downloadStartCompletionBlock;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000100027634
@property(copy, nonatomic) CDUnknownBlockType downloadStartCompletionBlock; // @synthesize downloadStartCompletionBlock=_downloadStartCompletionBlock;
@property(nonatomic) __weak BLDownloadPipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(retain, nonatomic) BLPrepareDownloadResponse *response; // @synthesize response=_response;
- (void)run;	// IMP=0x0000000100027570
- (id)initWithBLDownloadPipeline:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100027480

@end


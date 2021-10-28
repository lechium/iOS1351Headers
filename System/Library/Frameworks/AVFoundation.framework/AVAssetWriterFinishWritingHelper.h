/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFoundation/AVAssetWriterHelper.h>

@class NSArray, NSOperation;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {

	NSArray* _finishWritingOperations;
	NSOperation* _transitionToTerminalStatusOperation;

}

@property (nonatomic,readonly) NSOperation * transitionToTerminalStatusOperation;              //@synthesize transitionToTerminalStatusOperation=_transitionToTerminalStatusOperation - In the implementation block
-(void)dealloc;
-(long long)status;
-(void)cancelWriting;
-(id)initWithConfigurationState:(id)arg1 finishWritingOperations:(id)arg2 ;
-(NSOperation *)transitionToTerminalStatusOperation;
-(void)_finishWritingOperationsDidFinish;
@end

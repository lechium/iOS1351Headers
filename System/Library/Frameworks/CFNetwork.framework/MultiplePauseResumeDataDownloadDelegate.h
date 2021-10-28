/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface MultiplePauseResumeDataDownloadDelegate : NSObject <NSURLSessionDownloadDelegate, NSURLSessionDelegate> {

	BOOL _expectDirectory;
	BOOL _deleteTempFileOnce;
	BOOL _expectZeroOffestResume;
	long long _sizeOfEntity;
	NSObject*<OS_dispatch_semaphore> _wait;
	BOOL _retryingWithResumeData;
	BOOL _result;
	long long _totalBytesWritten;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
-(id)getWaiter;
-(id)initExpectingDirectory:(BOOL)arg1 deleteTempFileOnce:(BOOL)arg2 ;
-(long long)getSizeOfEntity;
-(BOOL)isExpectingDirectory;
-(BOOL)isRetryingWithResumeData;
-(BOOL)didTestPass;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSInputStream, NSOutputStream, NSError, NSString;

@interface myDelegatesForEventTest : NSObject <NSURLSessionTaskDelegate, NSStreamDelegate> {

	NSInputStream* _inStream;
	NSOutputStream* _outStream;
	NSError* _outputStreamError;
	NSError* _inputStreamError;
	BOOL _eventRec;

}

@property (retain) NSError * outputStreamError;                     //@synthesize outputStreamError=_outputStreamError - In the implementation block
@property (retain) NSError * inputStreamError;                      //@synthesize inputStreamError=_inputStreamError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4 ;
-(void)closeStreams;
-(NSError *)outputStreamError;
-(void)setOutputStreamError:(NSError *)arg1 ;
-(NSError *)inputStreamError;
-(void)setInputStreamError:(NSError *)arg1 ;
@end

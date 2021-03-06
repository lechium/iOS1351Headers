/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PipelineKit.framework/PipelineKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PipelineKit/PIURLSessionOperationSubclass.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSString;

@interface PIURLDataOperation : PIURLSessionOperationSubclass <NSURLSessionTaskDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operationWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)execute;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSArray;

@interface NSBlockOperation : NSOperation {

	NSMutableArray* _executionBlocks;
	/*^block*/id _block;

}

@property (copy,readonly) NSArray * executionBlocks; 
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)executionBlocks;
@end


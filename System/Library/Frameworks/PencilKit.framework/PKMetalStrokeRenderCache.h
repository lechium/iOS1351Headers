/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:58 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKStrokeRenderCache.h>

@class NSMutableArray, NSArray, NSString;

@interface PKMetalStrokeRenderCache : NSObject <PKStrokeRenderCache> {

	NSMutableArray* _buffers;
	unsigned long long _totalCost;

}

@property (nonatomic,readonly) NSArray * buffers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg1 ;
-(unsigned long long)inkVersion;
-(unsigned long long)cacheCost;
-(BOOL)needsCompute;
-(void)addBuffer:(id)arg1 ;
-(NSArray *)buffers;
@end


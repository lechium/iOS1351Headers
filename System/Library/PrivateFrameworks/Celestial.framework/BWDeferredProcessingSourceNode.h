/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSDictionary;

@interface BWDeferredProcessingSourceNode : BWSourceNode {

	NSMutableDictionary* _outputsByPortType;
	NSObject*<OS_dispatch_queue> _emitSamplesDispatchQueue;
	BOOL _running;

}

@property (nonatomic,readonly) NSDictionary * outputsByPortType;              //@synthesize outputsByPortType=_outputsByPortType - In the implementation block
+(void)initialize;
-(void)dealloc;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(id)outputForPortType:(id)arg1 ;
-(id)initWithPortTypes:(id)arg1 attributes:(id)arg2 ;
-(id)portTypeForOutput:(id)arg1 ;
-(void)processBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSDictionary *)outputsByPortType;
@end


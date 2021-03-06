/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTLSamplerStateSPI.h>

@protocol MTLDevice;
@class NSString;

@interface _MTLSamplerState : NSObject <MTLSamplerStateSPI> {

	id<MTLDevice> _device;
	NSString* _label;
	unsigned long long _resourceIndex;

}

@property (readonly) id<MTLDevice> device;                                  //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * label;                                      //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long resourceIndex;              //@synthesize resourceIndex=_resourceIndex - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)uniqueIdentifier;
-(id<MTLDevice>)device;
-(NSString *)label;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 samplerDescriptor:(id)arg2 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/MLWrappedModel.h>
#import <libobjc.A.dylib/MLWritable.h>

@class NSString;

@interface MLWritableWrappedModel : MLWrappedModel <MLWritable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wrapperAroundWritableModel:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
@end


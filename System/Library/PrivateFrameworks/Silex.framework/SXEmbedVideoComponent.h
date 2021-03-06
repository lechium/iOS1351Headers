/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXComponent.h>

@class NSURL, NSString;

@interface SXEmbedVideoComponent : SXComponent

@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * accessibilityCaption; 
+(id)typeString;
-(NSString *)accessibilityCaption;
-(NSString *)caption;
-(NSURL *)URL;
-(double)aspectRatio;
-(unsigned long long)traits;
@end


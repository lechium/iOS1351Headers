/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

@class NSString;

@interface ARDepthMapData : NSObject <ARResultData> {

	CGImageRef _depthMap;

}

@property (assign,nonatomic) CGImageRef depthMap;                   //@synthesize depthMap=_depthMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDepthMap:(CGImageRef)arg1 ;
-(CGImageRef)depthMap;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSDisplayConfigurationRequest.h>

@interface FBSMutableDisplayConfigurationRequest : FBSDisplayConfigurationRequest

@property (assign,nonatomic) long long overscanCompensation; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (assign,nonatomic) CGSize nativePixelSize; 
@property (assign,nonatomic) double refreshRate; 
@property (assign,nonatomic) long long hdrMode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOverscanCompensation:(long long)arg1 ;
-(void)setNativePixelSize:(CGSize)arg1 ;
-(void)setRefreshRate:(double)arg1 ;
-(void)setHdrMode:(long long)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
@end


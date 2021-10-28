/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSSiteMetadataRequest.h>

@class NSArray, NSString;

@interface WBSSVGImageRenderingRequest : WBSSiteMetadataRequest

@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,readonly) NSArray * urls; 
@property (nonatomic,readonly) NSString * svgContent; 
-(CGSize)imageSize;
-(NSArray *)urls;
-(id)initWithURL:(id)arg1 extraInfo:(id)arg2 ;
-(NSString *)svgContent;
-(id)_imageSizeValueWithSize:(CGSize)arg1 ;
-(id)initWithURL:(id)arg1 imageSize:(CGSize)arg2 ;
-(id)initWithURLs:(id)arg1 imageSize:(CGSize)arg2 ;
-(id)initWithSVGContent:(id)arg1 imageSize:(CGSize)arg2 ;
@end

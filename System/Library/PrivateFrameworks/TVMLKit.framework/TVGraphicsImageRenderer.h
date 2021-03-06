/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVMLKit/TVMLKit-Structs.h>
@interface TVGraphicsImageRenderer : NSObject
+(id)preferredFormat;
+(id)formatWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithSize:(CGSize)arg1 format:(id)arg2 actions:(/*^block*/id)arg3 ;
+(id)imageWithSize:(CGSize)arg1 format:(id)arg2 cgContextActions:(/*^block*/id)arg3 ;
+(id)formatWithUIImage:(id)arg1 ;
+(id)imageWithSize:(CGSize)arg1 alpha:(BOOL)arg2 actions:(/*^block*/id)arg3 ;
+(id)imageWithSize:(CGSize)arg1 alpha:(BOOL)arg2 cgContextActions:(/*^block*/id)arg3 ;
+(id)decodedImage:(id)arg1 opaque:(BOOL)arg2 ;
@end


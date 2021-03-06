/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, AVApplePortraitMetadata;

@interface PFCameraAdjustments : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _effectFilterName;
	NSString* _portraitEffectFilterName;
	AVApplePortraitMetadata* _portraitMetadata;
	BOOL _depthEnabled;
	CGRect _cropRect;

}

@property (nonatomic,copy,readonly) NSString * effectFilterName;                        //@synthesize effectFilterName=_effectFilterName - In the implementation block
@property (nonatomic,copy,readonly) NSString * portraitEffectFilterName;                //@synthesize portraitEffectFilterName=_portraitEffectFilterName - In the implementation block
@property (nonatomic,readonly) AVApplePortraitMetadata * portraitMetadata;              //@synthesize portraitMetadata=_portraitMetadata - In the implementation block
@property (getter=isDepthEnabled,nonatomic,readonly) BOOL depthEnabled;                 //@synthesize depthEnabled=_depthEnabled - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                                         //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) BOOL hasCrop; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)cropRect;
-(AVApplePortraitMetadata *)portraitMetadata;
-(BOOL)hasCrop;
-(BOOL)isDepthEnabled;
-(NSString *)portraitEffectFilterName;
-(NSString *)effectFilterName;
-(id)initWithAdjustments:(id)arg1 ;
@end


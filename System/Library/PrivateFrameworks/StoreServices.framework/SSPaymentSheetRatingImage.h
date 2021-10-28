/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:32 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSPaymentSheetRatingImage : NSObject <NSCopying> {

	CGImageRef _image;
	long long _ratingType;
	NSString* _urlString;
	NSString* _value;

}

@property (readonly) long long ratingType;                   //@synthesize ratingType=_ratingType - In the implementation block
@property (readonly) BOOL tint; 
@property (copy,readonly) NSString * urlString;              //@synthesize urlString=_urlString - In the implementation block
@property (copy,readonly) NSString * value;                  //@synthesize value=_value - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)value;
-(long long)ratingType;
-(NSString *)urlString;
-(id)initWithURLString:(id)arg1 ;
-(BOOL)tint;
-(long long)_ratingTypeForType:(id)arg1 ;
-(BOOL)isServerSupplied;
-(id)localAssetName;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
@end

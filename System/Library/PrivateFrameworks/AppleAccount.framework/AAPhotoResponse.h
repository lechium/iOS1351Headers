/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AAResponse.h>

@class NSData, NSValue, NSString;

@interface AAPhotoResponse : AAResponse {

	NSData* _photoData;
	NSValue* _cropRect;
	NSString* _serverCacheTag;

}

@property (nonatomic,readonly) NSData * photoData;                     //@synthesize photoData=_photoData - In the implementation block
@property (nonatomic,readonly) NSValue * cropRect;                     //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) NSString * serverCacheTag;              //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)serverCacheTag;
-(NSData *)photoData;
-(NSValue *)cropRect;
@end

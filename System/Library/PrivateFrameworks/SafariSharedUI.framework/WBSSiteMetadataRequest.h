/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary;

@interface WBSSiteMetadataRequest : NSObject <NSCopying> {

	NSURL* _url;
	NSDictionary* _extraInfo;

}

@property (nonatomic,readonly) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraInfo;              //@synthesize extraInfo=_extraInfo - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)url;
-(NSDictionary *)extraInfo;
-(id)initWithURL:(id)arg1 extraInfo:(id)arg2 ;
@end

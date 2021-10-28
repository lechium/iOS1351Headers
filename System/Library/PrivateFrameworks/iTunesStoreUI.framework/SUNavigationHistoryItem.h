/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SSURLRequestProperties;

@interface SUNavigationHistoryItem : NSObject <NSCopying> {

	NSString* _title;
	SSURLRequestProperties* _urlRequestProperties;

}

@property (nonatomic,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) SSURLRequestProperties * URLRequestProperties;              //@synthesize urlRequestProperties=_urlRequestProperties - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(SSURLRequestProperties *)URLRequestProperties;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData, NSDictionary;

@interface AFAudioPlaybackRequest : NSObject <NSCopying, NSSecureCoding> {

	float _volume;
	NSURL* _itemURL;
	NSData* _itemData;
	long long _numberOfLoops;
	double _fadeInDuration;
	double _fadeOutDuration;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSURL * itemURL;                      //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,copy,readonly) NSData * itemData;                    //@synthesize itemData=_itemData - In the implementation block
@property (nonatomic,readonly) long long numberOfLoops;                   //@synthesize numberOfLoops=_numberOfLoops - In the implementation block
@property (nonatomic,readonly) float volume;                              //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) double fadeInDuration;                     //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (nonatomic,readonly) double fadeOutDuration;                    //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)volume;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(long long)numberOfLoops;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSURL *)itemURL;
-(NSData *)itemData;
-(id)initWithItemURL:(id)arg1 itemData:(id)arg2 numberOfLoops:(long long)arg3 volume:(float)arg4 fadeInDuration:(double)arg5 fadeOutDuration:(double)arg6 userInfo:(id)arg7 ;
@end


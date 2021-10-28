/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMAssistantMessageAttributeOptions : NSObject {

	unsigned long long _attributes;

}

@property (nonatomic,readonly) BOOL includeRead; 
@property (nonatomic,readonly) BOOL includeUnread; 
@property (nonatomic,readonly) unsigned long long attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)optionsWithAttributes:(unsigned long long)arg1 ;
+(id)optionsWithAttributes:(unsigned long long)arg1 sanitizer:(id)arg2 ;
-(unsigned long long)attributes;
-(id)initWithAttributes:(unsigned long long)arg1 ;
-(id)initWithAttributes:(unsigned long long)arg1 sanitizer:(id)arg2 ;
-(BOOL)includeRead;
-(BOOL)includeUnread;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSSecureCoding;
@class SGDWorkQueueName, NSString, NSObject;

@interface SGDWorkQueueItem : NSObject {

	SGDWorkQueueName* _name;
	NSString* _filename;
	NSObject*<NSSecureCoding> _object;

}

@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) unsigned long long fails; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * queueId; 
-(void)dealloc;
-(id)description;
-(NSObject*<NSSecureCoding>)object;
-(unsigned long long)state;
-(void)finish;
-(void)markAsFailed;
-(id)initWithObject:(id)arg1 name:(id)arg2 dir:(id)arg3 ;
-(unsigned long long)fails;
-(NSString *)queueId;
@end

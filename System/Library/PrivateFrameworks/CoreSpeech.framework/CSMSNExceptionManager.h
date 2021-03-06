/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CSMSNExceptionManager : NSObject {

	NSMutableDictionary* _announceMessageExceptions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableDictionary * announceMessageExceptions;              //@synthesize announceMessageExceptions=_announceMessageExceptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)beginAnnounceMessageException:(id)arg1 reason:(id)arg2 ;
-(void)endAnnounceMessageException:(id)arg1 reason:(id)arg2 ;
-(NSMutableDictionary *)announceMessageExceptions;
-(void)setAnnounceMessageExceptions:(NSMutableDictionary *)arg1 ;
@end


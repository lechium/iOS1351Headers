/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ActivitySharingPlugin/ActivitySharingPlugin-Structs.h>
@class NSMutableDictionary;

@interface ASMessageQueue : NSObject {

	NSMutableDictionary* _identifierToMessageDictionary;
	CFStringRef _domainName;
	CFStringRef _queueName;

}
-(id)init;
-(void)dealloc;
-(id)initWithQueueName:(id)arg1 ;
-(void)_synchronizePreferences;
-(id)messageWithIdentifier:(id)arg1 ;
-(void)enumerateQueuedMessagesUsingBlock:(/*^block*/id)arg1 ;
-(void)setMessage:(id)arg1 identifier:(id)arg2 ;
-(void)removeMessageWithIdentifier:(id)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailCore/EmailCore-Structs.h>
#import <libobjc.A.dylib/ECServerMessageBuilder.h>
#import <libobjc.A.dylib/ECIMAPServerMessageBuilder.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSNumber, ECMessageFlags;

@interface ECServerMessage : NSObject <ECServerMessageBuilder, ECIMAPServerMessageBuilder, NSCopying> {

	NSNumber* _imapUID;
	NSString* _persistentID;
	NSString* _messagePersistentID;
	ECMessageFlags* _serverFlags;
	NSString* _remoteID;
	NSSet* _labels;

}

@property (nonatomic,retain) NSString * persistentID;                     //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,retain) NSString * messagePersistentID;              //@synthesize messagePersistentID=_messagePersistentID - In the implementation block
@property (nonatomic,retain) ECMessageFlags * serverFlags;                //@synthesize serverFlags=_serverFlags - In the implementation block
@property (nonatomic,copy) NSString * remoteID;                           //@synthesize remoteID=_remoteID - In the implementation block
@property (nonatomic,copy) NSSet * labels;                                //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) id remoteIDObject; 
@property (nonatomic,readonly) unsigned imapUID; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)labels;
-(void)setLabels:(NSSet *)arg1 ;
-(NSString *)persistentID;
-(void)setPersistentID:(NSString *)arg1 ;
-(NSString *)remoteID;
-(void)setRemoteID:(NSString *)arg1 ;
-(void)setMessagePersistentID:(NSString *)arg1 ;
-(id)initWithServerMessageBuilder:(/*^block*/id)arg1 ;
-(NSString *)messagePersistentID;
-(ECMessageFlags *)serverFlags;
-(void)setServerFlags:(ECMessageFlags *)arg1 ;
-(unsigned)imapUID;
-(void)setImapUID:(unsigned)arg1 ;
-(id)initWithIMAPServerMessageBuilder:(/*^block*/id)arg1 ;
-(id)remoteIDObject;
@end


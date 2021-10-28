/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface IMSPISuggestionsObject : NSObject {

	NSString* _chatGUID;
	NSString* _displayName;
	NSArray* _participants;

}

@property (readonly) NSString * chatGUID;                 //@synthesize chatGUID=_chatGUID - In the implementation block
@property (readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSArray * participants;              //@synthesize participants=_participants - In the implementation block
-(id)description;
-(NSString *)displayName;
-(NSArray *)participants;
-(NSString *)chatGUID;
-(id)initWithChatGuid:(id)arg1 displayName:(id)arg2 participants:(id)arg3 ;
@end

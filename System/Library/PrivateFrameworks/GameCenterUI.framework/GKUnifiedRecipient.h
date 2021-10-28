/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CNContact;

@interface GKUnifiedRecipient : NSObject {

	NSString* _fullName;
	NSString* _handle;
	NSString* _nickName;
	NSString* _label;
	CNContact* _contact;

}

@property (nonatomic,retain) NSString * fullName;              //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * handle;                //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSString * nickName;              //@synthesize nickName=_nickName - In the implementation block
@property (nonatomic,retain) NSString * label;                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
+(id)handleForContact:(id)arg1 ;
+(id)recipientForHandle:(id)arg1 ;
+(id)recipientForContact:(id)arg1 ;
-(NSString *)handle;
-(id)displayName;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)fullName;
-(void)setHandle:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)nickName;
-(void)setNickName:(NSString *)arg1 ;
@end

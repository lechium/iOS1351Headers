/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GKInviteInternal, GKPlayer, NSString, NSData;

@interface GKInvite : NSObject {

	BOOL _cancelled;
	GKInviteInternal* _internal;
	GKPlayer* _sender;

}

@property (retain) GKInviteInternal * internal;                              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) NSString * inviteID; 
@property (nonatomic,readonly) NSData * sessionToken; 
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) BOOL isNearby; 
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain,readonly) GKPlayer * sender;                     //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain,readonly) NSString * inviter; 
@property (getter=isHosted,nonatomic,readonly) BOOL hosted; 
@property (nonatomic,readonly) unsigned long long playerGroup; 
@property (nonatomic,readonly) unsigned playerAttributes; 
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)isCancelled;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKPlayer *)sender;
-(GKInviteInternal *)internal;
-(void)setInternal:(GKInviteInternal *)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(NSString *)inviter;
-(BOOL)isHosted;
@end


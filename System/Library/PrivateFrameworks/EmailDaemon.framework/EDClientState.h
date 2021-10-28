/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EDForegroundReporting.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSArray, NSString;

@interface EDClientState : NSObject <EDForegroundReporting, EFLoggable> {

	BOOL _isForeground;
	NSArray* _visibleMailboxesObjectIds;

}

@property (nonatomic,readonly) NSArray * visibleMailboxesObjectIds;              //@synthesize visibleMailboxesObjectIds=_visibleMailboxesObjectIds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isForeground;                                //@synthesize isForeground=_isForeground - In the implementation block
+(id)sharedInstance;
+(id)log;
-(id)init;
-(void)dealloc;
-(BOOL)isForeground;
-(void)setCurrentlyVisibleMailboxObjectIDs:(id)arg1 ;
-(void)setClientIsInForeground:(BOOL)arg1 ;
-(id)giveBoostWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSArray *)visibleMailboxesObjectIds;
@end

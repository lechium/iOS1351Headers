/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WBSParsecABGroupStoreClient.h>

@protocol WBSParsecABGroupStore;
@class NSTimer, NSString;

@interface WBSParsecABGroupManager : NSObject <WBSParsecABGroupStoreClient> {

	NSTimer* _shuffleTimer;
	id<WBSParsecABGroupStore> _groupStore;
	unsigned long long _groupIdentifier;

}

@property (nonatomic,readonly) id<WBSParsecABGroupStore> groupStore;              //@synthesize groupStore=_groupStore - In the implementation block
@property (nonatomic,readonly) unsigned long long groupIdentifier;                //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)ephemeralGroupIdentifier;
+(unsigned long long)_weightedRandomIdentifier;
-(unsigned long long)groupIdentifier;
-(void)abGroupStoreDidUpdateGroupIdentifier:(id)arg1 ;
-(void)_generateAndSaveNewGroupIdentifier;
-(void)shuffleGroup;
-(void)_scheduleShuffleTimer;
-(void)_postDidChangeGroupIdentifierNotification;
-(id)initWithGroupStore:(id)arg1 ;
-(id<WBSParsecABGroupStore>)groupStore;
@end


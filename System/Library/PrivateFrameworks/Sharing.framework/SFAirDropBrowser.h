/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SFAirDropBrowserDelegate, SFAirDropBrowserBatchDelegate, SFAirDropBrowserDiffableDelegate;
#import <Sharing/Sharing-Structs.h>
@class NSMutableDictionary, NSString, NSArray;

@interface SFAirDropBrowser : NSObject {

	SFBrowserRef _browser;
	NSMutableDictionary* _nodes;
	BOOL _shouldDeliverEmptyUpdates;
	NSString* _sessionID;
	NSArray* _people;
	id<SFAirDropBrowserDelegate> _delegate;
	id<SFAirDropBrowserBatchDelegate> _batchDelegate;
	NSString* _sendingAppBundleID;
	NSArray* _urlsBeingShared;
	NSArray* _photosAssetIDs;
	id<SFAirDropBrowserDiffableDelegate> _diffableDelegate;
	NSMutableDictionary* _nodeIDToNode;

}

@property (__weak) id<SFAirDropBrowserDiffableDelegate> diffableDelegate;              //@synthesize diffableDelegate=_diffableDelegate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * nodeIDToNode;                     //@synthesize nodeIDToNode=_nodeIDToNode - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                                       //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSArray * people;                                       //@synthesize people=_people - In the implementation block
@property (__weak) id<SFAirDropBrowserDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<SFAirDropBrowserBatchDelegate> batchDelegate;                    //@synthesize batchDelegate=_batchDelegate - In the implementation block
@property (nonatomic,copy) NSString * sendingAppBundleID;                              //@synthesize sendingAppBundleID=_sendingAppBundleID - In the implementation block
@property (nonatomic,copy) NSArray * urlsBeingShared;                                  //@synthesize urlsBeingShared=_urlsBeingShared - In the implementation block
@property (nonatomic,copy) NSArray * photosAssetIDs;                                   //@synthesize photosAssetIDs=_photosAssetIDs - In the implementation block
-(id)init;
-(void)dealloc;
-(id<SFAirDropBrowserDelegate>)delegate;
-(void)setDelegate:(id<SFAirDropBrowserDelegate>)arg1 ;
-(void)pause;
-(void)resume;
-(void)stop;
-(void)start;
-(NSArray *)people;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)updateDiscoveredPeople;
-(void)handleBrowserCallBack;
-(void)getChangedIndexesForClientPeopleList:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id<SFAirDropBrowserBatchDelegate>)batchDelegate;
-(void)setBatchDelegate:(id<SFAirDropBrowserBatchDelegate>)arg1 ;
-(NSString *)sendingAppBundleID;
-(void)setSendingAppBundleID:(NSString *)arg1 ;
-(NSArray *)urlsBeingShared;
-(void)setUrlsBeingShared:(NSArray *)arg1 ;
-(NSArray *)photosAssetIDs;
-(void)setPhotosAssetIDs:(NSArray *)arg1 ;
-(id<SFAirDropBrowserDiffableDelegate>)diffableDelegate;
-(void)setDiffableDelegate:(id<SFAirDropBrowserDiffableDelegate>)arg1 ;
-(NSMutableDictionary *)nodeIDToNode;
@end

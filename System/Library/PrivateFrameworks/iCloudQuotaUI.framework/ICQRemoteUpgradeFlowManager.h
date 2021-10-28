/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ICQUpgradeFlowManagerDelegate;
@class ICQOffer, ICQUpgradeFlowOptions, ICQRemoteContext;

@interface ICQRemoteUpgradeFlowManager : NSObject {

	ICQOffer* _offer;
	ICQUpgradeFlowOptions* _flowOptions;
	id<ICQUpgradeFlowManagerDelegate> _delegate;
	ICQRemoteContext* _remoteContext;

}

@property (nonatomic,retain) ICQRemoteContext * remoteContext;                               //@synthesize remoteContext=_remoteContext - In the implementation block
@property (nonatomic,retain) ICQOffer * offer;                                               //@synthesize offer=_offer - In the implementation block
@property (nonatomic,copy) ICQUpgradeFlowOptions * flowOptions;                              //@synthesize flowOptions=_flowOptions - In the implementation block
@property (assign,nonatomic,__weak) id<ICQUpgradeFlowManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
+(void)commonHeadersForRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)renewCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(id<ICQUpgradeFlowManagerDelegate>)delegate;
-(void)setDelegate:(id<ICQUpgradeFlowManagerDelegate>)arg1 ;
-(ICQRemoteContext *)remoteContext;
-(ICQOffer *)offer;
-(void)setOffer:(ICQOffer *)arg1 ;
-(void)setRemoteContext:(ICQRemoteContext *)arg1 ;
-(void)setFlowOptions:(ICQUpgradeFlowOptions *)arg1 ;
-(ICQUpgradeFlowOptions *)flowOptions;
-(void)beginRemoteFlow;
@end

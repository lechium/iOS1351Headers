/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet;

@interface BRButtonResolverController : NSObject {

	NSSet* _interfaces;

}

@property (nonatomic,readonly) BOOL isReady; 
@property (nonatomic,readonly) id propertyList; 
@property (nonatomic,readonly) unsigned long long maxAssetSlots; 
@property (nonatomic,readonly) unsigned long long unusedAssetSlots; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)propertyList;
-(BOOL)isReady;
-(unsigned long long)maxAssetSlots;
-(unsigned long long)unusedAssetSlots;
-(BOOL)setGlobalConfigs:(id)arg1 error:(id*)arg2 ;
-(BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4 ;
-(BOOL)enableStates:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)playState:(unsigned long long)arg1 forSpeed:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)scheduleReadyNotificationOnDispatchQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end


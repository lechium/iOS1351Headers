/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface CCUIConnectivityWiFiDefaults : BSAbstractDefaultDomain

@property (assign,nonatomic) BOOL didPresentDisconnectBehaviorAlert; 
+(id)standardDefaults;
-(void)setDidPresentDisconnectBehaviorAlert:(BOOL)arg1 ;
-(BOOL)didPresentDisconnectBehaviorAlert;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end

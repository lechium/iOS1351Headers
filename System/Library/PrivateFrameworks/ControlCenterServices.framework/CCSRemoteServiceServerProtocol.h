/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CCSRemoteServiceServerProtocol <NSObject>
@required
-(void)requestEnableModuleWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)requestAvailableModuleIdentifiersWithCompletionHandler:(/*^block*/id)arg1;
-(void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end


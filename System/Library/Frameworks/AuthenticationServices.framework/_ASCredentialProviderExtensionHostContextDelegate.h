/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _ASCredentialProviderExtensionHostContextDelegate <NSObject>
@optional
-(void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3;
-(void)prepareToCancelRequestWithHostContext:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3;
-(void)prepareToCompleteExtensionConfigurationRequestWithHost:(id)arg1 completion:(/*^block*/id)arg2;

@end


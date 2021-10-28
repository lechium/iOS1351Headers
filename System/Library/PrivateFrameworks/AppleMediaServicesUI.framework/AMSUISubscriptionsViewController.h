/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class AMSUIDynamicViewController, ACAccount, AMSProcessInfo, NSDictionary, NSString;

@interface AMSUISubscriptionsViewController : UIViewController <AMSBagConsumer> {

	AMSUIDynamicViewController* _dynamicViewController;

}

@property (nonatomic,readonly) AMSUIDynamicViewController * dynamicViewController;              //@synthesize dynamicViewController=_dynamicViewController - In the implementation block
@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,retain) id<AMSBagProtocol> bag; 
@property (nonatomic,retain) AMSProcessInfo * clientInfo; 
@property (nonatomic,retain) NSDictionary * metricsOverlay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(id)createBagForSubProfile;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)_setup;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)_setupChildViewController:(id)arg1 ;
-(AMSUIDynamicViewController *)dynamicViewController;
-(NSDictionary *)metricsOverlay;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
@end

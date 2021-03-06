/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTObject.h>
#import <libobjc.A.dylib/MTConfigDelegate.h>

@protocol AMSBagProtocol;
@class NSString;

@interface MTConfigAMSMetricsDelegate : MTObject <MTConfigDelegate> {

	id<AMSBagProtocol> _bag;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                //@synthesize bag=_bag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sources;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithAMSBag:(id)arg1 ;
@end


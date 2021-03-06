/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXButtonComponentTextProvider.h>

@protocol SXSubscriptionButtonTextProviding;
@class NSString;

@interface SXSubscriptionButtonComponentTextProvider : NSObject <SXButtonComponentTextProvider> {

	id<SXSubscriptionButtonTextProviding> _textProvider;

}

@property (nonatomic,readonly) id<SXSubscriptionButtonTextProviding> textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)textForComponent:(id)arg1 ;
-(id<SXSubscriptionButtonTextProviding>)textProvider;
-(id)initWithTextProvider:(id)arg1 ;
@end


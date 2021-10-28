/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUIFacebookViewElement : SKUIViewElement {

	long long _facebookType;
	NSString* _urlString;

}

@property (nonatomic,readonly) long long facebookType;              //@synthesize facebookType=_facebookType - In the implementation block
@property (nonatomic,readonly) NSString * URLString;                //@synthesize urlString=_urlString - In the implementation block
-(NSString *)URLString;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(long long)facebookType;
@end

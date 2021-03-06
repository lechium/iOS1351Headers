/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NLTaggerAssetRequest : NSObject {

	NSString* _language;
	NSString* _tagScheme;
	/*^block*/id _completionHandler;

}
+(void)checkAssetRequests;
-(BOOL)isFulfilled;
-(void)completeWithResult:(long long)arg1 error:(id)arg2 ;
-(id)initWithLanguage:(id)arg1 tagScheme:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)waitForFulfillment;
@end

